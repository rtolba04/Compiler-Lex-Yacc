
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;



/* Line 189 of yacc.c  */
#line 85 "Parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT_TYPE = 259,
     STRING_TYPE = 260,
     CHAR_TYPE = 261,
     CONST = 262,
     BOOL_TYPE = 263,
     IF = 264,
     ELSE = 265,
     WHILE = 266,
     FOR = 267,
     DO = 268,
     SWITCH = 269,
     CASE = 270,
     DEFAULT = 271,
     BREAK = 272,
     RETURN = 273,
     VOID_TYPE = 274,
     TRUE_COND = 275,
     FALSE_COND = 276,
     PLUS = 277,
     MINUS = 278,
     MULTIPLY = 279,
     DIVIDE = 280,
     MODULO = 281,
     ASSIGN = 282,
     EQUAL = 283,
     NOT_EQUAL = 284,
     LESS_THAN = 285,
     GREATER_THAN = 286,
     LESS_EQUAL = 287,
     GREATER_EQUAL = 288,
     AND = 289,
     OR = 290,
     NOT = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACE = 294,
     RBRACE = 295,
     SEMICOLON = 296,
     COMMA = 297,
     COLON = 298,
     IDENTIFIER = 299,
     NUMBER = 300,
     FLOAT = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 12 "Parser.y"

    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   



