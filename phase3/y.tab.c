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
#line 4 "shilpa.y"

 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
 #include <vector>
 #include <string>
 #include <sstream>
 #include <fstream>
 void yyerror(const char *msg);
 extern int yylex(void);
 extern int currLine;
 extern int currPos;
 extern FILE * yyin;
 using namespace std;

 struct symbolNode{
    int size;
    int type;
    string name;
 };

 vector <string> temps;
 vector <string> predicates;

 vector<symbolNode> symbolTable;
 vector <string> errorList;
 int counter = 0;
 string fileName;
 stringstream output;
 stringstream err;
 stringstream fileOutput;
 stringstream t;
 bool arrayValid = true; //false - invalid array
 bool definedValid = false;//true - it is already defined
 bool isDefinedAlready(string str);
 bool shouldIPutUnderscore(string str);
 int getType(string str);
 int whatTerm = 0;
 bool inTrue = false;
 bool inFalse = false;
 bool inNot = false;


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
#line 47 "shilpa.y"
{
  char* identToken;
  int  numToken;
}
/* Line 193 of yacc.c.  */
#line 248 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 261 "y.tab.c"

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
#define YYLAST   128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  125

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
       0,     0,     3,     4,    11,    12,    17,    21,    22,    32,
      37,    41,    42,    45,    49,    51,    54,    57,    64,    70,
      77,    81,    85,    86,    90,    92,    94,    99,   102,   103,
     106,   109,   113,   114,   118,   119,   122,   124,   128,   130,
     132,   136,   139,   142,   145,   148,   153,   155,   157,   161,
     165,   169,   173,   174,   178,   182,   183,   185,   187,   189,
     191,   193
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,     3,    35,    55,    27,    56,     5,
      -1,    -1,    58,     4,    57,    61,    -1,    59,    27,    58,
      -1,    -1,    35,    60,    28,     7,    37,    34,    36,     8,
       6,    -1,    35,    60,    28,     6,    -1,    29,    35,    60,
      -1,    -1,    62,    27,    -1,    61,    62,    27,    -1,    19,
      -1,    23,    64,    -1,    22,    64,    -1,    15,    16,    63,
      17,    14,    67,    -1,    14,    67,    16,    63,    17,    -1,
       9,    67,    10,    63,    66,    12,    -1,    65,    33,    73,
      -1,    62,    27,    63,    -1,    -1,    64,    29,    65,    -1,
      65,    -1,    35,    -1,    35,    37,    73,    36,    -1,    11,
      63,    -1,    -1,    68,    69,    -1,    71,    70,    -1,    50,
      68,    69,    -1,    -1,    49,    71,    70,    -1,    -1,    24,
      72,    -1,    72,    -1,    73,    78,    73,    -1,    25,    -1,
      26,    -1,    37,    67,    36,    -1,    74,    77,    -1,    75,
      76,    -1,    48,    65,    -1,    48,    34,    -1,    48,    37,
      73,    36,    -1,    65,    -1,    34,    -1,    37,    73,    36,
      -1,    76,    46,    75,    -1,    76,    45,    75,    -1,    76,
      44,    75,    -1,    -1,    47,    74,    77,    -1,    48,    74,
      77,    -1,    -1,    43,    -1,    42,    -1,    41,    -1,    40,
      -1,    39,    -1,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    77,    82,    82,    87,    90,    94,   117,
     136,   154,   158,   160,   165,   167,   169,   171,   173,   175,
     177,   182,   185,   189,   191,   196,   214,   240,   243,   247,
     252,   276,   278,   282,   284,   289,   293,   299,   326,   343,
     359,   365,   397,   434,   439,   441,   443,   445,   447,   453,
     455,   457,   460,   464,   470,   477,   483,   484,   485,   486,
     487,   488
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
  "IF_PREC", "$accept", "program_start", "@1", "block", "@2",
  "declarations", "declaration", "identMore", "statements", "statement",
  "statement1", "Vars", "Var", "optionelse", "bool_exp",
  "relation_and_exp", "relation_or", "relation_and", "relation_exp",
  "relation_exp2", "expression", "multplicative_exp", "term", "term1",
  "moreMultExp", "comp", 0
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
       0,    53,    55,    54,    57,    56,    58,    58,    59,    59,
      60,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    73,    74,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    78,    78,    78,    78,
      78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     0,     4,     3,     0,     9,     4,
       3,     0,     2,     3,     1,     2,     2,     6,     5,     6,
       3,     3,     0,     3,     1,     1,     4,     2,     0,     2,
       2,     3,     0,     3,     0,     2,     1,     3,     1,     1,
       3,     2,     2,     2,     2,     4,     1,     1,     3,     3,
       3,     3,     0,     3,     3,     0,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     7,    11,     0,     0,
       0,     0,     0,     3,     4,     7,    11,     0,     0,     6,
      10,     9,     0,     0,     0,     0,    14,     0,     0,    25,
       5,     0,     0,     0,     0,    38,    39,    47,     0,     0,
      46,     0,    32,    34,    36,     0,    55,    52,     0,    22,
      16,    24,    15,     0,     0,    12,     0,     0,    35,     0,
       0,    44,     0,    43,    22,     0,    29,     0,    30,    61,
      60,    59,    58,    57,    56,     0,     0,     0,    41,    42,
      22,     0,     0,     0,     0,     0,    13,    20,     0,    40,
      48,     0,    28,    32,    34,    37,    55,    55,     0,     0,
       0,     0,    22,     0,    23,     0,    26,     0,    45,    22,
       0,    31,    33,    53,    54,    51,    50,    49,    18,    21,
       0,     8,    27,    19,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,     8,    18,     9,    10,    12,    30,    81,
      82,    50,    40,   110,    41,    42,    66,    68,    43,    44,
      45,    46,    47,    79,    78,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -60
