/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     ELSE = 266,
     ENDIF = 267,
     ELSEIF = 268,
     WHILE = 269,
     DO = 270,
     BEGINLOOP = 271,
     ENDLOOP = 272,
     BREAK = 273,
     CONTINUE = 274,
     END = 275,
     EXIT = 276,
     READ = 277,
     WRITE = 278,
     NOT = 279,
     TRUE = 280,
     FALSE = 281,
     SEMICOLON = 282,
     COLON = 283,
     COMMA = 284,
     QUESTION = 285,
     L_BRACKET = 286,
     R_BRACKET = 287,
     ASSIGN = 288,
     NUMBER = 289,
     IDENT = 290,
     R_PAREN = 291,
     L_PAREN = 292,
     GTE = 293,
     LTE = 294,
     GT = 295,
     LT = 296,
     NEQ = 297,
     EQ = 298,
     MOD = 299,
     DIV = 300,
     MULT = 301,
     ADD = 302,
     SUB = 303,
     AND = 304,
     OR = 305,
     ELSE_PREC = 306,
     IF_PREC = 307
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
#define ELSE 266
#define ENDIF 267
#define ELSEIF 268
#define WHILE 269
#define DO 270
#define BEGINLOOP 271
#define ENDLOOP 272
#define BREAK 273
#define CONTINUE 274
#define END 275
#define EXIT 276
#define READ 277
#define WRITE 278
#define NOT 279
#define TRUE 280
#define FALSE 281
#define SEMICOLON 282
#define COLON 283
#define COMMA 284
#define QUESTION 285
#define L_BRACKET 286
#define R_BRACKET 287
#define ASSIGN 288
#define NUMBER 289
#define IDENT 290
#define R_PAREN 291
#define L_PAREN 292
#define GTE 293
#define LTE 294
#define GT 295
#define LT 296
#define NEQ 297
#define EQ 298
#define MOD 299
#define DIV 300
#define MULT 301
#define ADD 302
#define SUB 303
#define AND 304
#define OR 305
#define ELSE_PREC 306
#define IF_PREC 307




