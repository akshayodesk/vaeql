#include "VaeQueryLanguageLexer.h"
#include "VaeQueryLanguageParser.h"
#include "VaeQueryLanguageTreeParser.h"

#include "php.h"

#include "vaeql.h"
#include "php_vaeql.h"

#define EMPTY_STRING ""

char *resolveFunction(char *function, char **args) {
  zval func, retval, params[2];
  char *result, **arg;
  ZVAL_STRING(&params[0], function);
  ZVAL_STRING(&func, "_vaeql_function");
  array_init(&params[1]);
  for (arg = args; *arg; arg++) {
    add_next_index_string(&params[1], *arg);
  } 
  if (call_user_function(EG(function_table), NULL, &func, &retval, 2, params) == FAILURE) {
    return strdup(EMPTY_STRING);
  }
  convert_to_string(&retval);
  result = strdup(Z_STRVAL_P(&retval));
  return result;
}

RangeFunctionRange resolveRangeFunction(char *function, char **args) {
  zval func, retval, params[2], *retdata;
  HashTable *ret_hash;
  char **arg, foundLow = 0, foundHigh = 0;
  RangeFunctionRange r;
  r.low = r.high = 0;
  ZVAL_STRING(&params[0], function);
  ZVAL_STRING(&func, "_vaeql_range_function");
  array_init(&params[1]);
  for (arg = args; *arg; arg++) {
    add_next_index_string(&params[1], *arg);
  } 
  if (call_user_function(EG(function_table), NULL, &func, &retval, 2, params) == FAILURE) {
    return r;
  }
  ret_hash = Z_ARRVAL(retval);
  if (zend_hash_num_elements(ret_hash)) {
    ZEND_HASH_FOREACH_VAL(ret_hash, retdata) {
      convert_to_string(retdata);
      if (!foundLow) {
        r.low = atol(Z_STRVAL_P(retdata));
        foundLow = 1;
      } else if (!foundHigh) {
        r.high = atol(Z_STRVAL_P(retdata));
        foundHigh = 1;
      }
    } ZEND_HASH_FOREACH_END();
  }
  return r;
}

char *resolvePath(char *path) {
  zval func, retval, param, params[1];
  char *result;

  ZVAL_STRING(&params[0], path);
  ZVAL_STRING(&func, "_vaeql_path");
  if (call_user_function(EG(function_table), NULL, &func, &retval, 1, params) == FAILURE) {
    return strdup(EMPTY_STRING);
  }
  convert_to_string(&retval);
  result = strdup(Z_STRVAL_P(&retval));
  return result;
}

char *resolveVariable(char *variable) {
  zval func, retval, param, params[1];
  char *result;

  ZVAL_STRING(&params[0], variable);
  ZVAL_STRING(&func, "_vaeql_variable");
  if (call_user_function(EG(function_table), NULL, &func, &retval, 1, params) == FAILURE) {
    return strdup(EMPTY_STRING);
  }
  convert_to_string(&retval);
  result = strdup(Z_STRVAL_P(&retval));
  return result;
}

ZEND_NAMED_FUNCTION(_vaeql_query_internal) {
  
  /* PHP */
  zval args[1];
  char *query;
  
  /* VaeQueryLanguage */
  VaeQueryLanguageParser_start_return langAST;
  pVaeQueryLanguageLexer	lxr;
  pVaeQueryLanguageParser psr;
  pVaeQueryLanguageTreeParser treePsr;
  pANTLR3_INPUT_STREAM istream;
  pANTLR3_COMMON_TOKEN_STREAM	tstream;
  pANTLR3_COMMON_TREE_NODE_STREAM	nodes;
  VaeQueryLanguageTreeParser_start_return result;
  
  /* Pull in arg from PHP */
  if(ZEND_NUM_ARGS() != 1 || zend_get_parameters_array_ex(1, args) != SUCCESS) {
    WRONG_PARAM_COUNT;
  }
  convert_to_string_ex(&args[0]);
  query = (char *)Z_STRVAL_P(&args[0]);

  /* Lex and Parse */
  if (istream = antlr3NewAsciiStringInPlaceStream((uint8_t *)query, (ANTLR3_UINT64)strlen(query), NULL)) {
    if (lxr	= VaeQueryLanguageLexerNew(istream)) {
      if (tstream = antlr3CommonTokenStreamSourceNew(ANTLR3_SIZE_HINT, TOKENSOURCE(lxr))) {
        if (psr	= VaeQueryLanguageParserNew(tstream)) {
          langAST = psr->start(psr);
        	if (psr->pParser->rec->state->errorCount == 0) {
        		if (nodes	= antlr3CommonTreeNodeStreamNewTree(langAST.tree, ANTLR3_SIZE_HINT)) {
        		  if (treePsr	= VaeQueryLanguageTreeParserNew(nodes)) {
            	  result = treePsr->start(treePsr);
            	  if (result.result) {
                  array_init(return_value);
                  add_next_index_bool(return_value, result.isPath);
                  add_next_index_string(return_value, result.result->chars); 
                } else {
                  ZVAL_LONG(return_value, -2);
                }
            	  treePsr->free(treePsr);
        	    } else {
                ZVAL_LONG(return_value, -101);
        	    } 
          	  nodes->free(nodes);
          	} else {
              ZVAL_LONG(return_value, -102);
        	  }
        	} else {
            ZVAL_LONG(return_value, -1);
          }
        	psr->free(psr);
        } else {
          ZVAL_LONG(return_value, -103);
        }
      	tstream->free(tstream);
    	} else {
        ZVAL_LONG(return_value, -104);
  	  }
    	lxr->free(lxr);
    } else {
      ZVAL_LONG(return_value, -105);
    }
  	istream->close(istream);
  } else {
    ZVAL_LONG(return_value, -106);
  }
}

/* PHP Function Table */
static zend_function_entry VaeQueryLanguage_functions[] = {
  ZEND_NAMED_FE(_vaeql_query_internal, _vaeql_query_internal, NULL)
  {NULL, NULL, NULL}
};

/* PHP Boilerplate */
zend_module_entry VaeQueryLanguage_module_entry = {
#if ZEND_MODULE_API_NO > 20010900
    STANDARD_MODULE_HEADER,
#endif
    (char *)"VaeQueryLanguage",
    VaeQueryLanguage_functions,
    PHP_MINIT(VaeQueryLanguage),
    PHP_MSHUTDOWN(VaeQueryLanguage),
    PHP_RINIT(VaeQueryLanguage),
    PHP_RSHUTDOWN(VaeQueryLanguage),
    PHP_MINFO(VaeQueryLanguage),
#if ZEND_MODULE_API_NO > 20010900
    NO_VERSION_YET,
#endif
    STANDARD_MODULE_PROPERTIES
};

PHP_MINIT_FUNCTION(VaeQueryLanguage) {
  return SUCCESS;
}

PHP_RINIT_FUNCTION(VaeQueryLanguage) {
  return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(VaeQueryLanguage) {
  return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(VaeQueryLanguage) {
  return SUCCESS;
}

PHP_MINFO_FUNCTION(VaeQueryLanguage) {
}

ZEND_GET_MODULE(VaeQueryLanguage)
