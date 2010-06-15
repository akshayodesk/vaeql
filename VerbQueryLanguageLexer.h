/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : VerbQueryLanguage.g
 *     -                            On : 2010-06-15 12:54:37
 *     -                 for the lexer : VerbQueryLanguageLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer VerbQueryLanguageLexer has the callable functions (rules) shown below,
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
 * a parser context typedef pVerbQueryLanguageLexer, which is returned from a call to VerbQueryLanguageLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pVerbQueryLanguageLexer are  as follows:
 *
 *  -  void      pVerbQueryLanguageLexer->DIV(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->SLASH(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->SQL(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->AT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->XPATH_AXIS_SEP(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->EQUALITY(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->EQUALITY_ALT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->INEQUALITY(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->INEQUALITY_ALT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->LESS(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->LTE(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->GREATER(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->GTE(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->AND(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->OR(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->XOR(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->NOT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->ADD_TOK(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->SUB(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->MULT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->MOD(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->PIPE(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->POOPOO(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->IFTRUE(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->IFFALSE(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->LBRACKET(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->RBRACKET(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->LPAREN(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->RPAREN(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->COMMA(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->STRING(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->FLOAT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->INT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->VARIABLE(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->FUNCTION(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->AND_ALT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->OR_ALT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->XOR_ALT(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->XPATH_AXES(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->NAME(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->DOT_STEP(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->WS(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->ESC_SEQ(pVerbQueryLanguageLexer)
 *  -  void      pVerbQueryLanguageLexer->Tokens(pVerbQueryLanguageLexer)
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

#ifndef	_VerbQueryLanguageLexer_H
#define _VerbQueryLanguageLexer_H
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
typedef struct VerbQueryLanguageLexer_Ctx_struct VerbQueryLanguageLexer, * pVerbQueryLanguageLexer;



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

/** Context tracking structure for VerbQueryLanguageLexer
 */
struct VerbQueryLanguageLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mDIV)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mSLASH)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mSQL)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mAT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mXPATH_AXIS_SEP)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mEQUALITY)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mEQUALITY_ALT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mINEQUALITY)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mINEQUALITY_ALT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mLESS)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mLTE)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mGREATER)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mGTE)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mAND)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mOR)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mXOR)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mNOT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mADD_TOK)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mSUB)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mMULT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mMOD)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mPIPE)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mPOOPOO)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mIFTRUE)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mIFFALSE)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mLBRACKET)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mRBRACKET)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mLPAREN)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mRPAREN)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mCOMMA)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mSTRING)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mFLOAT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mINT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mVARIABLE)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mFUNCTION)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mAND_ALT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mOR_ALT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mXOR_ALT)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mXPATH_AXES)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mNAME)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mDOT_STEP)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mWS)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mESC_SEQ)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct VerbQueryLanguageLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct VerbQueryLanguageLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pVerbQueryLanguageLexer VerbQueryLanguageLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pVerbQueryLanguageLexer VerbQueryLanguageLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
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
#define AND_ALT      47
#define FUNCTION      42
#define EQUALITY      17
#define MOD      32
#define NODE_FUNCTION      5
#define GTE      24
#define SUB      30
#define FLOAT      51
#define NOT      28
#define AND      25
#define EOF      -1
#define LTE      22
#define LPAREN      39
#define INEQUALITY_ALT      20
#define DOT_STEP      45
#define EQUALITY_ALT      18
#define AT      15
#define LBRACKET      37
#define NODE_ABSOLUTE      4
#define SQL      14
#define RPAREN      40
#define NAME      44
#define ESC_SEQ      53
#define SLASH      13
#define GREATER      23
#define COMMA      41
#define NODE_VALUE      11
#define XPATH_AXIS_SEP      16
#define LESS      21
#define OR_ALT      48
#define PIPE      33
#define XOR_ALT      49
#define XPATH_AXES      46
#define IFFALSE      36
#define RBRACKET      38
#define XOR      27
#define NODE_PATH      8
#define NODE_PREDICATE      9
#define ADD_TOK      29
#define POOPOO      34
#define IFTRUE      35
#define NODE_PARENEXPR      7
#define INEQUALITY      19
#define INT      43
#define MULT      31
#define NODE_IF      6
#define WS      54
#define VARIABLE      52
#define OR      26
#define DIV      12
#define NODE_SQL      10
#define STRING      50
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for VerbQueryLanguageLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