static const yytype_int8 yypact[] =
{
       9,   -16,    53,   -60,   -60,    29,    25,    33,    64,    66,
      59,    52,    60,   -60,   -60,    25,    33,    -3,    14,   -60,
     -60,   -60,    54,    20,    20,    73,   -60,    55,    55,    56,
      14,    67,    62,    63,   -10,   -60,   -60,   -60,    20,    30,
     -60,    88,    49,    51,   -60,    41,   -13,   -60,    85,    14,
      74,   -60,    74,    24,    75,   -60,    24,    68,   -60,    69,
      35,   -60,    24,   -60,    14,    20,   -60,    20,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,    24,    24,    24,   -60,   -37,
      14,    79,    90,    55,    24,    72,   -60,   -60,   101,   -60,
     -60,    76,    99,    49,    51,   -60,   -13,   -13,    24,    24,
      24,    94,    14,   100,   -60,    77,   -60,   109,   -60,    14,
     104,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
      20,   -60,   -60,   -60,   -60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,   -60,   -60,   102,   -60,   103,   -60,   -12,
     -59,    92,   -17,   -60,   -24,    57,    28,    31,    61,    84,
     -36,   -46,   -58,   -60,   -45,   -60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,    32,    60,    21,    22,    92,    31,    98,    99,   100,
      51,    51,     1,    32,    59,    35,    36,    85,    54,     3,
      87,   101,    63,    23,    37,    29,    91,    38,    24,    25,
      96,    97,    32,    26,    76,    77,    27,    28,    39,    95,
     115,   116,   117,   119,    34,    35,    36,    32,   105,    29,
     122,   113,   114,     4,    37,    29,     6,    38,    37,    29,
       7,    84,    11,    32,    61,    29,   104,    62,    39,    13,
      14,    90,    39,    69,    70,    71,    72,    73,    74,    69,
      70,    71,    72,    73,    74,    32,    15,    16,    17,    49,
      29,    33,    32,    53,    55,    56,   124,    57,    64,    65,
      67,    80,    86,    83,    88,    89,   102,   103,   106,   107,
     109,   118,   108,    90,   120,   121,   123,    19,    58,    20,
      52,   111,    93,     0,     0,   112,     0,     0,    94
};