/* Line 214 of yacc.c  */
#line 177 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 189 "Parser.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    14,    16,    19,
      21,    23,    25,    27,    29,    31,    33,    37,    44,    50,
      54,    60,    62,    64,    68,    70,    72,    74,    76,    81,
      85,    89,    93,    95,    99,   103,   107,   109,   113,   116,
     118,   123,   127,   129,   131,   133,   135,   139,   143,   147,
     151,   155,   159,   163,   167,   170,   172,   180,   192,   193,
     194,   204,   205,   206,   219,   227,   236,   238,   240,   242,
     245,   250,   257,   261,   267,   276,   284,   293,   301,   303,
     307,   310,   314,   317,   318,   319,   331,   333
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    49,    50,    -1,    51,    -1,    50,
      51,    -1,    52,    -1,    55,    -1,    57,    41,    -1,    61,
      -1,    62,    -1,    65,    -1,    68,    -1,    74,    -1,    78,
      -1,    77,    -1,    54,    44,    41,    -1,     7,    54,    44,
      27,    57,    41,    -1,    54,    44,    27,    57,    41,    -1,
       8,    44,    41,    -1,     8,    44,    27,    53,    41,    -1,
      20,    -1,    21,    -1,    37,    60,    38,    -1,     3,    -1,
       4,    -1,     5,    -1,     6,    -1,    44,    27,    57,    41,
      -1,    44,    27,    57,    -1,    57,    22,    58,    -1,    57,
      23,    58,    -1,    58,    -1,    58,    24,    59,    -1,    58,
      25,    59,    -1,    58,    26,    59,    -1,    59,    -1,    37,
      60,    38,    -1,    23,    59,    -1,    44,    -1,    44,    37,
      81,    38,    -1,    44,    37,    38,    -1,    46,    -1,    45,
      -1,    20,    -1,    21,    -1,    57,    28,    57,    -1,    57,
      29,    57,    -1,    57,    30,    57,    -1,    57,    31,    57,
      -1,    57,    32,    57,    -1,    57,    33,    57,    -1,    57,
      34,    57,    -1,    57,    35,    57,    -1,    36,    57,    -1,
      57,    -1,     9,    37,    60,    38,    69,    50,    70,    -1,
       9,    37,    60,    38,    69,    50,    70,    10,    69,    50,
      70,    -1,    -1,    -1,    11,    37,    60,    38,    39,    63,
      50,    40,    64,    -1,    -1,    -1,    12,    37,    52,    60,
      41,    56,    38,    39,    66,    50,    40,    67,    -1,    14,
      37,    44,    38,    69,    71,    70,    -1,    14,    37,    44,
      38,    69,    71,    73,    70,    -1,    39,    -1,    40,    -1,
      72,    -1,    71,    72,    -1,    15,    57,    43,    50,    -1,
      15,    57,    43,    50,    17,    41,    -1,    16,    43,    50,
      -1,    16,    43,    50,    17,    41,    -1,    54,    44,    37,
      75,    38,    69,    50,    70,    -1,    54,    44,    37,    38,
      69,    50,    70,    -1,    19,    44,    37,    75,    38,    69,
      50,    70,    -1,    19,    44,    37,    38,    69,    50,    70,
      -1,    76,    -1,    75,    42,    76,    -1,    54,    44,    -1,
      18,    57,    41,    -1,    18,    41,    -1,    -1,    -1,    13,
      39,    79,    50,    40,    80,    11,    37,    60,    38,    41,
      -1,    57,    -1,    81,    42,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    47,    52,    53,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    72,    76,    81,    86,
      90,   100,   101,   102,   108,   109,   110,   111,   115,   125,
     132,   133,   134,   139,   140,   145,   146,   150,   151,   152,
     163,   165,   167,   168,   169,   170,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   187,   188,   193,   195,
     192,   201,   203,   200,   209,   211,   215,   217,   220,   221,
     225,   227,   232,   234,   239,   243,   248,   253,   261,   262,
     266,   273,   277,   286,   288,   285,   297,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT_TYPE", "STRING_TYPE",
  "CHAR_TYPE", "CONST", "BOOL_TYPE", "IF", "ELSE", "WHILE", "FOR", "DO",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "RETURN", "VOID_TYPE", "TRUE_COND",
  "FALSE_COND", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO", "ASSIGN",
  "EQUAL", "NOT_EQUAL", "LESS_THAN", "GREATER_THAN", "LESS_EQUAL",
  "GREATER_EQUAL", "AND", "OR", "NOT", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "SEMICOLON", "COMMA", "COLON", "IDENTIFIER", "NUMBER", "FLOAT",
  "$accept", "program", "$@1", "statement_list", "statement",
  "declaration_stmt", "bool_expression", "type", "assignment_stmt",
  "assign", "expression", "T", "F", "condition", "if_stmt", "while_stmt",
  "$@2", "$@3", "for_stmt", "$@4", "$@5", "switch_stmt", "scope_start",
  "scope_end", "case_list", "case_stmt", "default_case", "function_decl",
  "parameter_list", "parameter", "return_stmt", "do_while_stmt", "$@6",
  "$@7", "argument_list", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    48,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    53,    53,    53,    54,    54,    54,    54,    55,    56,
      57,    57,    57,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    63,    64,
      62,    66,    67,    65,    68,    68,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      76,    77,    77,    79,    80,    78,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     3,
       5,     1,     1,     3,     1,     1,     1,     1,     4,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     2,     1,
       4,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     7,    11,     0,     0,
       9,     0,     0,    12,     7,     8,     1,     1,     1,     2,
       4,     6,     3,     5,     8,     7,     8,     7,     1,     3,
       2,     3,     2,     0,     0,    11,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,    39,    43,    42,     3,     4,     6,     0,     7,     0,
      32,    36,     9,    10,    11,    12,    13,    15,    14,     0,
       0,     0,     0,     0,    83,     0,    82,    39,     0,     0,
      38,     0,    55,     0,     0,     0,     5,     0,     0,     0,
       8,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,    81,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,    41,    86,     0,     0,
       0,    16,    30,    31,    33,    34,    35,     0,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    46,    47,    48,    49,    50,    51,    52,    53,
      28,    40,     0,     0,     0,     0,     0,     0,    20,    66,
       0,    58,     0,    84,     0,     0,    80,     0,     0,    87,
      18,     0,     0,    17,    23,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,    79,     0,     0,    67,    56,
       0,     0,     0,     0,     0,     0,    64,    69,     0,    77,
       0,    75,     0,     0,    59,    29,    61,     0,     0,     0,
      65,    76,    74,     0,    60,     0,     0,    70,    72,     0,
       0,     0,     0,     0,    57,    62,    85,    71,    73,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    24,    25,    26,   101,    27,    28,   148,
      29,    30,    31,    53,    32,    33,   146,   184,    34,   185,
     199,    35,   130,   159,   151,   152,   168,    36,   110,   111,
      37,    38,    71,   149,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -134
