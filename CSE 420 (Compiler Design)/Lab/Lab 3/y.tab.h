/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     ID = 261,
     LPAREN = 262,
     RPAREN = 263,
     COMMA = 264,
     LCURL = 265,
     RCURL = 266,
     SEMICOLON = 267,
     INT = 268,
     FLOAT = 269,
     VOID = 270,
     LTHIRD = 271,
     RTHIRD = 272,
     CONST_INT = 273,
     CONST_FLOAT = 274,
     DEFAULT = 275,
     WHILE = 276,
     PRINTLN = 277,
     RETURN = 278,
     ASSIGNOP = 279,
     LOGICOP = 280,
     RELOP = 281,
     ADDOP = 282,
     MULOP = 283,
     NOT = 284,
     INCOP = 285,
     DECOP = 286,
     DO = 287,
     BREAK = 288,
     CONTINUE = 289,
     CHAR = 290,
     DOUBLE = 291,
     SWITCH = 292,
     CASE = 293
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define ID 261
#define LPAREN 262
#define RPAREN 263
#define COMMA 264
#define LCURL 265
#define RCURL 266
#define SEMICOLON 267
#define INT 268
#define FLOAT 269
#define VOID 270
#define LTHIRD 271
#define RTHIRD 272
#define CONST_INT 273
#define CONST_FLOAT 274
#define DEFAULT 275
#define WHILE 276
#define PRINTLN 277
#define RETURN 278
#define ASSIGNOP 279
#define LOGICOP 280
#define RELOP 281
#define ADDOP 282
#define MULOP 283
#define NOT 284
#define INCOP 285
#define DECOP 286
#define DO 287
#define BREAK 288
#define CONTINUE 289
#define CHAR 290
#define DOUBLE 291
#define SWITCH 292
#define CASE 293



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
