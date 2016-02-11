/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     BEGIN_PROGRAM = 259,
     END_PROGRAM = 260,
     INTEGER = 261,
     ARRAY = 262,
     OF = 263,
     IF = 264,
     THEN = 265,
     ENDIF = 266,
     ELSEIF = 267,
     WHILE = 268,
     DO = 269,
     BEGINLOOP = 270,
     ENDLOOP = 271,
     BREAK = 272,
     CONTINUE = 273,
     EXIT = 274,
     READ = 275,
     WRITE = 276,
     NOT = 277,
     TRUE = 278,
     FALSE = 279,
     SEMICOLON = 280,
     COLON = 281,
     COMMA = 282,
     QUESTION = 283,
     L_BRACKET = 284,
     R_BRACKET = 285,
     ASSIGN = 286,
     NUMBER = 287,
     IDENT = 288,
     GTE = 289,
     LTE = 290,
     GT = 291,
     LT = 292,
     NEQ = 293,
     EQ = 294,
     MOD = 295,
     DIV = 296,
     MULT = 297,
     ADD = 298,
     SUB = 299,
     AND = 300,
     OR = 301,
     ELSE_PREC = 302,
     IF_PREC = 303
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define BEGIN_PROGRAM 259
#define END_PROGRAM 260
#define INTEGER 261
#define ARRAY 262
#define OF 263
#define IF 264
#define THEN 265
#define ENDIF 266
#define ELSEIF 267
#define WHILE 268
#define DO 269
#define BEGINLOOP 270
#define ENDLOOP 271
#define BREAK 272
#define CONTINUE 273
#define EXIT 274
#define READ 275
#define WRITE 276
#define NOT 277
#define TRUE 278
#define FALSE 279
#define SEMICOLON 280
#define COLON 281
#define COMMA 282
#define QUESTION 283
#define L_BRACKET 284
#define R_BRACKET 285
#define ASSIGN 286
#define NUMBER 287
#define IDENT 288
#define GTE 289
#define LTE 290
#define GT 291
#define LT 292
#define NEQ 293
#define EQ 294
#define MOD 295
#define DIV 296
#define MULT 297
#define ADD 298
#define SUB 299
#define AND 300
#define OR 301
#define ELSE_PREC 302
#define IF_PREC 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "calc.y"
{
  char* identToken;
  int numToken;
}
/* Line 1529 of yacc.c.  */
#line 150 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