static const yytype_int16 yypact[] =
{
    -134,    19,   429,  -134,  -134,  -134,  -134,  -134,   139,   -14,
      16,    18,    41,   -15,    44,    74,    -8,  -134,  -134,   439,
     433,   -20,  -134,  -134,   429,  -134,  -134,    39,  -134,    11,
     128,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,    48,
      13,   433,   433,   186,  -134,    54,  -134,    76,    35,    77,
    -134,   439,   127,    78,   439,   444,  -134,    98,   439,   439,
    -134,   439,   439,   439,   104,    80,  -134,    95,   109,   433,
     131,   429,   142,  -134,     9,     4,   439,   439,   439,   439,
     439,   439,   439,   439,  -134,    62,  -134,     4,    68,   439,
      58,  -134,   128,   128,  -134,  -134,  -134,   439,  -134,  -134,
     433,   140,   143,   148,   154,    24,   165,   143,   143,   152,
      84,  -134,     4,     4,     4,     4,     4,     4,     4,     4,
    -134,  -134,   439,    66,   143,    96,    86,   159,  -134,  -134,
     429,  -134,   155,  -134,   183,   429,  -134,   143,   139,     4,
    -134,   429,   143,  -134,  -134,   209,   429,   173,   163,   192,
     439,   -12,  -134,   209,   429,  -134,   209,   429,  -134,   194,
     253,   439,   167,   170,    -1,   176,  -134,  -134,   168,  -134,
     209,  -134,   209,   143,  -134,     4,  -134,   433,   429,   429,
    -134,  -134,  -134,   429,  -134,   429,   187,   297,   341,   209,
     385,   185,   190,   193,  -134,  -134,  -134,  -134,  -134,  -134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,   -55,   -24,   181,  -134,     3,  -134,  -134,
     -10,    46,   -13,   -40,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,   -99,  -133,  -134,    82,  -134,  -134,   145,    99,
    -134,  -134,  -134,  -134,  -134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      56,    67,    68,   150,   165,    48,    50,    54,   134,   135,
      52,    39,     4,     5,     6,     7,   106,    55,   166,     3,
     169,    58,    59,   171,    44,   141,    58,    59,   158,   104,
      40,    52,    52,    58,    59,   180,    49,   181,   154,   182,
      65,    75,   178,   157,    85,    87,    70,   108,    94,    95,
      96,    89,    60,    41,    66,    42,   194,    58,    59,    52,
     127,     4,     5,     6,     7,    91,   112,   113,   114,   115,
     116,   117,   118,   119,   183,   145,    73,   109,    43,   123,
     153,    45,    56,    57,    58,    59,   156,   126,    58,    59,
      52,   160,    64,   109,    17,    18,   124,    19,    72,   170,
      98,    99,   172,   120,    92,    93,   121,   140,    58,    59,
     122,    20,   139,    55,    74,    46,    84,   100,    47,    22,
      23,    56,   137,   187,   188,    89,   138,   143,   189,    56,
     190,    97,    56,   102,   142,    90,    56,   186,   138,    91,
     164,   109,     4,     5,     6,     7,    56,   103,    56,    58,
      59,   175,    61,    62,    63,    76,    77,    78,    79,    80,
      81,    82,    83,    56,    56,    56,    56,    52,     4,     5,
       6,     7,     8,     9,    10,   105,    11,    12,    13,    14,
     107,   128,   129,    15,    16,    17,    18,   131,    19,     4,
       5,     6,     7,     8,     9,   132,   136,   144,   150,   147,
     161,   162,    20,   163,   173,   133,   176,   177,   158,    21,
      22,    23,     4,     5,     6,     7,     8,     9,    10,   179,
      11,    12,    13,    14,    69,   191,   196,    15,    16,    17,
      18,   197,    19,   167,   198,   125,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,   158,
       0,     0,     0,    21,    22,    23,     4,     5,     6,     7,
       8,     9,    10,     0,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,   174,     0,     0,     0,    21,    22,    23,
       4,     5,     6,     7,     8,     9,    10,     0,    11,    12,
      13,    14,     0,     0,   192,    15,    16,    17,    18,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,    21,    22,    23,     4,     5,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,     0,     0,   193,    15,
      16,    17,    18,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,    21,    22,    23,     4,     5,
       6,     7,     8,     9,    10,     0,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,   195,     0,     0,     0,    21,
      22,    23,     4,     5,     6,     7,     8,     9,    10,     0,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,     0,    19,    17,    18,     0,    19,     0,     0,    17,
      18,     0,    19,     0,    17,    18,    20,    19,     0,    51,
      20,     0,     0,    21,    22,    23,    20,    47,    22,    23,
       0,    20,    86,    47,    22,    23,     0,     0,    47,    22,
      23
};