/* Copy the first part of user declarations.  */
#line 4 "calc.y"

 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 FILE * yyin;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "calc.y"
{
  char* identToken;
  int numToken;
}
/* Line 193 of yacc.c.  */
#line 214 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 227 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   367

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    13,    17,    18,    28,    33,    37,
      38,    41,    45,    47,    50,    53,    60,    66,    73,    77,
      81,    83,    85,    90,    91,    95,    98,    99,   102,   105,
     109,   110,   114,   115,   119,   121,   123,   127,   132,   135,
     138,   143,   146,   149,   152,   155,   160,   162,   164,   168,
     172,   176,   180,   181,   185,   189,   190,   192,   194,   196,
     198,   200,   202,   204,   206,   208,   210,   212,   214,   216,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   310,   312,   314,   316,
     318,   320,   322,   324,   326
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    75,    76,    77,    55,    79,    -1,    56,
      78,    59,    -1,    57,    77,    56,    -1,    -1,    76,    58,
      80,    81,    82,    83,    84,    85,    86,    -1,    76,    58,
      80,    86,    -1,    87,    76,    58,    -1,    -1,    60,    77,
      -1,    59,    60,    77,    -1,    88,    -1,    89,    61,    -1,
      90,    61,    -1,    91,    92,    63,    93,    94,    65,    -1,
      94,    65,    92,    63,    93,    -1,    95,    65,    96,    63,
      64,    98,    -1,    62,    99,    70,    -1,    61,    87,    62,
      -1,    62,    -1,    76,    -1,    76,    82,    70,    84,    -1,
      -1,    60,    77,    63,    -1,    97,    63,    -1,    -1,    66,
      67,    -1,    69,    68,    -1,   101,    66,    67,    -1,    -1,
     100,    69,    68,    -1,    -1,    70,   105,    70,    -1,   102,
      -1,   103,    -1,    82,    65,    84,    -1,   104,    70,   105,
      70,    -1,   104,   102,    -1,   104,   103,    -1,   104,    82,
      65,    84,    -1,    71,    74,    -1,    72,    73,    -1,   110,
      62,    -1,   110,    83,    -1,   110,    82,    70,    84,    -1,
      62,    -1,    83,    -1,    82,    70,    84,    -1,    73,   106,
      72,    -1,    73,   107,    72,    -1,    73,   108,    72,    -1,
      -1,   109,    71,    74,    -1,   110,    71,    74,    -1,    -1,
       3,    -1,     1,    -1,    35,    -1,     1,    -1,    27,    -1,
       1,    -1,     4,    -1,     1,    -1,     5,    -1,     1,    -1,
      28,    -1,     1,    -1,     7,    -1,     1,    -1,    37,    -1,
       1,    -1,    34,    -1,     1,    -1,    36,    -1,     1,    -1,
       8,    -1,     1,    -1,     6,    -1,     1,    -1,    29,    -1,
       1,    -1,    19,    -1,     1,    -1,    23,    -1,     1,    -1,
      22,    -1,    15,    -1,     1,    -1,    16,    -1,     1,    -1,
      17,    -1,     1,    -1,    14,    -1,     1,    -1,     9,    -1,
      10,    -1,     1,    -1,    11,    -1,     1,    -1,    12,    -1,
       1,    -1,    33,    -1,     1,    -1,    49,    -1,     1,    -1,
      50,    -1,     1,    -1,    25,    -1,     1,    -1,    26,    -1,
      24,    -1,    43,    -1,    42,    -1,    41,    -1,    40,    -1,
      39,    -1,    38,    -1,    46,    -1,     1,    -1,    45,    -1,
      44,    -1,    47,    -1,     1,    -1,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    38,    42,    44,    48,    50,    55,    57,
      61,    63,    68,    70,    72,    74,    76,    78,    80,    83,
      85,    90,    92,    97,    98,   103,   105,   110,   115,   120,
     122,   126,   128,   133,   135,   137,   139,   141,   143,   145,
     147,   152,   158,   163,   165,   167,   169,   171,   173,   177,
     179,   181,   183,   187,   189,   191,   199,   200,   202,   203,
     206,   207,   211,   212,   216,   217,   221,   222,   225,   226,
     230,   231,   234,   235,   238,   239,   242,   243,   247,   248,
     251,   252,   256,   257,   260,   261,   265,   268,   269,   273,
     274,   278,   279,   283,   284,   287,   291,   292,   296,   297,
     300,   301,   304,   305,   309,   310,   314,   315,   319,   320,
     324,   328,   332,   333,   334,   335,   336,   337,   342,   343,
     347,   351,   355,   356,   360
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "BEGIN_PROGRAM",
  "END_PROGRAM", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ELSE", "ENDIF",
  "ELSEIF", "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "BREAK", "CONTINUE",
  "END", "EXIT", "READ", "WRITE", "NOT", "TRUE", "FALSE", "SEMICOLON",
  "COLON", "COMMA", "QUESTION", "L_BRACKET", "R_BRACKET", "ASSIGN",
  "NUMBER", "IDENT", "R_PAREN", "L_PAREN", "GTE", "LTE", "GT", "LT", "NEQ",
  "EQ", "MOD", "DIV", "MULT", "ADD", "SUB", "AND", "OR", "ELSE_PREC",
  "IF_PREC", "$accept", "program_start", "block", "declarations",
  "declaration", "identMore", "statements", "statement", "Vars", "Var",
  "statements1", "elseOption", "bool_exp", "relation_and_exp",
  "relation_or", "relation_and", "relation_exp", "expression",
  "multplicative_exp", "term", "terms", "moreMultExp", "program",
  "identifier", "semicolon", "beginprogram", "endprogram", "colon",
  "array", "left_paren", "number", "right_paren", "of", "integer", "comma",
  "continue", "write", "read", "do", "beginloop", "endloop", "while", "if",
  "then", "else", "endif", "assign", "and", "or", "true", "false", "not",
  "comp", "mult", "div", "mod", "plus", "minus", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    71,    72,    72,    72,    72,    72,    72,    73,
      73,    73,    73,    74,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     107,   108,   109,   109,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     3,     0,     9,     4,     3,     0,
       2,     3,     1,     2,     2,     6,     5,     6,     3,     3,
       1,     1,     4,     0,     3,     2,     0,     2,     2,     3,
       0,     3,     0,     3,     1,     1,     3,     4,     2,     2,
       4,     2,     2,     2,     2,     4,     1,     1,     3,     3,
       3,     3,     0,     3,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    57,    56,     0,     0,     1,    59,    58,     0,    61,
      60,     0,     0,     0,     0,     0,    65,    64,     2,    63,
      62,     0,     0,    81,    80,     0,     0,    94,    95,    93,
      87,    82,    86,    84,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     4,    67,    66,     0,     0,     0,
      10,   103,   102,     0,    71,    70,     0,     0,    20,     0,
      90,    89,     0,    59,   111,   108,   110,    72,   124,    46,
       0,     0,     0,     0,     0,    52,     0,    47,    34,    35,
       0,     0,     0,    69,    78,    68,     0,     7,     8,    11,
      59,    18,     0,     0,     0,     0,     0,     0,   107,   106,
      27,     0,   105,   104,    28,     0,   117,   116,   115,   114,
     113,   112,     0,   123,   122,    41,     0,     0,     0,     0,
       0,     0,     0,    38,    39,    43,     0,    44,    97,    96,
       0,     0,     0,    75,    74,    22,    19,     0,    92,    91,
       0,     0,     0,     0,    33,     0,     0,   119,   121,   120,
     118,     0,     0,     0,    36,    48,     0,     0,     0,     0,
      73,     0,    24,    94,     0,    16,    29,    31,    53,    54,
      49,    50,    51,    37,    40,    45,    99,    98,     0,     0,
       0,    15,   101,   100,    17,    25,    77,    76,     0,    79,
       6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    12,    13,    14,    25,    34,    95,    57,    69,
      96,   178,    70,    71,   100,   104,    72,    73,    74,    75,
     118,   115,     4,    37,    11,    21,    18,    47,    86,    92,
      77,   155,   188,    87,    26,    38,    39,    40,    41,    62,
     140,    42,    43,   130,   179,   184,    53,   105,   101,    78,
      79,    80,   112,   151,   152,   153,   116,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
     117,   -84,   -84,    30,    28,   -84,   -84,   -84,    84,   -84,
     -84,    21,    69,   178,    84,    93,   -84,   -84,   -84,   -84,
     -84,   332,    21,   -84,   -84,    14,    28,    92,   -84,   -84,
     -84,   -84,   -84,   -84,   300,    84,    10,    97,   -84,    28,
      28,    15,    27,    27,   -84,   -84,   -84,   199,    93,    84,
     -84,   -84,   -84,    66,   -84,   -84,    66,    70,   -84,   148,
     -84,   -84,   315,   233,   -84,   -84,   -84,   -84,   -84,   -84,
      15,   198,    56,   188,   197,   -84,    27,   -84,   -84,   -84,
     130,   116,   161,    31,   -84,   -84,     9,   -84,   -84,   -84,
     175,   -84,    66,     3,    28,    84,    16,   315,   -84,   -84,
     -84,    27,   -84,   -84,   -84,    27,   -84,   -84,   -84,   -84,
     -84,   -84,    66,   -84,   -84,   -84,    66,    66,   147,     3,
     179,   188,    27,   -84,   -84,   -84,    66,   -84,   -84,   -84,
     277,    25,     3,   -84,   -84,   -84,   -84,   262,   -84,   -84,
      20,    16,   198,    56,   -84,   197,   197,   -84,   -84,   -84,
     -84,    66,    66,    66,   -84,   -84,    66,     3,     3,   158,
     -84,     3,   -84,   -84,    27,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   103,   330,
      19,   -84,   -84,   -84,   -84,   -84,   -84,   -84,    89,   -84,
     -84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,    55,   -84,    62,   -84,    68,    -3,   -21,
     -83,   -84,   -41,    51,   -10,    17,    76,   -44,    95,    50,
     -84,    96,   -84,   150,   -11,   -84,   -84,   -84,   -84,   -36,
     -76,   -70,   -84,   -15,   109,   -84,   -84,   -84,   -84,   114,
      63,    83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   136,
     152,   -84,   129,   -84,   -84,   -84,   -84,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -110
