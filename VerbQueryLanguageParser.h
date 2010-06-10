/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : VerbQueryLanguage.g
 *     -                            On : 2010-06-10 11:23:12
 *     -                for the parser : VerbQueryLanguageParserParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser VerbQueryLanguageParser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pVerbQueryLanguageParser, which is returned from a call to VerbQueryLanguageParserNew().
 *
 * The methods in pVerbQueryLanguageParser are  as follows:
 *
 *  - VerbQueryLanguageParser_start_return      pVerbQueryLanguageParser->start(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_sqlquery_return      pVerbQueryLanguageParser->sqlquery(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_expr_return      pVerbQueryLanguageParser->expr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_value_expr_return      pVerbQueryLanguageParser->value_expr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_value_return      pVerbQueryLanguageParser->value(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_function_return      pVerbQueryLanguageParser->function(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_path_return      pVerbQueryLanguageParser->path(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicate_return      pVerbQueryLanguageParser->predicate(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicate_expr_return      pVerbQueryLanguageParser->predicate_expr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicate_value_expr_return      pVerbQueryLanguageParser->predicate_value_expr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicate_oper_return      pVerbQueryLanguageParser->predicate_oper(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_oper_return      pVerbQueryLanguageParser->oper(pVerbQueryLanguageParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_VerbQueryLanguageParser_H
#define _VerbQueryLanguageParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct VerbQueryLanguageParser_Ctx_struct VerbQueryLanguageParser, * pVerbQueryLanguageParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct VerbQueryLanguageParser_start_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_start_return;

typedef struct VerbQueryLanguageParser_sqlquery_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_sqlquery_return;

typedef struct VerbQueryLanguageParser_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_expr_return;

typedef struct VerbQueryLanguageParser_value_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_value_expr_return;

typedef struct VerbQueryLanguageParser_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_value_return;

typedef struct VerbQueryLanguageParser_function_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_function_return;

typedef struct VerbQueryLanguageParser_path_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_path_return;

typedef struct VerbQueryLanguageParser_predicate_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicate_return;

typedef struct VerbQueryLanguageParser_predicate_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicate_expr_return;

typedef struct VerbQueryLanguageParser_predicate_value_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicate_value_expr_return;

typedef struct VerbQueryLanguageParser_predicate_oper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicate_oper_return;

typedef struct VerbQueryLanguageParser_oper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_oper_return;



/** Context tracking structure for VerbQueryLanguageParser
 */
struct VerbQueryLanguageParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;


     VerbQueryLanguageParser_start_return (*start)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_sqlquery_return (*sqlquery)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_expr_return (*expr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_value_expr_return (*value_expr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_value_return (*value)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_function_return (*function)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_path_return (*path)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicate_return (*predicate)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicate_expr_return (*predicate_expr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicate_value_expr_return (*predicate_value_expr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicate_oper_return (*predicate_oper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_oper_return (*oper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct VerbQueryLanguageParser_Ctx_struct * ctx);
    /* @headerFile.members() */
    pANTLR3_BASE_TREE_ADAPTOR	adaptor;
    pANTLR3_VECTOR_FACTORY		vectors;
    /* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pVerbQueryLanguageParser VerbQueryLanguageParserNew         (pANTLR3_COMMON_TOKEN_STREAM instream);
ANTLR3_API pVerbQueryLanguageParser VerbQueryLanguageParserNewSSD      (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define FUNCTION      37
#define AND_ALT      39
#define EQUALITY      9
#define MOD      24
#define GTE      16
#define SUB      22
#define FLOAT      36
#define AXIS      38
#define NOT      20
#define AND      17
#define EOF      -1
#define LTE      14
#define INEQUALITY_ALT      12
#define LPAREN      29
#define EQUALITY_ALT      10
#define AT      8
#define LBRACKET      27
#define SQL      7
#define RPAREN      30
#define GREATER      15
#define SLASH      6
#define ESC_SEQ      42
#define COMMA      31
#define PATH      32
#define LESS      13
#define OR_ALT      40
#define IFFALSE      26
#define XOR_ALT      41
#define RBRACKET      28
#define ADD      21
#define XOR      19
#define NODE_PATH      5
#define NODE_PREDICATE      4
#define IFTRUE      25
#define INEQUALITY      11
#define INT      35
#define MULT      23
#define WS      44
#define VARIABLE      33
#define OR      18
#define PATH_END      43
#define STRING      34
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for VerbQueryLanguageParser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