static const yytype_int16 yycheck[] =
{
      24,    41,    42,    15,    16,    15,    19,    27,   107,   108,
      20,     8,     3,     4,     5,     6,    71,    37,   151,     0,
     153,    22,    23,   156,    39,   124,    22,    23,    40,    69,
      44,    41,    42,    22,    23,   168,    44,   170,   137,   172,
      27,    51,    43,   142,    54,    55,    43,    38,    61,    62,
      63,    27,    41,    37,    41,    37,   189,    22,    23,    69,
     100,     3,     4,     5,     6,    41,    76,    77,    78,    79,
      80,    81,    82,    83,   173,   130,    41,    74,    37,    89,
     135,    37,   106,    44,    22,    23,   141,    97,    22,    23,
     100,   146,    44,    90,    20,    21,    38,    23,    44,   154,
      20,    21,   157,    41,    58,    59,    38,    41,    22,    23,
      42,    37,   122,    37,    37,    41,    38,    37,    44,    45,
      46,   145,    38,   178,   179,    27,    42,    41,   183,   153,
     185,    27,   156,    38,    38,    37,   160,   177,    42,    41,
     150,   138,     3,     4,     5,     6,   170,    38,   172,    22,
      23,   161,    24,    25,    26,    28,    29,    30,    31,    32,
      33,    34,    35,   187,   188,   189,   190,   177,     3,     4,
       5,     6,     7,     8,     9,    44,    11,    12,    13,    14,
      38,    41,    39,    18,    19,    20,    21,    39,    23,     3,
       4,     5,     6,     7,     8,    41,    44,    38,    15,    44,
      27,    38,    37,    11,    10,    40,    39,    37,    40,    44,
      45,    46,     3,     4,     5,     6,     7,     8,     9,    43,
      11,    12,    13,    14,    43,    38,    41,    18,    19,    20,
      21,    41,    23,   151,    41,    90,    -1,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    46,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    46,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    23,    20,    21,    -1,    23,    -1,    -1,    20,
      21,    -1,    23,    -1,    20,    21,    37,    23,    -1,    36,
      37,    -1,    -1,    44,    45,    46,    37,    44,    45,    46,
      -1,    37,    38,    44,    45,    46,    -1,    -1,    44,    45,
      46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    49,     0,     3,     4,     5,     6,     7,     8,
       9,    11,    12,    13,    14,    18,    19,    20,    21,    23,
      37,    44,    45,    46,    50,    51,    52,    54,    55,    57,
      58,    59,    61,    62,    65,    68,    74,    77,    78,    54,
      44,    37,    37,    37,    39,    37,    41,    44,    57,    44,
      59,    36,    57,    60,    27,    37,    51,    44,    22,    23,
      41,    24,    25,    26,    44,    27,    41,    60,    60,    52,
      54,    79,    44,    41,    37,    57,    28,    29,    30,    31,
      32,    33,    34,    35,    38,    57,    38,    57,    81,    27,
      37,    41,    58,    58,    59,    59,    59,    27,    20,    21,
      37,    53,    38,    38,    60,    44,    50,    38,    38,    54,
      75,    76,    57,    57,    57,    57,    57,    57,    57,    57,
      41,    38,    42,    57,    38,    75,    57,    60,    41,    39,
      69,    39,    41,    40,    69,    69,    44,    38,    42,    57,
      41,    69,    38,    41,    38,    50,    63,    44,    56,    80,
      15,    71,    72,    50,    69,    76,    50,    69,    40,    70,
      50,    27,    38,    11,    57,    16,    70,    72,    73,    70,
      50,    70,    50,    10,    40,    57,    39,    37,    43,    43,
      70,    70,    70,    69,    64,    66,    60,    50,    50,    50,
      50,    38,    17,    17,    70,    40,    41,    41,    41,    67
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 47 "Parser.y"
    { CreateSymbolTable(); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 73 "Parser.y"
    {
        insert_symbol((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].datatype), VARIABLE, 0);
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 77 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(3) - (6)].string), (yyvsp[(2) - (6)].datatype), VARIABLE, 1);
        if (entry) entry->is_initialized = 1;
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 82 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(2) - (5)].string), (yyvsp[(1) - (5)].datatype), VARIABLE, 0);
        if (entry) entry->is_initialized = 1;
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 87 "Parser.y"
    {
        insert_symbol((yyvsp[(2) - (3)].string), TYPE_BOOL, VARIABLE, 0);
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 91 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(2) - (5)].string), TYPE_BOOL, VARIABLE, 0);
        if (entry) entry->is_initialized = 1;
        printf("Boolean variable declared: %s\n", (yyvsp[(2) - (5)].string));
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 100 "Parser.y"
    { (yyval.integer) = 1; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 101 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 102 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (3)].integer); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 108 "Parser.y"
    { (yyval.datatype) = TYPE_INT; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 109 "Parser.y"
    { (yyval.datatype) = TYPE_FLOAT; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 110 "Parser.y"
    { (yyval.datatype) = TYPE_STRING; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 111 "Parser.y"
    { (yyval.datatype) = TYPE_CHAR; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 116 "Parser.y"
    {
        if (!update_symbol_initialized((yyvsp[(1) - (4)].string))) {
            yyerror("Undeclared variable in assignment");
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 125 "Parser.y"
    { 
        printf("Assignment executed: %s \n", (yyvsp[(1) - (3)].string));
        (yyval.integer) = (yyvsp[(3) - (3)].integer);  
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 132 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) + (yyvsp[(3) - (3)].integer); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 133 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) - (yyvsp[(3) - (3)].integer); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 134 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 139 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) * (yyvsp[(3) - (3)].integer); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 140 "Parser.y"
    { if ((yyvsp[(3) - (3)].integer) == 0) 
                                        yyerror("Division by zero");
                                     else 
                                        (yyval.integer) = (yyvsp[(1) - (3)].integer) / (yyvsp[(3) - (3)].integer);
                                    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 145 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (3)].integer) % (yyvsp[(3) - (3)].integer); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 146 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 150 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (3)].integer); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 "Parser.y"
    { (yyval.integer) = -(yyvsp[(2) - (2)].integer); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 153 "Parser.y"
    {
        SymbolEntry *entry = lookup_symbol((yyvsp[(1) - (1)].string));
        if (!entry) {
            yyerror("Undeclared variable used in expression");
            (yyval.integer) = 0; 
        } else {
            update_symbol_used((yyvsp[(1) - (1)].string));
            (yyval.integer) = 0; // or entry->type if you want type checking later
        }
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    {      printf("Function call: %s() executed\n", (yyvsp[(1) - (4)].string));      (yyval.integer) = 0;    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    {      printf("Function call: %s() with no arguments executed\n", (yyvsp[(1) - (3)].string));  (yyval.integer) = 0;     ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 167 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].floatval); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 168 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 169 "Parser.y"
    { (yyval.integer) = 1; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 170 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) == (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) != (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) < (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 177 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) > (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) <= (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) >= (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 180 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) && (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    { (yyval.integer) = ((yyvsp[(1) - (3)].integer) || (yyvsp[(3) - (3)].integer)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    { (yyval.integer) = !(yyvsp[(2) - (2)].integer); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 183 "Parser.y"
    { /* Need symbol table lookup for boolean variable */ ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 187 "Parser.y"
    { printf("IF statement executed\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 188 "Parser.y"
    {printf("IF-ELSE statement executed\n");  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 193 "Parser.y"
    { enter_scope(); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 195 "Parser.y"
    { exit_scope(); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 196 "Parser.y"
    {printf("WHILE loop executed\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 201 "Parser.y"
    { enter_scope(); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { exit_scope(); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 204 "Parser.y"
    { printf("FOR loop with declaration executed\n");    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 210 "Parser.y"
    {    printf("SWITCH statement executed\n");  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 212 "Parser.y"
    {   printf("SWITCH statement with DEFAULT executed\n");   ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 215 "Parser.y"
    { enter_scope(); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 217 "Parser.y"
    { exit_scope(); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 226 "Parser.y"
    {      printf("CASE executed\n");    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 228 "Parser.y"
    {      printf("CASE with BREAK executed\n");    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 233 "Parser.y"
    {        printf("DEFAULT case executed\n");   ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 235 "Parser.y"
    {     printf("DEFAULT case with BREAK executed\n");   ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 239 "Parser.y"
    {
        insert_symbol((yyvsp[(2) - (8)].string), (yyvsp[(1) - (8)].datatype), FUNCTION, 0);
        printf("Function declaration executed\n");
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 244 "Parser.y"
    {       
        insert_symbol((yyvsp[(2) - (7)].string), (yyvsp[(1) - (7)].datatype), FUNCTION, 0);
        printf("Function declaration (no parameters) executed\n");    
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 249 "Parser.y"
    {      
        insert_symbol((yyvsp[(2) - (8)].string), TYPE_VOID, FUNCTION, 0);
        printf("Void function declaration executed\n");  
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 254 "Parser.y"
    {      
        insert_symbol((yyvsp[(2) - (7)].string), TYPE_VOID, FUNCTION, 0);
        printf("Void function declaration (no parameters) executed\n");  
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 267 "Parser.y"
    {
        insert_symbol((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype), PARAMETER, 0);
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 274 "Parser.y"
    {
        printf("RETURN statement executed\n");
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 278 "Parser.y"
    {
        printf("RETURN (void) statement executed\n");
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 286 "Parser.y"
    { enter_scope(); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 288 "Parser.y"
    { exit_scope(); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 290 "Parser.y"
    { printf("DO-WHILE loop executed\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2134 "Parser.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 300 "Parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char **argv) {
    if (argc > 1){
        yyin = fopen(argv[1], "r");

        if (!yyin) {
        perror("Error opening file");
        return 1;
        }
    }
    if(yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }
}