static const yytype_int16 yytable[] =
{
      36,    56,    82,    22,   133,   127,    76,    76,   117,    91,
      54,    51,    93,    36,   141,    45,    60,   138,    58,    58,
     186,   163,     6,   135,    50,    -5,   160,   187,    63,     6,
       5,    61,   120,   139,    29,   119,   121,    59,    89,   134,
      76,    36,    46,    52,   122,   126,    55,   159,   132,   154,
     131,    64,    65,    66,   162,   161,     7,   102,   -79,    67,
     125,    67,     7,     7,    55,    76,   -32,    90,   144,    76,
      16,    23,   -32,   136,    17,    68,    36,    44,   120,   117,
     117,   157,   158,   -32,   137,     9,    76,   174,   175,    35,
     189,   180,   -32,   -59,    23,    84,   185,   -13,    54,    24,
      67,     7,    49,    55,   182,   103,   -32,   -21,   -88,    36,
      88,    10,   173,   -21,    68,   183,    36,    90,     1,   -83,
       2,    -9,    24,   181,   -21,   -59,   -21,   -85,    76,   -59,
     -21,    63,   166,   -21,    55,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   147,    23,
      67,     7,   142,    55,     8,    65,    66,   -42,    36,   176,
     167,    15,   128,   -42,    67,     7,    94,    55,    94,   177,
     -26,   129,    15,   190,   -42,   -14,    48,    24,    68,    19,
     133,   143,    20,   -42,    97,   -42,   -42,   -42,   -42,   -42,
     -42,   148,   149,   150,   -42,   -42,   -42,   -42,   113,    98,
      83,   170,   171,   172,   165,    84,    85,   -55,   -30,   -71,
     -71,   145,   146,   -55,   -30,   134,   123,   106,   107,   108,
     109,   110,   111,   164,   -55,   -30,   106,   107,   108,   109,
     110,   111,   124,   -55,   -30,   -55,   -55,   -55,   -55,   -55,
     -55,   168,   169,  -109,   114,    68,   -55,   -55,    99,  -109,
     156,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
    -109,     0,     0,    27,     0,     0,     0,   -71,   -71,     0,
       0,    28,     0,   -23,   -23,     0,    29,    30,    27,   -23,
       0,    31,  -109,  -109,    32,    33,    28,     0,   -23,   -23,
       0,    29,    30,     0,     0,     0,    31,     7,     0,    32,
      33,    27,     0,     0,     0,    -3,     0,     0,     0,    28,
       0,     0,     7,     0,    29,    30,    27,     0,     0,    31,
       0,     0,    32,    33,    28,     0,     0,     0,     0,    29,
      30,    27,   -23,    27,    31,     7,     0,    32,    33,    28,
       0,    28,   -23,     0,    29,    30,    29,    30,     0,    31,
       7,    31,    32,    33,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     7
};

