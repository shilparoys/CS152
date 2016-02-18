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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

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
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    13,    17,    18,    24,    30,    31,
      35,    36,    40,    41,    43,    47,    51,    60,    68,    77,
      81,    86,    87,    91,    92,    95,    99,   100,   103,   106,
     110,   111,   115,   116,   119,   121,   125,   127,   129,   133,
     136,   139,   142,   144,   148,   152,   156,   157,   159,   161,
     165,   169,   173,   174,   176,   178,   180,   182,   184,   186,
     188,   190,   192,   194,   196,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
     228,   230,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   250,   252,   254
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    78,    79,    80,    55,    82,    -1,    56,
      81,    60,    -1,    57,    80,    56,    -1,    -1,    79,    59,
      83,    58,    89,    -1,    84,    85,    86,    87,    88,    -1,
      -1,    90,    79,    59,    -1,    -1,    61,    80,    60,    -1,
      -1,    91,    -1,    92,    64,    63,    -1,    93,    64,    63,
      -1,    94,    95,    61,    80,    60,    96,    97,    66,    -1,
      97,    66,    95,    61,    80,    60,    96,    -1,    98,    66,
      99,    61,    80,    60,    62,   101,    -1,    64,   102,    72,
      -1,   100,    61,    80,    60,    -1,    -1,    90,    64,    63,
      -1,    -1,    79,    65,    -1,    85,    72,    87,    -1,    -1,
      67,    68,    -1,    70,    69,    -1,   104,    67,    68,    -1,
      -1,   103,    70,    69,    -1,    -1,   107,    71,    -1,    71,
      -1,    72,   108,    72,    -1,   105,    -1,   106,    -1,    85,
      66,    87,    -1,    73,    77,    -1,    74,    75,    -1,   113,
      76,    -1,    76,    -1,   109,    74,    75,    -1,   110,    74,
      75,    -1,   111,    74,    75,    -1,    -1,    64,    -1,    86,
      -1,    85,    72,    87,    -1,   112,    73,    77,    -1,   113,
      73,    77,    -1,    -1,     3,    -1,    35,    -1,    27,    -1,
       4,    -1,     5,    -1,    28,    -1,     7,    -1,    37,    -1,
      34,    -1,    36,    -1,     8,    -1,     6,    -1,    29,    -1,
      19,    -1,    23,    -1,    22,    -1,    15,    -1,    16,    -1,
      17,    -1,    14,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    33,    -1,    49,    -1,    50,    -1,    25,    -1,
      26,    -1,    24,    -1,    43,    -1,    42,    -1,    41,    -1,
      40,    -1,    39,    -1,    38,    -1,    46,    -1,    45,    -1,
      44,    -1,    47,    -1,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    38,    42,    45,    49,    54,    57,    62,
      65,    69,    72,    76,    78,    80,    82,    84,    86,    88,
      92,    95,    99,   102,   106,   111,   114,   118,   123,   128,
     130,   134,   136,   141,   143,   149,   151,   153,   155,   161,
     167,   172,   174,   179,   181,   183,   186,   190,   192,   194,
     200,   202,   204,   212,   214,   217,   221,   225,   229,   232,
     236,   239,   242,   245,   249,   252,   256,   259,   263,   266,
     270,   274,   278,   281,   285,   289,   292,   295,   299,   303,
     307,   311,   315,   319,   320,   321,   322,   323,   324,   329,
     333,   337,   341,   345
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
  "declaration", "declaration2", "identMore", "statements", "statement",
  "statement1", "Vars", "Var", "var2", "bool_exp", "relation_and_exp",
  "relation_or", "relation_and", "relation_exp", "relation_exp2",
  "expression", "multplicative_exp", "term", "term1", "term2",
  "moreMultExp", "program", "identifier", "semicolon", "beginprogram",
  "endprogram", "colon", "array", "left_paren", "number", "right_paren",
  "of", "integer", "comma", "continue", "write", "read", "do", "beginloop",
  "endloop", "while", "if", "then", "else", "endif", "assign", "and", "or",
  "true", "false", "not", "comp", "mult", "div", "mod", "plus", "minus", 0
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
       0,    53,    54,    55,    56,    56,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    64,    65,    65,    66,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    72,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    76,
      77,    77,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   108,   108,   108,   108,   108,   109,
     110,   111,   112,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     3,     0,     5,     5,     0,     3,
       0,     3,     0,     1,     3,     3,     8,     7,     8,     3,
       4,     0,     3,     0,     2,     3,     0,     2,     2,     3,
       0,     3,     0,     2,     1,     3,     1,     1,     3,     2,
       2,     2,     1,     3,     3,     3,     0,     1,     1,     3,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    53,     0,     0,     1,    54,     0,    55,     5,     0,
       0,     0,    10,    57,     2,    56,    12,     5,    65,     0,
       0,    73,    72,    69,    66,    68,    67,     3,     0,     0,
      26,    13,     0,     0,     0,     0,     0,     4,    58,     8,
      10,    12,    77,     0,    60,    24,     0,    23,    23,    70,
       0,    82,    80,    81,    61,    93,    47,     0,    30,    32,
      34,     0,    52,    46,    42,     0,    48,    36,    37,     0,
       0,     0,    59,     0,     0,     9,    11,    19,     0,     0,
      14,     0,    15,     0,     0,    79,    27,     0,    78,    28,
       0,    88,    87,    86,    85,    84,    83,     0,    92,    39,
       0,     0,    91,    90,    89,    40,     0,     0,     0,     0,
       0,    33,    41,    74,     0,    64,     6,     0,     0,    62,
      25,    23,    12,     0,    30,    32,    35,    52,    52,    46,
      46,    46,    38,    49,     0,     0,    22,     0,    12,    29,
      31,    50,    51,    43,    44,    45,    12,     0,    71,     0,
       0,    21,    63,     7,     0,    17,    75,     0,     0,    16,
      76,    18,     0,    12,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    73,    19,    27,    28,   157,
      80,    56,    45,    57,    58,    86,    89,    59,    60,    61,
      62,    63,   105,    64,    99,     3,    30,     8,    16,    14,
      39,    74,    78,    66,   133,   153,   116,    81,    31,    32,
      33,    34,    50,   149,    35,    36,   114,   158,   161,    43,
      90,    87,    67,    68,    69,    97,   106,   107,   108,   100,
      70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int8 yypact[] =
{
      13,   -97,    23,     6,   -97,   -97,    -1,   -97,     6,    35,
      40,    -1,    14,   -97,   -97,   -97,    39,     6,   -97,    24,
       6,   -97,   -97,   -97,   -97,   -97,   -97,   -97,    -1,    26,
      27,   -97,     6,     6,    50,    56,    56,   -97,   -97,    61,
      14,    39,   -97,    68,   -97,   -97,    68,    14,    14,   -97,
      39,   -97,   -97,   -97,   -97,   -97,   -97,    50,    28,    34,
     -97,   114,   -19,     5,   -97,    56,   -97,   -97,   -97,    62,
     -13,    63,   -97,    71,    27,   -97,   -97,   -97,    68,    48,
     -97,     6,   -97,    -1,    39,   -97,   -97,    56,   -97,   -97,
      56,   -97,   -97,   -97,   -97,   -97,   -97,    68,   -97,   -97,
      68,    68,   -97,   -97,   -97,   -97,    68,    68,    68,    48,
      95,   -97,   -97,   -97,    39,   -97,   -97,    52,    48,   -97,
     -97,    14,    39,    -1,    28,    34,   -97,   -19,   -19,     5,
       5,     5,   -97,   -97,    -1,    48,   -97,    72,    39,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,    39,    84,   -97,    80,
      72,    87,   -97,   -97,    56,   -97,   -97,    83,    39,   -97,
     -97,   -97,    -1,    39,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,    89,   -97,   -97,    67,   -37,   -45,   -97,
     -42,   -14,   -97,   -35,    30,   -10,    -7,    21,    46,   -32,
     -88,   -51,    -9,    55,   -96,   -97,    17,   -11,   -97,   -97,
     -97,   -97,   -27,    11,   -64,   -97,   -97,    -5,   -97,   -97,
     -97,   -97,    73,   -21,    -8,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -52
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,    71,    29,    46,    76,    83,    82,    20,    65,    65,
     101,    77,   127,   128,    79,   120,     1,    41,    47,    48,
       6,    54,     5,     4,    44,    12,     7,    29,    98,    55,
     109,   141,   142,   110,    12,    20,    29,    40,    65,   123,
      13,     5,    65,    18,    15,   132,   118,   117,    21,   102,
     103,   104,    38,    22,    23,   129,   130,   131,    24,    42,
      65,    25,    26,    65,    44,   126,    49,   121,    72,   134,
      29,   147,   122,   113,     5,   101,   101,   115,    85,   136,
      51,    52,    53,    88,   119,   137,    54,    52,    53,   148,
      54,     5,   152,    44,    22,   160,    54,     5,   156,    44,
      29,   150,    54,     5,    55,    44,    37,    75,    29,   151,
      55,   125,   138,   162,   139,   111,    55,   124,   140,   159,
     143,   144,   145,   146,    29,   112,   164,    65,   135,   155,
      84,   119,    29,    91,    92,    93,    94,    95,    96,     0,
       0,   154,     0,     0,    29,     0,     0,     0,     0,    29,
       0,   163,    91,    92,    93,    94,    95,    96
};