static const yytype_int8 yycheck[] =
{
      24,    18,    38,     6,     7,    64,    18,    44,    45,    46,
      27,    28,     3,    30,    38,    25,    26,    53,    30,    35,
      56,    80,    39,     9,    34,    35,    62,    37,    14,    15,
      76,    77,    49,    19,    47,    48,    22,    23,    48,    75,
      98,    99,   100,   102,    24,    25,    26,    64,    84,    35,
     109,    96,    97,     0,    34,    35,    27,    37,    34,    35,
      35,    37,    29,    80,    34,    35,    83,    37,    48,     5,
       4,    36,    48,    38,    39,    40,    41,    42,    43,    38,
      39,    40,    41,    42,    43,   102,    27,    35,    28,    16,
      35,    37,   109,    37,    27,    33,   120,    34,    10,    50,
      49,    16,    27,    29,    36,    36,    27,    17,    36,     8,
      11,    17,    36,    36,    14,     6,    12,    15,    34,    16,
      28,    93,    65,    -1,    -1,    94,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    35,     0,    55,    27,    35,    56,    58,
      59,    29,    60,     5,     4,    27,    35,    28,    57,    58,
      60,     6,     7,     9,    14,    15,    19,    22,    23,    35,
      61,    62,    65,    37,    24,    25,    26,    34,    37,    48,
      65,    67,    68,    71,    72,    73,    74,    75,    67,    16,
      64,    65,    64,    37,    62,    27,    33,    34,    72,    67,
      73,    34,    37,    65,    10,    50,    69,    49,    70,    38,
      39,    40,    41,    42,    43,    78,    47,    48,    77,    76,
      16,    62,    63,    29,    37,    73,    27,    73,    36,    36,
      36,    73,    63,    68,    71,    73,    74,    74,    44,    45,
      46,    63,    27,    17,    65,    73,    36,     8,    36,    11,
      66,    69,    70,    77,    77,    75,    75,    75,    17,    63,
      14,     6,    63,    12,    67
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
#line 77 "shilpa.y"
    {fileName = (yyvsp[(2) - (2)].identToken);;}
    break;

  case 3:
#line 78 "shilpa.y"
    {;}
    break;

  case 4:
#line 82 "shilpa.y"
    {output << ": START\n";;}
    break;

  case 5:
#line 83 "shilpa.y"
    {;}
    break;

  case 6:
#line 88 "shilpa.y"
    {;}
    break;

  case 7:
#line 90 "shilpa.y"
    {;}
    break;

  case 8:
#line 95 "shilpa.y"
    {
                //semantic checking of array size
                if((yyvsp[(6) - (9)].identToken) <= 0){
                    arrayValid = false;
                    err << "Error line " << currLine << ": invalid array size\n";
                    errorList.push_back(err.str());
                }
                //semantic check if it is already defined
                definedValid = isDefinedAlready((yyvsp[(1) - (9)].identToken));
                if(definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << (yyvsp[(1) - (9)].identToken) << "\"" << "has already been declared\n";
                    errorList.push_back(err.str());
                }
                if(arrayValid && !definedValid){
                    symbolNode temp;
                    temp.size  = atoi((yyvsp[(6) - (9)].identToken));//array size
                    temp.type  = 1; //array
                    temp.name  = (yyvsp[(1) - (9)].identToken);
                    symbolTable.push_back(temp);

                }
            ;}
    break;

  case 9:
#line 118 "shilpa.y"
    {
                //semantic check if it is already defined
                definedValid = isDefinedAlready((yyvsp[(1) - (4)].identToken));
                if(definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << (yyvsp[(1) - (4)].identToken) << "\"" << "has already been declared\n";
                    errorList.push_back(err.str());
                }
                if(!definedValid){
                    symbolNode temp;
                    temp.size = -1;
                    temp.type = 2;//integer
                    temp.name = (yyvsp[(1) - (4)].identToken);
                    symbolTable.push_back(temp);
                } 
            ;}
    break;

  case 10:
#line 137 "shilpa.y"
    {
                //semantic check if it is already defined
                definedValid = isDefinedAlready((yyvsp[(2) - (3)].identToken));
                if(definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << (yyvsp[(2) - (3)].identToken) << "\"" << "has already been declared\n";
                    errorList.push_back(err.str());
                }
                if(!definedValid){
                    symbolNode temp;
                    temp.size = -1;
                    temp.type = 2;
                    temp.name = (yyvsp[(2) - (3)].identToken);
                    symbolTable.push_back(temp);
                }

            ;}
    break;

  case 11:
#line 154 "shilpa.y"
    {;}
    break;

  case 12:
#line 159 "shilpa.y"
    {;}
    break;

  case 13:
#line 161 "shilpa.y"
    {;}
    break;

  case 14:
#line 166 "shilpa.y"
    {;}
    break;

  case 15:
#line 168 "shilpa.y"
    {;}
    break;

  case 16:
#line 170 "shilpa.y"
    {;}
    break;

  case 17:
#line 172 "shilpa.y"
    {;}
    break;

  case 18:
#line 174 "shilpa.y"
    {;}
    break;

  case 19:
#line 176 "shilpa.y"
    {;}
    break;

  case 20:
#line 178 "shilpa.y"
    {;}
    break;

  case 21:
#line 183 "shilpa.y"
    {;}
    break;

  case 22:
#line 185 "shilpa.y"
    {;}
    break;

  case 23:
#line 190 "shilpa.y"
    {;}
    break;

  case 24:
#line 192 "shilpa.y"
    {;}
    break;

  case 25:
#line 197 "shilpa.y"
    {
                //semantic checking = has it been declared 
                definedValid = isDefinedAlready((yyvsp[(1) - (1)].identToken));
                 if(!definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << (yyvsp[(1) - (1)].identToken) << "\"" << "has not been declared previously\n";
                    errorList.push_back(err.str());
                }
                int type = getType((yyvsp[(1) - (1)].identToken));
                if(type == 2){
                    (yyval.identToken) = (yyvsp[(1) - (1)].identToken);
                }
                else if (type == 1){
                    err << "Error line " << currLine << ": used array variable \"" << (yyvsp[(1) - (1)].identToken) << "\"" << "does not have an index\n";
                    errorList.push_back(err.str());
                }
            ;}
    break;

  case 26:
#line 215 "shilpa.y"
    {
                //semantic checking = has it been declared
                definedValid = isDefinedAlready((yyvsp[(1) - (4)].identToken));
                if(!definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << (yyvsp[(1) - (4)].identToken) << "\"" << "has not been declared previously\n";
                    errorList.push_back(err.str());
                }
                int type = getType((yyvsp[(1) - (4)].identToken));
                if(type == 1){
                    //doing fancy stuff for me to realize that it is an array when this gets propogated up
                    string temp = "";
                    temp += (yyvsp[(1) - (4)].identToken);
                    temp += " ";
                    temp += (yyvsp[(3) - (4)].identToken);
                    strcpy((yyval.identToken), temp.c_str());
                }
                else if (type == 2){
                    err << "Error line " << currLine << ": used integer variable \"" << (yyvsp[(1) - (4)].identToken) << "\"" << "is used as an array\n";
                    errorList.push_back(err.str());
               } 
                
            ;}
    break;

  case 27:
#line 241 "shilpa.y"
    {;}
    break;

  case 28:
#line 243 "shilpa.y"
    {;}
    break;

  case 29:
#line 248 "shilpa.y"
    {;}
    break;

  case 30:
#line 253 "shilpa.y"
    {
                if((yyvsp[(2) - (2)].identToken) == NULL){
                    (yyval.identToken) = (yyvsp[(1) - (2)].identToken);
                }
                else{
                    t.str("");
                    t << "p" << predicates.size();
                    predicates.push_back(t.str());
                    string temp = (yyvsp[(1) - (2)].identToken);
                    string temp2 = (yyvsp[(2) - (2)].identToken);
                    bool a = shouldIPutUnderscore(temp);
                    bool b = shouldIPutUnderscore(temp2);
                    if(a)
                        temp.insert(0, "_");
                    if(b)
                        temp.insert(0, "_");
                    output << "&& " << t.str() << ", " << temp << ", " << temp2 << endl;
                    strcpy((yyval.identToken), t.str().c_str());
                }
            ;}
    break;

  case 31:
#line 277 "shilpa.y"
    {(yyval.identToken) = (yyvsp[(2) - (3)].identToken);;}
    break;

  case 32:
#line 278 "shilpa.y"
    {(yyval.identToken) = NULL;;}
    break;

  case 33:
#line 283 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(2) - (3)].identToken);;}
    break;

  case 34:
#line 284 "shilpa.y"
    { (yyval.identToken) = NULL;;}
    break;

  case 35:
#line 290 "shilpa.y"
    {
                inNot = true;
            ;}
    break;

  case 36:
#line 294 "shilpa.y"
    {;}
    break;

  case 37:
#line 300 "shilpa.y"
    {
               t.str("");
               t << "p" << predicates.size();
               predicates.push_back(t.str());
               string temp = (yyvsp[(1) - (3)].identToken);
               string temp2 = (yyvsp[(2) - (3)].identToken);
               bool a = shouldIPutUnderscore(temp);
               bool b = shouldIPutUnderscore(temp2);
               if(a)
                    temp.insert(0, "_");
               if(b)
                    temp.insert(0, "_");
               size_t found = temp.find(" ");
               if(found != string::npos){
                    t.str("");
                    t << "p" << temps.size();
                    temps.push_back(t.str());
                    string c, d;
                    if(shouldIPutUnderscore(temp.substr(0, found)))
                        c = (temp.substr(0,found)).insert(0, "_");
                    if(shouldIPutUnderscore(temp.substr(found +1)))
                        d = (temp.substr(found+1)).insert(0, "_");
                    output << "=[] " << temp2 << ", " << c << "," << d << endl;
               }
               output << (yyvsp[(2) - (3)].identToken) << " " <<  t.str() << ", " << temp << ", " << temp2 << endl;
            ;}
    break;

  case 38:
#line 327 "shilpa.y"
    {
                if(inNot){
                    t.str("");
                    t << "p" << predicates.size();
                    predicates.push_back(t.str());
                    output << "= " << t.str() << ", 0 " << endl;
                    strcpy((yyval.identToken), t.str().c_str());
                    inNot = false;

                }
                t.str("");
                t << "p" << predicates.size();
                predicates.push_back(t.str());
                output << "= " << t.str() << ", 1 " << endl;
                strcpy((yyval.identToken), t.str().c_str());
            ;}
    break;

  case 39:
#line 344 "shilpa.y"
    {
              if(inNot){
                t.str("");
                t << "p" << predicates.size();
                predicates.push_back(t.str());
                output << "= " << t.str() << ", 1 " << endl;
                strcpy((yyval.identToken), t.str().c_str());
                inNot = false;
              }
              t.str("");
              t << "p" << predicates.size();
              predicates.push_back(t.str());
              output << "= " << t.str() << ", 0 " << endl;
              strcpy((yyval.identToken), t.str().c_str());
            ;}
    break;

  case 40:
#line 360 "shilpa.y"
    {;}
    break;

  case 41:
#line 366 "shilpa.y"
    {
            
                if((yyvsp[(2) - (2)].identToken) == NULL){
                    (yyval.identToken) = (yyvsp[(1) - (2)].identToken);
                }
                else{
                    string temp = (yyvsp[(1) - (2)].identToken);
                    string temp2 = (yyvsp[(2) - (2)].identToken);
                    bool a = shouldIPutUnderscore(temp);
                    bool b = shouldIPutUnderscore(temp2);
                    if(a)
                        temp.insert(0, "_");
                    if(b)
                        temp2.insert(0, "_");
                    t.str("");
                    t << "t" << temps.size();
                    temps.push_back(t.str());
                    if(whatTerm == 1){
                        output << "+ " << t.str() << ", " << temp << ", " << temp2 << endl;
                    }
                    if(whatTerm == 2){
                        output << "- " << t.str() << ", " << temp << ", " << temp2 << endl;
                    }
                    strcpy((yyval.identToken), t.str().c_str());
                }
                whatTerm = 0;
            ;}
    break;

  case 42:
#line 398 "shilpa.y"
    { 
              //term1 returned an empty production
              if((yyvsp[(2) - (2)].identToken) == NULL){
                (yyval.identToken) = (yyvsp[(1) - (2)].identToken);
              }
              else{
                string temp =  (yyvsp[(1) - (2)].identToken);
                string temp2 = (yyvsp[(2) - (2)].identToken);
                
                bool a = shouldIPutUnderscore(temp);
                bool b = shouldIPutUnderscore(temp2);
                if(a)
                    temp.insert(0, "_");
                if(b)
                    temp2.insert(0, "_");
                t.str("");
                t << "t" << temps.size();
                temps.push_back(t.str());
                if(whatTerm == 3){
                    output << "* " << t.str() << ", " << temp << ", " << temp2 << endl;
                }
                if(whatTerm == 4){
                    output << "/ " << t.str() << ", " << temp << ", " << temp2 << endl;
                }
                if(whatTerm == 5){
                    output << "% " << t.str() << ", " << temp << ", " << temp2 << endl;
                }
                strcpy((yyval.identToken), t.str().c_str());
                whatTerm = 0;
              }


            ;}
    break;

  case 43:
#line 435 "shilpa.y"
    {
                output << "* _" << (yyvsp[(2) - (2)].identToken) << ", " << "_ " << (yyvsp[(2) - (2)].identToken) << ", -1" << endl;
                (yyval.identToken) = (yyvsp[(2) - (2)].identToken);
            ;}
    break;

  case 44:
#line 440 "shilpa.y"
    {;}
    break;

  case 45:
#line 442 "shilpa.y"
    {;}
    break;

  case 46:
#line 444 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(1) - (1)].identToken);;}
    break;

  case 47:
#line 446 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(1) - (1)].identToken);;}
    break;

  case 48:
#line 448 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(2) - (3)].identToken);;}
    break;

  case 49:
#line 454 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(3) - (3)].identToken); whatTerm = 3;;}
    break;

  case 50:
#line 456 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(3) - (3)].identToken); whatTerm = 4;;}
    break;

  case 51:
#line 458 "shilpa.y"
    { (yyval.identToken) = (yyvsp[(3) - (3)].identToken); whatTerm = 5;;}
    break;

  case 52:
#line 460 "shilpa.y"
    { (yyval.identToken) = NULL;;}
    break;

  case 53:
#line 465 "shilpa.y"
    {
                (yyval.identToken) = (yyvsp[(2) - (3)].identToken);
                //1 indicates that it is addition
                whatTerm = 1;
            ;}
    break;

  case 54:
#line 471 "shilpa.y"
    {
                 (yyval.identToken) = (yyvsp[(2) - (3)].identToken);
                 //2 indicates that it is subtraction
                 whatTerm = 2;
            ;}
    break;

  case 55:
#line 477 "shilpa.y"
    {
                (yyval.identToken) = NULL;
            ;}
    break;

  case 56:
#line 483 "shilpa.y"
    {(yyval.identToken) = "==";;}
    break;

  case 57:
#line 484 "shilpa.y"
    {(yyval.identToken) = "!=";;}
    break;

  case 58:
#line 485 "shilpa.y"
    {(yyval.identToken) = "<";;}
    break;

  case 59:
#line 486 "shilpa.y"
    {(yyval.identToken) = ">";;}
    break;

  case 60:
#line 487 "shilpa.y"
    {(yyval.identToken) = "<=";;}
    break;

  case 61:
#line 488 "shilpa.y"
    {(yyval.identToken) = ">=";;}
    break;


/* Line 1267 of yacc.c.  */
#line 2100 "y.tab.c"
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


#line 491 "shilpa.y"


int main(int argc, char **argv) {
    
   yyparse(); // Calls yylex() for tokens.
   if(!errorList.empty()){
        //there are errors
        //print out errors and exit
        //POTENTIAL ERROR WITH COUT!!!!!!!!!
        for(int i = 0; i < errorList.size(); i++){
                cout << errorList.at(i);
        }
        exit(1);
    }
    if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if

   //create the mil file with given program name
   fileName = fileName + ".mil";
   ofstream myFile;
   myFile.open(fileName.c_str());
   
   for(int i = 0; i < symbolTable.size(); i++){
        if(symbolTable.at(i).type == 2){
            fileOutput << ". _" << symbolTable.at(i).name << endl;
        }
        if(symbolTable.at(i).type == 1){
            fileOutput << ".[] _" << symbolTable.at(i).name << ", " << symbolTable.at(i).size << endl;
        }
   }
   for(int i = 0; i < temps.size(); i++){
            fileOutput << ". " << temps.at(i) << endl;
    }

   for(int i = 0; i < predicates.size(); i++){
            fileOutput << ". " << predicates.at(i) << endl;
    }
   fileOutput << output.str();
   myFile << fileOutput.str();
    


   myFile.close();
   return 0;

}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

bool isDefinedAlready(string str){
    for(int i = 0; i < symbolTable.size(); i++){
        if(str.compare(symbolTable.at(i).name) == 0){
            return true;
        }
    }
    return false;
}

int getType(string str){
    for(int i = 0; i < symbolTable.size(); i++){
        if(str.compare(symbolTable.at(i).name) == 0){
            return symbolTable.at(i).type;
        }
    }
    return -1;
}

bool shouldIPutUnderscore (string temp){

  if((temp.at(0) == 't' && isdigit(temp.at(1)) || (temp.at(0) == 'p' && isdigit(temp.at(1)) ) || isdigit(temp.at(0) || temp.at(0) == '_'))) 
        return false;
  else
        return true;
}

        