static const yytype_int16 yycheck[] =
{
      21,    37,    43,    14,     1,    81,    42,    43,    74,    53,
       1,     1,    56,    34,    97,     1,     1,     1,    39,    40,
       1,     1,     1,    93,    35,     4,     1,     8,     1,     1,
       0,    16,    76,    17,    14,    76,    80,    40,    49,    36,
      76,    62,    28,    33,    80,    81,    37,   130,    92,   119,
      86,    24,    25,    26,   137,   131,    35,     1,    27,    34,
      81,    34,    35,    35,    37,   101,    10,     1,   112,   105,
       1,     1,    16,    94,     5,    48,    97,    22,   122,   145,
     146,   122,   126,    27,    95,     1,   122,   157,   158,    21,
       1,   161,    36,     1,     1,     6,   179,    27,     1,    29,
      34,    35,    34,    37,     1,    49,    50,    10,    16,   130,
      48,    27,   156,    16,    48,    12,   137,     1,     1,    27,
       3,    28,    29,   164,    27,    33,    29,    35,   164,    37,
      33,     1,   142,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     1,     1,
      34,    35,   101,    37,     4,    25,    26,    10,   179,     1,
     143,    11,     1,    16,    34,    35,    57,    37,    59,    11,
      12,    10,    22,   188,    27,    27,    26,    29,    48,     1,
       1,   105,     4,    36,    70,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     1,     1,
       1,   151,   152,   153,   141,     6,     7,    10,    10,    34,
      35,   116,   117,    16,    16,    36,    80,    38,    39,    40,
      41,    42,    43,   140,    27,    27,    38,    39,    40,    41,
      42,    43,    80,    36,    36,    38,    39,    40,    41,    42,
      43,   145,   146,    10,    47,    48,    49,    50,    50,    16,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    -1,     1,    -1,    -1,    -1,    34,    35,    -1,
      -1,     9,    -1,    11,    12,    -1,    14,    15,     1,    17,
      -1,    19,    49,    50,    22,    23,     9,    -1,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    19,    35,    -1,    22,
      23,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    -1,    35,    -1,    14,    15,     1,    -1,    -1,    19,
      -1,    -1,    22,    23,     9,    -1,    -1,    -1,    -1,    14,
      15,     1,    17,     1,    19,    35,    -1,    22,    23,     9,
      -1,     9,    12,    -1,    14,    15,    14,    15,    -1,    19,
      35,    19,    22,    23,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    54,    75,     0,     1,    35,    76,     1,
      27,    77,    55,    56,    57,    76,     1,     5,    79,     1,
       4,    78,    77,     1,    29,    58,    87,     1,     9,    14,
      15,    19,    22,    23,    59,    60,    62,    76,    88,    89,
      90,    91,    94,    95,    56,     1,    28,    80,    76,    60,
      77,     1,    33,    99,     1,    37,    82,    61,    62,    61,
       1,    16,    92,     1,    24,    25,    26,    34,    48,    62,
      65,    66,    69,    70,    71,    72,    82,    83,   102,   103,
     104,   110,    65,     1,     6,     7,    81,    86,    58,    77,
       1,    70,    82,    70,    87,    60,    63,    92,     1,    50,
      67,   101,     1,    49,    68,   100,    38,    39,    40,    41,
      42,    43,   105,     1,    47,    74,   109,   110,    73,    65,
      70,    70,    82,   102,   103,    62,    82,    83,     1,    10,
      96,    82,    70,     1,    36,    84,    62,    77,     1,    17,
      93,    63,    66,    69,    70,    71,    71,     1,    44,    45,
      46,   106,   107,   108,    84,    84,   105,    65,    70,    63,
       1,    83,    63,     1,    94,    93,    67,    68,    74,    74,
      72,    72,    72,    70,    84,    84,     1,    11,    64,    97,
      84,    65,     1,    12,    98,    63,     1,     8,    85,     1,
      86
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 33 "calc.y"
    {printf("program_start -> program identifier semicolon block endprogram\n");;}
    break;

  case 3:
#line 39 "calc.y"
    {printf("block -> declarations beginprogram statements\n");;}
    break;

  case 4:
#line 43 "calc.y"
    {printf("declarations -> declaration semicolon declarations\n");;}
    break;

  case 5:
#line 44 "calc.y"
    {printf("declarations -> epsilon\n");;}
    break;

  case 6:
#line 49 "calc.y"
    {printf("declaration -> identifier indentMore colon array left_paren number right_paren of integer\n");            ;}
    break;

  case 7:
#line 51 "calc.y"
    {printf("declaration -> indentifier indetMore colon integer\n");;}
    break;

  case 8:
#line 56 "calc.y"
    {printf("identMore -> comma identifier indentMore\n");;}
    break;

  case 9:
#line 57 "calc.y"
    {printf("identMore -> epsilon\n");;}
    break;

  case 10:
#line 62 "calc.y"
    {printf("statements -> statement semicolon\n");;}
    break;

  case 11:
#line 64 "calc.y"
    {printf("statements -> statements statement semicolon\n");;}
    break;

  case 12:
#line 69 "calc.y"
    {printf("statement -> continue\n");;}
    break;

  case 13:
#line 71 "calc.y"
    {printf("statement -> write Vars\n");;}
    break;

  case 14:
#line 73 "calc.y"
    {printf("statement -> read Vars\n");;}
    break;

  case 15:
#line 75 "calc.y"
    {printf("statement -> do beginloop statements1 endloop while bool_exp\n");;}
    break;

  case 16:
#line 77 "calc.y"
    {printf("statement -> while bool_exp beginloop statements1 endloop\n");;}
    break;

  case 17:
#line 79 "calc.y"
    {printf("statement -> if bool_exp then statements1 elseOption endif\n");;}
    break;

  case 18:
#line 80 "calc.y"
    {printf("statement -> Var assign expression\n");;}
    break;

  case 19:
#line 84 "calc.y"
    {printf("Vars -> Vars comma Var\n");}
    break;

  case 20:
#line 86 "calc.y"
    {printf("Vars -> Var\n");;}
    break;

  case 21:
#line 91 "calc.y"
    {printf("Var -> identifier\n");;}
    break;

  case 22:
#line 93 "calc.y"
    {printf("Vars -> identifier left_paren expression right_paren\n");;}
    break;

  case 23:
#line 97 "calc.y"
    {printf("statements1 -> epsilon\n");;}
    break;

  case 24:
#line 99 "calc.y"
    {printf("statements1 -> statement semicolon statements1\n");;}
    break;

  case 25:
#line 104 "calc.y"
    {printf("elseOpition -> else statements1\n");;}
    break;

  case 26:
#line 105 "calc.y"
    {printf("elseOpitoin -> epsilon\n");;}
    break;

  case 27:
#line 111 "calc.y"
    {printf("bool_exp -> relation_and_exp relation_or \n");;}
    break;

  case 28:
#line 116 "calc.y"
    {printf("relation_and_exp -> relation_exp relation_and\n");;}
    break;

  case 29:
#line 121 "calc.y"
    {printf("relation_or -> or relation_and_exp relation_or\n");;}
    break;

  case 30:
#line 122 "calc.y"
    {printf("relation_or -> epsilon\n");;}
    break;

  case 31:
#line 127 "calc.y"
    {printf("relation_and -> and relation_exp relation_and\n");;}
    break;

  case 32:
#line 128 "calc.y"
    {printf("relation_and -> epsilon\n");;}
    break;

  case 33:
#line 134 "calc.y"
    {printf("relation_exp -> expression comp expression\n");;}
    break;

  case 34:
#line 136 "calc.y"
    {printf("relation_exp -> true\n");;}
    break;

  case 35:
#line 138 "calc.y"
    {printf("relation_exp -> false\n");;}
    break;

  case 36:
#line 140 "calc.y"
    {printf("relation_exp -> left_paren bool_exp right_paren\n");;}
    break;

  case 37:
#line 142 "calc.y"
    {printf("relation_exp -> not expression comp expression\n");;}
    break;

  case 38:
#line 144 "calc.y"
    {printf("relation_exp -> not true\n");;}
    break;

  case 39:
#line 146 "calc.y"
    {printf("relation_exp -> not false\n");}
    break;

  case 40:
#line 148 "calc.y"
    {printf("relation_exp -> not left_paren bool_exp right_paren\n");;}
    break;

  case 41:
#line 153 "calc.y"
    {printf("expression -> multiplicative_exp moreMultExp\n");;}
    break;

  case 42:
#line 159 "calc.y"
    {printf("multplicative_exp -> term terms\n");;}
    break;

  case 43:
#line 164 "calc.y"
    {printf("term -> sub Vars\n");;}
    break;

  case 44:
#line 166 "calc.y"
    {printf("term -> sub number\n");;}
    break;

  case 45:
#line 168 "calc.y"
    {printf("term -> sub left_paren expression right_paren\n");;}
    break;

  case 46:
#line 170 "calc.y"
    {printf("term -> Var\n");;}
    break;

  case 47:
#line 172 "calc.y"
    {printf("term -> number\n");;}
    break;

  case 48:
#line 174 "calc.y"
    {printf("term -> left_paren expression right_paren\n");;}
    break;

  case 49:
#line 178 "calc.y"
    {printf("terms -> terms mult term\n");;}
    break;

  case 50:
#line 180 "calc.y"
    {printf("terms -> terms div term\n");;}
    break;

  case 51:
#line 182 "calc.y"
    {printf("terms -> terms mod term\n");;}
    break;

  case 52:
#line 183 "calc.y"
    {printf("terms -> epsilon\n");;}
    break;

  case 53:
#line 188 "calc.y"
    {printf("moreMultExp -> plus multplicative_exp moreMultExp\n");;}
    break;

  case 54:
#line 190 "calc.y"
    {printf("moreMultExp -> minus multiplicative_exp moreMultExp\n");;}
    break;

  case 55:
#line 191 "calc.y"
    {printf("moreMultExp -> epsilon\n");}
    break;

  case 56:
#line 199 "calc.y"
    {printf("program -> PROGRAM\n");;}
    break;

  case 57:
#line 200 "calc.y"
    {printf("error: program\n");;}
    break;

  case 58:
#line 202 "calc.y"
    {printf("identifier -> IDENT (%s)\n", (yyvsp[(1) - (1)].identToken));;}
    break;

  case 59:
#line 203 "calc.y"
    {printf("error: identifier\n");;}
    break;

  case 60:
#line 206 "calc.y"
    {printf("semicolon -> SEMICOLON\n");;}
    break;

  case 61:
#line 207 "calc.y"
    {printf("error: semicolon\n");;}
    break;

  case 62:
#line 211 "calc.y"
    {printf("begin_program -> BEGIN_PROGRAM\n");;}
    break;

  case 63:
#line 212 "calc.y"
    {printf("error: beginprogram\n");;}
    break;

  case 64:
#line 216 "calc.y"
    {printf("end_program ->END_PROGRAM\n");;}
    break;

  case 65:
#line 217 "calc.y"
    {printf("error: endprogram\n");;}
    break;

  case 66:
#line 221 "calc.y"
    {printf("colon -> COLON\n");;}
    break;

  case 67:
#line 222 "calc.y"
    {printf("error: colon\n");;}
    break;

  case 68:
#line 225 "calc.y"
    {printf("array -> ARRAY\n");;}
    break;

  case 69:
#line 226 "calc.y"
    {printf("error: array\n");;}
    break;

  case 70:
#line 230 "calc.y"
    {printf("l_paren -> L_PAREN\n");;}
    break;

  case 71:
#line 231 "calc.y"
    {printf("error: left_paren\n");;}
    break;

  case 72:
#line 234 "calc.y"
    {printf("number -> NUMBER(%d)\n", (yyvsp[(1) - (1)].numToken));;}
    break;

  case 73:
#line 235 "calc.y"
    {printf("error: number\n");;}
    break;

  case 74:
#line 238 "calc.y"
    {printf("r_paren -> R_PAREN\n");;}
    break;

  case 75:
#line 239 "calc.y"
    {printf("error: right_paren\n");;}
    break;

  case 76:
#line 242 "calc.y"
    {printf("of-> OF\n");;}
    break;

  case 77:
#line 243 "calc.y"
    {printf("error: of\n");;}
    break;

  case 78:
#line 247 "calc.y"
    {printf("integer -> INTEGER\n");;}
    break;

  case 79:
#line 248 "calc.y"
    {printf("error: integer\n");;}
    break;

  case 80:
#line 251 "calc.y"
    {printf("comma -> COMMA\n");;}
    break;

  case 81:
#line 252 "calc.y"
    {printf("error: comma\n");;}
    break;

  case 82:
#line 256 "calc.y"
    {printf("continue -> CONTINUE\n");;}
    break;

  case 83:
#line 257 "calc.y"
    {printf("error: continue\n");;}
    break;

  case 84:
#line 260 "calc.y"
    {printf("write -> WRITE\n");;}
    break;

  case 85:
#line 261 "calc.y"
    {printf("error: write\n");;}
    break;

  case 86:
#line 265 "calc.y"
    {printf("read -> READ\n");;}
    break;

  case 87:
#line 268 "calc.y"
    {printf("do -> DO\n");;}
    break;

  case 88:
#line 269 "calc.y"
    {printf("error: do\n");;}
    break;

  case 89:
#line 273 "calc.y"
    {printf("beginloop -> BEGINLOOP\n");;}
    break;

  case 90:
#line 274 "calc.y"
    {printf("error: beginloop\n");;}
    break;

  case 91:
#line 278 "calc.y"
    {printf("endloop -> ENDLOOP\n");;}
    break;

  case 92:
#line 279 "calc.y"
    {printf("error: endloop\n");;}
    break;

  case 93:
#line 283 "calc.y"
    {printf("while -> WHILE\n");;}
    break;

  case 94:
#line 284 "calc.y"
    {printf("error: while\n");;}
    break;

  case 95:
#line 287 "calc.y"
    {printf("if -> IF\n");;}
    break;

  case 96:
#line 291 "calc.y"
    {printf("then -> THEN\n");;}
    break;

  case 97:
#line 292 "calc.y"
    {printf("error: then\n");;}
    break;

  case 98:
#line 296 "calc.y"
    {printf("else -> ELSE\n");;}
    break;

  case 99:
#line 297 "calc.y"
    {printf("error: else\n");;}
    break;

  case 100:
#line 300 "calc.y"
    {printf("endif -> ENDIF\n");}
    break;

  case 101:
#line 301 "calc.y"
    {printf("error: endif\n");;}
    break;

  case 102:
#line 304 "calc.y"
    {printf("assign -> ASSIGN\n");;}
    break;

  case 103:
#line 305 "calc.y"
    {printf("error: assign\n");;}
    break;

  case 104:
#line 309 "calc.y"
    {printf("and -> AND\n");;}
    break;

  case 105:
#line 310 "calc.y"
    {printf("error: and\n");;}
    break;

  case 106:
#line 314 "calc.y"
    {printf("or -> OR\n");;}
    break;

  case 107:
#line 315 "calc.y"
    {printf("error: or\n");;}
    break;

  case 108:
#line 319 "calc.y"
    {printf("true -> TRUE\n");;}
    break;

  case 109:
#line 320 "calc.y"
    {printf("error: true\n");;}
    break;

  case 110:
#line 324 "calc.y"
    {printf("false -> FALSE\n");;}
    break;

  case 111:
#line 328 "calc.y"
    {printf("not -> NOT\n");;}
    break;

  case 112:
#line 332 "calc.y"
    {printf("comp -> EQ\n");;}
    break;

  case 113:
#line 333 "calc.y"
    {printf("comp -> NEQ\n");;}
    break;

  case 114:
#line 334 "calc.y"
    {printf("comp -> LT\n");;}
    break;

  case 115:
#line 335 "calc.y"
    {printf("comp -> GT\n");;}
    break;

  case 116:
#line 336 "calc.y"
    {printf("comp -> LTE\n");;}
    break;

  case 117:
#line 337 "calc.y"
    {printf("comp -> GTE\n");;}
    break;

  case 118:
#line 342 "calc.y"
    {printf("mult -> MULT\n");;}
    break;

  case 119:
#line 343 "calc.y"
    {printf("error: mult\n");;}
    break;

  case 120:
#line 347 "calc.y"
    {printf("div -> DIV\n");;}
    break;

  case 121:
#line 351 "calc.y"
    {printf("mod -> MOD\n");;}
    break;

  case 122:
#line 355 "calc.y"
    {printf("add -> ADD\n");;}
    break;

  case 123:
#line 356 "calc.y"
    {printf("error: plus\n");;}
    break;

  case 124:
#line 360 "calc.y"
    {printf("sub -> SUB\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 2265 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 365 "calc.y"


int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}