static const yytype_int16 yycheck[] =
{
      11,    36,    16,    30,    41,    50,    48,    12,    35,    36,
      62,    43,   100,   101,    46,    79,     3,    28,    32,    33,
       3,    34,    35,     0,    37,     8,    27,    41,    47,    48,
      65,   127,   128,    65,    17,    40,    50,    20,    65,    84,
       5,    35,    69,    29,     4,   109,    78,    74,     9,    44,
      45,    46,    28,    14,    15,   106,   107,   108,    19,    33,
      87,    22,    23,    90,    37,    97,    16,    81,     7,   114,
      84,   135,    83,    10,    35,   127,   128,     6,    50,   121,
      24,    25,    26,    49,    36,   122,    34,    25,    26,    17,
      34,    35,     8,    37,    14,    12,    34,    35,    11,    37,
     114,   138,    34,    35,    48,    37,    17,    40,   122,   146,
      48,    90,   123,   158,   124,    69,    48,    87,   125,   154,
     129,   130,   131,   134,   138,    70,   163,   154,   117,   150,
      57,    36,   146,    38,    39,    40,    41,    42,    43,    -1,
      -1,   149,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
      -1,   162,    38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    78,     0,    35,    79,    27,    80,    55,
      56,    57,    79,     5,    82,     4,    81,    80,    29,    59,
      90,     9,    14,    15,    19,    22,    23,    60,    61,    64,
      79,    91,    92,    93,    94,    97,    98,    56,    28,    83,
      79,    80,    33,   102,    37,    65,    85,    64,    64,    16,
      95,    24,    25,    26,    34,    48,    64,    66,    67,    70,
      71,    72,    73,    74,    76,    85,    86,   105,   106,   107,
     113,    66,     7,    58,    84,    59,    60,    72,    85,    72,
      63,    90,    63,    61,    95,    50,    68,   104,    49,    69,
     103,    38,    39,    40,    41,    42,    43,   108,    47,    77,
     112,   113,    44,    45,    46,    75,   109,   110,   111,    66,
      72,    71,    76,    10,    99,     6,    89,    85,    72,    36,
      87,    64,    80,    61,    67,    70,    72,    73,    73,    74,
      74,    74,    87,    87,    61,    86,    63,    60,    80,    68,
      69,    77,    77,    75,    75,    75,    80,    87,    17,    96,
      60,    60,     8,    88,    97,    96,    11,    62,   100,    66,
      12,   101,    61,    80,    60
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
#line 45 "calc.y"
    {printf("declarations -> epsilon\n");;}
    break;

  case 6:
#line 50 "calc.y"
    {printf("declaration -> identifier identMore colon declaration2 integer\n");            ;}
    break;

  case 7:
#line 55 "calc.y"
    {printf("declaration2 -> array left_paren number right_paren of\n");;}
    break;

  case 8:
#line 57 "calc.y"
    {printf("declaration2 -> epsilon\n");;}
    break;

  case 9:
#line 63 "calc.y"
    {printf("identMore -> comma identifier indentMore\n");;}
    break;

  case 10:
#line 65 "calc.y"
    {printf("identMore -> epsilon\n");;}
    break;

  case 11:
#line 70 "calc.y"
    {printf("statements -> statement semicolon statements\n");;}
    break;

  case 12:
#line 72 "calc.y"
    {printf("statements -> epsilon\n");;}
    break;

  case 13:
#line 77 "calc.y"
    {printf("statement -> continue\n");;}
    break;

  case 14:
#line 79 "calc.y"
    {printf("statement -> write Var Vars\n");;}
    break;

  case 15:
#line 81 "calc.y"
    {printf("statement -> read Var Vars\n");;}
    break;

  case 16:
#line 83 "calc.y"
    {printf("statement -> do beginloop statement semicolon statements endloop while bool_exp\n");;}
    break;

  case 17:
#line 85 "calc.y"
    {printf("statement -> while bool_exp beginloop statement semicolon statements endloop\n");;}
    break;

  case 18:
#line 87 "calc.y"
    {printf("statement -> if bool_exp then statement semicolon statements statement1 endif\n");;}
    break;

  case 19:
#line 88 "calc.y"
    {printf("statement -> Var assign expression\n");;}
    break;

  case 20:
#line 93 "calc.y"
    {printf("statement1 -> else statement semicolon statements\n");;}
    break;

  case 21:
#line 95 "calc.y"
    {printf("statement1 -> epsilon\n");;}
    break;

  case 22:
#line 100 "calc.y"
    {printf("Vars -> comma Var Vars\n");}
    break;

  case 23:
#line 102 "calc.y"
    {printf("Vars -> epsilon\n");;}
    break;

  case 24:
#line 107 "calc.y"
    {printf("Var -> identifier var2\n");;}
    break;

  case 25:
#line 112 "calc.y"
    {printf("var2 -> left_paren expression right_paren\n");;}
    break;

  case 26:
#line 114 "calc.y"
    {printf("var2 -> epsilon\n");;}
    break;

  case 27:
#line 119 "calc.y"
    {printf("bool_exp -> relation_and_exp relation_or \n");;}
    break;

  case 28:
#line 124 "calc.y"
    {printf("relation_and_exp -> relation_exp relation_and\n");;}
    break;

  case 29:
#line 129 "calc.y"
    {printf("relation_or -> or relation_and_exp relation_or\n");;}
    break;

  case 30:
#line 130 "calc.y"
    {printf("relation_or -> epsilon\n");;}
    break;

  case 31:
#line 135 "calc.y"
    {printf("relation_and -> and relation_exp relation_and\n");;}
    break;

  case 32:
#line 136 "calc.y"
    {printf("relation_and -> epsilon\n");;}
    break;

  case 33:
#line 142 "calc.y"
    {printf("relation_exp -> not relation_exp2\n");;}
    break;

  case 34:
#line 144 "calc.y"
    {printf("relation_exp -> relation_exp2\n");;}
    break;

  case 35:
#line 150 "calc.y"
    {printf("relation_exp2 -> expression comp expression\n");;}
    break;

  case 36:
#line 152 "calc.y"
    {printf("relation_exp2 -> true\n");;}
    break;

  case 37:
#line 154 "calc.y"
    {printf("relation_exp2 -> false\n");;}
    break;

  case 38:
#line 156 "calc.y"
    {printf("relation_exp2 -> left_paren bool_exp right_paren\n");;}
    break;

  case 39:
#line 162 "calc.y"
    {printf("expression -> multiplicative_exp moreMultExp\n");;}
    break;

  case 40:
#line 168 "calc.y"
    {printf("multplicative_exp -> term term1\n");;}
    break;

  case 41:
#line 173 "calc.y"
    {printf("term -> minus term2\n");;}
    break;

  case 42:
#line 175 "calc.y"
    {printf("term -> term2\n");;}
    break;

  case 43:
#line 180 "calc.y"
    {printf("term1 -> mult term term1\n");;}
    break;

  case 44:
#line 182 "calc.y"
    {printf("term1 -> div term term1\n");;}
    break;

  case 45:
#line 184 "calc.y"
    {printf("term1 -> mod term term1\n");;}
    break;

  case 46:
#line 186 "calc.y"
    {printf("term1 -> epsilon term1\n");;}
    break;

  case 47:
#line 191 "calc.y"
    {printf("term2 -> Var\n");;}
    break;

  case 48:
#line 193 "calc.y"
    {printf("term2 -> number\n");;}
    break;

  case 49:
#line 195 "calc.y"
    {printf("term2 -> left_paren expression right_paren\n");;}
    break;

  case 50:
#line 201 "calc.y"
    {printf("moreMultExp -> plus multplicative_exp moreMultExp\n");;}
    break;

  case 51:
#line 203 "calc.y"
    {printf("moreMultExp -> minus multiplicative_exp moreMultExp\n");;}
    break;

  case 52:
#line 204 "calc.y"
    {printf("moreMultExp -> epsilon\n");}
    break;

  case 53:
#line 212 "calc.y"
    {printf("program -> PROGRAM\n");;}
    break;

  case 54:
#line 214 "calc.y"
    {printf("identifier -> IDENT (%s)\n", (yyvsp[(1) - (1)].identToken));;}
    break;

  case 55:
#line 217 "calc.y"
    {printf("semicolon -> SEMICOLON\n");;}
    break;

  case 56:
#line 221 "calc.y"
    {printf("begin_program -> BEGIN_PROGRAM\n");;}
    break;

  case 57:
#line 225 "calc.y"
    {printf("end_program ->END_PROGRAM\n");;}
    break;

  case 58:
#line 229 "calc.y"
    {printf("colon -> COLON\n");;}
    break;

  case 59:
#line 232 "calc.y"
    {printf("array -> ARRAY\n");;}
    break;

  case 60:
#line 236 "calc.y"
    {printf("l_paren -> L_PAREN\n");;}
    break;

  case 61:
#line 239 "calc.y"
    {printf("number -> NUMBER(%d)\n", (yyvsp[(1) - (1)].numToken));;}
    break;

  case 62:
#line 242 "calc.y"
    {printf("r_paren -> R_PAREN\n");;}
    break;

  case 63:
#line 245 "calc.y"
    {printf("of-> OF\n");;}
    break;

  case 64:
#line 249 "calc.y"
    {printf("integer -> INTEGER\n");;}
    break;

  case 65:
#line 252 "calc.y"
    {printf("comma -> COMMA\n");;}
    break;

  case 66:
#line 256 "calc.y"
    {printf("continue -> CONTINUE\n");;}
    break;

  case 67:
#line 259 "calc.y"
    {printf("write -> WRITE\n");;}
    break;

  case 68:
#line 263 "calc.y"
    {printf("read -> READ\n");;}
    break;

  case 69:
#line 266 "calc.y"
    {printf("do -> DO\n");;}
    break;

  case 70:
#line 270 "calc.y"
    {printf("beginloop -> BEGINLOOP\n");;}
    break;

  case 71:
#line 274 "calc.y"
    {printf("endloop -> ENDLOOP\n");;}
    break;

  case 72:
#line 278 "calc.y"
    {printf("while -> WHILE\n");;}
    break;

  case 73:
#line 281 "calc.y"
    {printf("if -> IF\n");;}
    break;

  case 74:
#line 285 "calc.y"
    {printf("then -> THEN\n");;}
    break;

  case 75:
#line 289 "calc.y"
    {printf("else -> ELSE\n");;}
    break;

  case 76:
#line 292 "calc.y"
    {printf("endif -> ENDIF\n");}
    break;

  case 77:
#line 295 "calc.y"
    {printf("assign -> ASSIGN\n");;}
    break;

  case 78:
#line 299 "calc.y"
    {printf("and -> AND\n");;}
    break;

  case 79:
#line 303 "calc.y"
    {printf("or -> OR\n");;}
    break;

  case 80:
#line 307 "calc.y"
    {printf("true -> TRUE\n");;}
    break;

  case 81:
#line 311 "calc.y"
    {printf("false -> FALSE\n");;}
    break;

  case 82:
#line 315 "calc.y"
    {printf("not -> NOT\n");;}
    break;

  case 83:
#line 319 "calc.y"
    {printf("comp -> EQ\n");;}
    break;

  case 84:
#line 320 "calc.y"
    {printf("comp -> NEQ\n");;}
    break;

  case 85:
#line 321 "calc.y"
    {printf("comp -> LT\n");;}
    break;

  case 86:
#line 322 "calc.y"
    {printf("comp -> GT\n");;}
    break;

  case 87:
#line 323 "calc.y"
    {printf("comp -> LTE\n");;}
    break;

  case 88:
#line 324 "calc.y"
    {printf("comp -> GTE\n");;}
    break;

  case 89:
#line 329 "calc.y"
    {printf("mult -> MULT\n");;}
    break;

  case 90:
#line 333 "calc.y"
    {printf("div -> DIV\n");;}
    break;

  case 91:
#line 337 "calc.y"
    {printf("mod -> MOD\n");;}
    break;

  case 92:
#line 341 "calc.y"
    {printf("add -> ADD\n");;}
    break;

  case 93:
#line 345 "calc.y"
    {printf("sub -> SUB\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 2042 "y.tab.c"
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


#line 350 "calc.y"


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


