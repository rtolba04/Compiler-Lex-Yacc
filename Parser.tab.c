
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
#line 6 "Parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"
#include "semantic_checks.h"

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;
int loop_depth = 0;
int switch_depth = 0;

extern int line_num;


/* Line 189 of yacc.c  */
#line 89 "Parser.tab.c"

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

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 1 "Parser.y"

#include "symbol_table.h"
#include "semantic_checks.h"



/* Line 209 of yacc.c  */
#line 120 "Parser.tab.c"

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
#line 21 "Parser.y"

    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   



/* Line 214 of yacc.c  */
#line 193 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "Parser.tab.c"

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
#define YYLAST   794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  233

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
       0,     0,     3,     4,     7,     9,    12,    14,    16,    18,
      21,    23,    25,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    46,    49,    50,    55,    59,    66,    72,    76,
      82,    86,    91,    93,    95,    99,   101,   103,   105,   107,
     112,   117,   122,   126,   130,   134,   136,   140,   144,   148,
     150,   154,   157,   159,   164,   168,   170,   172,   174,   176,
     180,   184,   188,   192,   196,   200,   204,   208,   211,   213,
     219,   227,   228,   229,   235,   236,   237,   243,   244,   245,
     246,   257,   258,   259,   272,   273,   283,   290,   292,   293,
     295,   298,   303,   307,   315,   322,   330,   337,   340,   343,
     345,   349,   352,   356,   359,   360,   361,   362,   363,   377,
     379
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    49,    50,    -1,    51,    -1,    50,
      51,    -1,    86,    -1,    57,    -1,    53,    -1,    52,    53,
      -1,    57,    -1,    60,    -1,    62,    41,    -1,    66,    -1,
      73,    -1,    77,    -1,    80,    -1,    86,    -1,    92,    -1,
      91,    -1,    54,    -1,    55,    -1,    17,    41,    -1,    -1,
      39,    56,    52,    40,    -1,    59,    44,    41,    -1,     7,
      59,    44,    27,    62,    41,    -1,    59,    44,    27,    62,
      41,    -1,     8,    44,    41,    -1,     8,    44,    27,    58,
      41,    -1,    59,     1,    41,    -1,     7,    59,     1,    41,
      -1,    20,    -1,    21,    -1,    37,    65,    38,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,    44,    27,    62,
      41,    -1,     1,    27,    62,    41,    -1,    44,    27,     1,
      41,    -1,    44,    27,    62,    -1,    62,    22,    63,    -1,
      62,    23,    63,    -1,    63,    -1,    63,    24,    64,    -1,
      63,    25,    64,    -1,    63,    26,    64,    -1,    64,    -1,
      37,    65,    38,    -1,    23,    64,    -1,    44,    -1,    44,
      37,    97,    38,    -1,    44,    37,    38,    -1,    46,    -1,
      45,    -1,    20,    -1,    21,    -1,    62,    28,    62,    -1,
      62,    29,    62,    -1,    62,    30,    62,    -1,    62,    31,
      62,    -1,    62,    32,    62,    -1,    62,    33,    62,    -1,
      62,    34,    62,    -1,    62,    35,    62,    -1,    36,    62,
      -1,    62,    -1,     9,    37,    65,    38,    67,    -1,     9,
      37,    65,    38,    67,    10,    70,    -1,    -1,    -1,    39,
      68,    52,    69,    40,    -1,    -1,    -1,    39,    71,    52,
      72,    40,    -1,    -1,    -1,    -1,    11,    37,    65,    38,
      74,    39,    75,    52,    76,    40,    -1,    -1,    -1,    12,
      78,    37,    57,    65,    41,    61,    38,    79,    39,    52,
      40,    -1,    -1,    14,    37,    44,    38,    81,    39,    83,
      82,    40,    -1,    14,     1,    38,    39,    83,    40,    -1,
      85,    -1,    -1,    84,    -1,    83,    84,    -1,    15,    62,
      43,    52,    -1,    16,    43,    52,    -1,    87,    37,    89,
      38,    39,    52,    40,    -1,    87,    37,    38,    39,    52,
      40,    -1,    88,    37,    89,    38,    39,    52,    40,    -1,
      88,    37,    38,    39,    52,    40,    -1,    59,    44,    -1,
      19,    44,    -1,    90,    -1,    89,    42,    90,    -1,    59,
      44,    -1,    18,    62,    41,    -1,    18,    41,    -1,    -1,
      -1,    -1,    -1,    13,    93,    39,    94,    52,    95,    40,
      96,    11,    37,    65,    38,    41,    -1,    62,    -1,    97,
      42,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    59,    64,    64,    67,    67,    70,    71,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    90,    98,    98,   106,   112,   121,   130,   136,
     146,   150,   158,   159,   160,   166,   167,   168,   169,   173,
     201,   205,   212,   223,   227,   231,   236,   240,   249,   261,
     265,   266,   267,   280,   291,   301,   302,   303,   304,   308,
     312,   316,   320,   324,   328,   332,   336,   340,   344,   349,
     352,   366,   366,   366,   370,   370,   370,   376,   377,   377,
     375,   396,   398,   395,   416,   415,   434,   444,   445,   451,
     452,   456,   466,   476,   482,   488,   494,   503,   515,   527,
     528,   533,   542,   551,   565,   566,   568,   569,   564,   582,
     588
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
  "$accept", "program", "$@1", "global_list", "global_element",
  "statement_list", "statement", "break_stmt", "block", "$@2",
  "declaration_stmt", "bool_expression", "type", "assignment_stmt",
  "assign", "expression", "T", "F", "condition", "if_stmt", "if_block",
  "$@3", "$@4", "else_block", "$@5", "$@6", "while_stmt", "$@7", "$@8",
  "$@9", "for_stmt", "$@10", "$@11", "switch_stmt", "$@12",
  "switch_optional_default", "case_list", "case_stmt", "default_case",
  "function_decl", "function_name", "function_name_void", "parameter_list",
  "parameter", "return_stmt", "do_while_stmt", "$@13", "$@14", "$@15",
  "$@16", "argument_list", 0
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
       0,    47,    49,    48,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    56,    55,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    61,    62,    62,    62,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    68,    69,    67,    71,    72,    70,    74,    75,    76,
      73,    78,    79,    77,    81,    80,    80,    82,    82,    83,
      83,    84,    85,    86,    86,    86,    86,    87,    88,    89,
      89,    90,    91,    91,    93,    94,    95,    96,    92,    97,
      97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     3,     6,     5,     3,     5,
       3,     4,     1,     1,     3,     1,     1,     1,     1,     4,
       4,     4,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     2,     1,     4,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     5,
       7,     0,     0,     5,     0,     0,     5,     0,     0,     0,
      10,     0,     0,    12,     0,     9,     6,     1,     0,     1,
       2,     4,     3,     7,     6,     7,     6,     2,     2,     1,
       3,     2,     3,     2,     0,     0,     0,     0,    13,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    35,    36,    37,    38,     0,     0,
       0,     3,     4,     7,     0,     6,     0,     0,     0,     0,
      98,     5,     0,    97,     0,     0,     0,     0,     0,    28,
      30,     0,    25,     0,     0,     0,    99,     0,     0,    31,
       0,    32,    33,     0,     0,    57,    58,     0,     0,    52,
      56,    55,     0,    45,    49,     0,   101,     0,     0,     0,
       0,     0,     0,    68,     0,    29,    51,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    81,   104,
       0,     0,     0,    23,    52,     0,     8,    20,    21,    10,
      11,     0,    13,    14,    15,    16,    17,    19,    18,     0,
     100,     0,     0,    26,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    50,    54,   109,     0,    43,    44,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
      22,   103,     0,     0,     0,    94,     9,    12,     0,    96,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    53,
       0,     0,     0,     0,     0,   105,     0,     0,   102,     0,
       0,     0,    93,    95,   110,    40,     0,    77,     0,     0,
       0,     0,    84,    24,    41,    39,    71,    69,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,    78,     0,
       0,     0,    86,    90,     0,     0,    74,    70,     0,     0,
       0,   107,     0,    88,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    87,    73,     0,     0,    42,     0,     0,
       0,    85,     0,    80,     0,     0,     0,    76,     0,     0,
      83,     0,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    85,    86,    87,    88,   133,
      89,    44,    14,    90,   200,    91,    53,    54,    64,    92,
     177,   186,   204,   197,   205,   222,    93,   178,   198,   216,
      94,   126,   218,    95,   185,   212,   183,   184,   213,    96,
      16,    17,    35,    36,    97,    98,   127,   170,   190,   209,
     117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -161
static const yytype_int16 yypact[] =
{
    -161,     8,   214,  -161,  -161,  -161,  -161,  -161,   161,   -29,
       5,   214,  -161,  -161,     2,  -161,    25,    27,     4,   106,
    -161,  -161,    43,   108,    92,   103,    49,    72,   102,  -161,
    -161,   740,  -161,    62,    76,   -22,  -161,   111,    87,  -161,
     740,  -161,  -161,   702,    91,  -161,  -161,   740,   702,   121,
    -161,  -161,    32,   136,  -161,   698,  -161,   134,   161,   698,
     142,    63,   740,   759,   133,  -161,  -161,   137,   713,   740,
     740,  -161,   740,   740,   740,   155,   147,   148,  -161,  -161,
      20,   145,   708,  -161,   -23,    21,  -161,  -161,  -161,  -161,
    -161,    93,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   698,
    -161,   238,   698,  -161,   132,   740,   740,   740,   740,   740,
     740,   740,   740,  -161,  -161,  -161,   132,   100,   136,   136,
    -161,  -161,  -161,   740,   702,   702,   150,   152,   151,   158,
    -161,  -161,    95,   698,    68,  -161,  -161,  -161,   284,  -161,
     330,   132,   132,   132,   132,   132,   132,   132,   132,  -161,
     740,   105,   176,   178,   220,  -161,   153,   196,  -161,   376,
     189,   122,  -161,  -161,   132,  -161,   201,  -161,   702,     6,
     698,   233,  -161,  -161,  -161,  -161,  -161,   225,   215,   212,
     108,   422,   740,    -4,  -161,   221,   698,   223,  -161,   219,
     224,    88,  -161,  -161,   233,   468,  -161,  -161,   698,   239,
     227,  -161,   698,   154,   228,   698,   514,   740,  -161,   256,
     192,   226,   230,  -161,  -161,   560,   231,   132,   234,   235,
     698,  -161,   236,  -161,   698,   702,   606,  -161,   652,   241,
    -161,   240,  -161
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,  -161,   263,   -46,   -38,  -161,  -161,  -161,
      -1,  -161,    -6,  -161,  -161,   -31,   110,    -2,   -42,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,    86,  -160,  -161,    57,
    -161,  -161,   261,   242,  -161,  -161,  -161,  -161,  -161,  -161,
    -161
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -107
static const yytype_int16 yytable[] =
{
      52,    13,    18,    22,   134,    26,    67,    22,     3,    61,
      13,   182,    63,   101,    68,    19,    57,    63,    34,    34,
      58,   128,    75,   193,     4,     5,     6,     7,     8,     9,
      76,   104,    77,    78,    79,    80,   192,   116,    81,    82,
      10,    45,    46,   193,    47,    66,    23,   136,    27,    20,
     180,   132,    34,   138,    69,    70,   140,   129,    48,    15,
      83,   135,    24,   136,    25,    84,    50,    51,    15,   160,
     120,   121,   122,    71,   141,   142,   143,   144,   145,   146,
     147,   148,   152,   153,    30,    69,    70,   159,    45,    46,
      39,    47,   151,    63,    63,     4,     5,     6,     7,    40,
     136,    55,   136,   161,   103,    48,     4,     5,     6,     7,
      69,    70,    49,    50,    51,    69,    70,    69,    70,   164,
      56,   136,    41,    42,   181,    60,   179,    69,    70,    58,
      33,   202,    65,    28,   137,    31,   158,    63,   149,    43,
     195,    37,   150,   136,    69,    70,   165,    29,   169,    32,
      59,   191,   206,   168,    69,    70,   210,   136,    68,   215,
      72,    73,    74,   175,     4,     5,     6,     7,   136,   182,
     211,   113,   136,    99,   226,   114,   217,   136,   228,   118,
     119,   102,   123,   229,   124,   125,   130,   154,   136,   156,
     136,   155,   171,    75,    63,     4,     5,     6,     7,     8,
       9,    76,   157,    77,    78,    79,    80,   -91,   -91,    81,
      82,    10,    45,    46,   166,    47,   167,     4,     5,     6,
       7,     8,     9,     4,     5,     6,     7,     8,     9,    48,
     174,    83,   -91,    10,   172,   187,    84,    50,    51,    75,
     176,     4,     5,     6,     7,     8,     9,    76,   182,    77,
      78,    79,    80,   189,   188,    81,    82,    10,    45,    46,
     194,    47,   196,   199,   201,   208,   207,   219,   214,   220,
     221,   223,   225,   224,    21,    48,   227,    83,   139,   231,
     203,   232,    84,    50,    51,    75,    38,     4,     5,     6,
       7,     8,     9,    76,     0,    77,    78,    79,    80,     0,
     100,    81,    82,    10,    45,    46,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    83,   162,     0,     0,     0,    84,    50,
      51,    75,     0,     4,     5,     6,     7,     8,     9,    76,
       0,    77,    78,    79,    80,     0,     0,    81,    82,    10,
      45,    46,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    83,
     163,     0,     0,     0,    84,    50,    51,    75,     0,     4,
       5,     6,     7,     8,     9,    76,     0,    77,    78,    79,
      80,     0,     0,    81,    82,    10,    45,    46,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    83,   173,     0,     0,     0,
      84,    50,    51,    75,     0,     4,     5,     6,     7,     8,
       9,    76,     0,    77,    78,    79,    80,     0,     0,    81,
      82,    10,    45,    46,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    83,  -106,     0,     0,     0,    84,    50,    51,    75,
       0,     4,     5,     6,     7,     8,     9,    76,     0,    77,
      78,    79,    80,     0,     0,    81,    82,    10,    45,    46,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    83,   -72,     0,
       0,     0,    84,    50,    51,    75,     0,     4,     5,     6,
       7,     8,     9,    76,     0,    77,    78,    79,    80,     0,
       0,    81,    82,    10,    45,    46,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    83,   -79,     0,     0,     0,    84,    50,
      51,    75,     0,     4,     5,     6,     7,     8,     9,    76,
       0,    77,    78,    79,    80,     0,     0,    81,    82,    10,
      45,    46,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    83,
     -75,     0,     0,     0,    84,    50,    51,    75,     0,     4,
       5,     6,     7,     8,     9,    76,     0,    77,    78,    79,
      80,     0,     0,    81,    82,    10,    45,    46,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    83,   -92,     0,     0,     0,
      84,    50,    51,    75,     0,     4,     5,     6,     7,     8,
       9,    76,     0,    77,    78,    79,    80,     0,     0,    81,
      82,    10,    45,    46,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    83,   230,     0,     0,     0,    84,    50,    51,    75,
       0,     4,     5,     6,     7,     8,     9,    76,     0,    77,
      78,    79,    80,     0,     0,    81,    82,    10,    45,    46,
       0,    47,    45,    46,     0,    47,     0,     0,    45,    46,
       0,    47,     0,    45,    46,    48,    47,    83,    62,    48,
       0,     0,    84,    50,    51,    48,    49,    50,    51,   131,
      48,   115,    49,    50,    51,     0,     0,    49,    50,    51,
      45,    46,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,    69,    70,     0,    49,    50,    51,   105,   106,   107,
     108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      31,     2,     8,     1,    27,     1,    48,     1,     0,    40,
      11,    15,    43,    59,    37,    44,    38,    48,    24,    25,
      42,     1,     1,   183,     3,     4,     5,     6,     7,     8,
       9,    62,    11,    12,    13,    14,    40,    68,    17,    18,
      19,    20,    21,   203,    23,    47,    44,    85,    44,    44,
      44,    82,    58,    99,    22,    23,   102,    37,    37,     2,
      39,    40,    37,   101,    37,    44,    45,    46,    11,     1,
      72,    73,    74,    41,   105,   106,   107,   108,   109,   110,
     111,   112,   124,   125,    41,    22,    23,   133,    20,    21,
      41,    23,   123,   124,   125,     3,     4,     5,     6,    27,
     138,    39,   140,   134,    41,    37,     3,     4,     5,     6,
      22,    23,    44,    45,    46,    22,    23,    22,    23,   150,
      44,   159,    20,    21,   170,    38,   168,    22,    23,    42,
      38,    43,    41,    27,    41,    27,    41,   168,    38,    37,
     186,    38,    42,   181,    22,    23,    41,    41,   154,    41,
      39,   182,   198,   154,    22,    23,   202,   195,    37,   205,
      24,    25,    26,    41,     3,     4,     5,     6,   206,    15,
      16,    38,   210,    39,   220,    38,   207,   215,   224,    69,
      70,    39,    27,   225,    37,    37,    41,    37,   226,    38,
     228,    39,    39,     1,   225,     3,     4,     5,     6,     7,
       8,     9,    44,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    38,    23,    38,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,    37,
      41,    39,    40,    19,    38,    10,    44,    45,    46,     1,
      39,     3,     4,     5,     6,     7,     8,     9,    15,    11,
      12,    13,    14,    41,    39,    17,    18,    19,    20,    21,
      39,    23,    39,    44,    40,    38,    27,    11,    40,    43,
      40,    40,    37,    39,    11,    37,    40,    39,    40,    38,
     194,    41,    44,    45,    46,     1,    25,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      58,    17,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    23,    20,    21,    -1,    23,    -1,    -1,    20,    21,
      -1,    23,    -1,    20,    21,    37,    23,    39,    36,    37,
      -1,    -1,    44,    45,    46,    37,    44,    45,    46,    41,
      37,    38,    44,    45,    46,    -1,    -1,    44,    45,    46,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    22,    23,    -1,    44,    45,    46,    28,    29,    30,
      31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    49,     0,     3,     4,     5,     6,     7,     8,
      19,    50,    51,    57,    59,    86,    87,    88,    59,    44,
      44,    51,     1,    44,    37,    37,     1,    44,    27,    41,
      41,    27,    41,    38,    59,    89,    90,    38,    89,    41,
      27,    20,    21,    37,    58,    20,    21,    23,    37,    44,
      45,    46,    62,    63,    64,    39,    44,    38,    42,    39,
      38,    62,    36,    62,    65,    41,    64,    65,    37,    22,
      23,    41,    24,    25,    26,     1,     9,    11,    12,    13,
      14,    17,    18,    39,    44,    52,    53,    54,    55,    57,
      60,    62,    66,    73,    77,    80,    86,    91,    92,    39,
      90,    52,    39,    41,    62,    28,    29,    30,    31,    32,
      33,    34,    35,    38,    38,    38,    62,    97,    63,    63,
      64,    64,    64,    27,    37,    37,    78,    93,     1,    37,
      41,    41,    62,    56,    27,    40,    53,    41,    52,    40,
      52,    62,    62,    62,    62,    62,    62,    62,    62,    38,
      42,    62,    65,    65,    37,    39,    38,    44,    41,    52,
       1,    62,    40,    40,    62,    41,    38,    38,    57,    59,
      94,    39,    38,    40,    41,    41,    39,    67,    74,    65,
      44,    52,    15,    83,    84,    81,    68,    10,    39,    41,
      95,    62,    40,    84,    39,    52,    39,    70,    75,    44,
      61,    40,    43,    83,    69,    71,    52,    27,    38,    96,
      52,    16,    82,    85,    40,    52,    76,    62,    79,    11,
      43,    40,    72,    40,    39,    37,    52,    40,    52,    65,
      40,    38,    41
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
#line 59 "Parser.y"
    { CreateSymbolTable(); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 70 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 71 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 75 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 76 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 77 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 78 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 79 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 80 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 81 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 82 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 83 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 84 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 85 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 86 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 91 "Parser.y"
    {
        checkBreakContext(loop_depth, switch_depth);
        printf("BREAK statement executed\n");
        (yyval.integer) = 1; 
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 98 "Parser.y"
    { enter_scope("block"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 100 "Parser.y"
    { exit_scope(); (yyval.integer) = (yyvsp[(3) - (4)].integer); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 107 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].datatype), VARIABLE, 0)) {
            semanticError("Variable declaration failed");
        }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 113 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(3) - (6)].string), (yyvsp[(2) - (6)].datatype), VARIABLE, 1);
        if (entry) {
            entry->is_initialized = 1;
        } else {
            semanticError("Const variable declaration failed");
        }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 122 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(2) - (5)].string), (yyvsp[(1) - (5)].datatype), VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
        } else {
            semanticError("Variable declaration failed");
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 131 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (3)].string), TYPE_BOOL, VARIABLE, 0)) {
            semanticError("Boolean variable declaration failed");
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 137 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(2) - (5)].string), TYPE_BOOL, VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
            printf("Boolean variable declared: %s\n", (yyvsp[(2) - (5)].string));
        } else {
            semanticError("Boolean variable declaration failed");
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 146 "Parser.y"
    {
        syntaxError("Invalid variable declaration");
        yyerrok;
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 150 "Parser.y"
    {
        syntaxError("Invalid const declaration - expected: const type identifier = value;");
        yyerrok;
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 158 "Parser.y"
    { (yyval.integer) = 1; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 159 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 160 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (3)].integer); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    { (yyval.datatype) = TYPE_INT; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 167 "Parser.y"
    { (yyval.datatype) = TYPE_FLOAT; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 168 "Parser.y"
    { (yyval.datatype) = TYPE_STRING; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 169 "Parser.y"
    { (yyval.datatype) = TYPE_CHAR; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    {
        if (!checkVariableDeclared((yyvsp[(1) - (4)].string))) {
        } else {
            // Check const reassignment
            if (!checkConstReassignment((yyvsp[(1) - (4)].string))) {
                // Error already reported
            } else {
                // Check type compatibility
                DataType lhsType = getType((yyvsp[(1) - (4)].string));
                DataType rhsType = (yyvsp[(3) - (4)].integer); // Simplified - in real implementation track expression types
                

                    if (!areTypesCompatible(lhsType, rhsType)) {
                    char error_msg[256];
                    snprintf(error_msg, sizeof(error_msg),
                            "Type mismatch in assignment to '%s': cannot assign %s to %s",
                            (yyvsp[(1) - (4)].string),
                            dataTypeToString(rhsType), 
                            dataTypeToString(lhsType));
                    semanticError(error_msg);
                }
                if (!update_symbol_initialized((yyvsp[(1) - (4)].string))) {
                    semanticError("Failed to update symbol initialization");
                }
            }
        }
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 201 "Parser.y"
    {
        syntaxError("Invalid left-hand side in assignment");
        yyerrok;
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 205 "Parser.y"
    {
        syntaxError("Invalid expression in assignment");
        yyerrok;
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 212 "Parser.y"
    { 
        if (checkVariableDeclared((yyvsp[(1) - (3)].string))) {
            if (checkConstReassignment((yyvsp[(1) - (3)].string))) {
                printf("Assignment executed: %s\n", (yyvsp[(1) - (3)].string));
            }
        }
        (yyval.integer) = (yyvsp[(3) - (3)].integer);  
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 223 "Parser.y"
    {
        DataType type = resolveType((yyvsp[(1) - (3)].integer), (yyvsp[(3) - (3)].integer));
        (yyval.integer) = type;
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 227 "Parser.y"
    {
        DataType type = resolveType((yyvsp[(1) - (3)].integer), (yyvsp[(3) - (3)].integer));
        (yyval.integer) = type;
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 231 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 236 "Parser.y"
    { 
        DataType type = resolveType((yyvsp[(1) - (3)].integer), (yyvsp[(3) - (3)].integer));
        (yyval.integer) = type; 
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 240 "Parser.y"
    { 
        if ((yyvsp[(3) - (3)].integer) == 0) {
            checkDivisionByZero(0);
            (yyval.integer) = TYPE_UNKNOWN;
        } else {
            DataType type = resolveType((yyvsp[(1) - (3)].integer), (yyvsp[(3) - (3)].integer));
            (yyval.integer) = type;
        }
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 249 "Parser.y"
    { 
        if ((yyvsp[(3) - (3)].integer) == 0) {
            checkDivisionByZero(0);
            (yyval.integer) = TYPE_UNKNOWN;
        } else {
            // Modulo only works with integers
            if ((yyvsp[(1) - (3)].integer) != TYPE_INT || (yyvsp[(3) - (3)].integer) != TYPE_INT) {
                semanticError("Modulo operator requires integer operands");
            }
            (yyval.integer) = TYPE_INT;
        }
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 261 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 265 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (3)].integer); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 266 "Parser.y"
    { (yyval.integer) = -(yyvsp[(2) - (2)].integer); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 268 "Parser.y"
    {
        if (checkVariableDeclared((yyvsp[(1) - (1)].string))) {
            if (checkVariableInitialized((yyvsp[(1) - (1)].string))) {
                update_symbol_used((yyvsp[(1) - (1)].string));
                (yyval.integer) = getType((yyvsp[(1) - (1)].string));
            } else {
                (yyval.integer) = TYPE_UNKNOWN;
            }
        } else {
            (yyval.integer) = TYPE_UNKNOWN;
        }
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 281 "Parser.y"
    {
        if (checkFunctionCall((yyvsp[(1) - (4)].string), argument_types, argument_count)) {
            update_symbol_used((yyvsp[(1) - (4)].string));
            (yyval.integer) = getType((yyvsp[(1) - (4)].string));
        } else {
            (yyval.integer) = TYPE_UNKNOWN;
        }
        argument_count = 0;
        printf("Function call: %s() executed\n", (yyvsp[(1) - (4)].string));
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 292 "Parser.y"
    {    
        if (checkFunctionCall((yyvsp[(1) - (3)].string), NULL, 0)) {
            update_symbol_used((yyvsp[(1) - (3)].string));
            (yyval.integer) = getType((yyvsp[(1) - (3)].string));
        } else {
            (yyval.integer) = TYPE_UNKNOWN;
        }
        printf("Function call: %s() with no arguments executed\n", (yyvsp[(1) - (3)].string));
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 301 "Parser.y"
    { (yyval.integer) = TYPE_FLOAT; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 302 "Parser.y"
    { (yyval.integer) = TYPE_INT; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 303 "Parser.y"
    { (yyval.integer) = TYPE_BOOL; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 304 "Parser.y"
    { (yyval.integer) = TYPE_BOOL; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 308 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 312 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 316 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 320 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 324 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 328 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 332 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 336 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 340 "Parser.y"
    { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 344 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 349 "Parser.y"
    { 
        printf("IF statement executed\n"); 
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 352 "Parser.y"
    {
        printf("IF-ELSE statement executed\n");  
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 366 "Parser.y"
    {enter_scope("if-block");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 366 "Parser.y"
    {exit_scope();;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 370 "Parser.y"
    {enter_scope("else-block");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 370 "Parser.y"
    {exit_scope();;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 376 "Parser.y"
    { loop_depth++; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 377 "Parser.y"
    {enter_scope("while");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 377 "Parser.y"
    {exit_scope();;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 378 "Parser.y"
    { 
        loop_depth--;
        printf("WHILE loop executed\n"); 
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 396 "Parser.y"
    { enter_scope("for-loop"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 398 "Parser.y"
    { loop_depth++; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 400 "Parser.y"
    { 
        loop_depth--;
        printf("FOR loop executed\n");
        exit_scope(); 
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 416 "Parser.y"
    { 
        if (checkVariableDeclared((yyvsp[(3) - (4)].string))) {
            if (!checkVariableInitialized((yyvsp[(3) - (4)].string))) {
                // Error already reported
            } else {
                update_symbol_used((yyvsp[(3) - (4)].string));
            }
        }
        switch_depth++; 
        enter_scope("switch-scope");
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 428 "Parser.y"
    {
        switch_depth--;
        exit_scope();
        printf("SWITCH statement executed on variable '%s'\n", (yyvsp[(3) - (9)].string));
        (yyval.integer) = 0; 
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 434 "Parser.y"
    {
        syntaxError("Malformed SWITCH statement");
        switch_depth--;
        exit_scope();
        yyerrok;
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 457 "Parser.y"
    {
        if ((yyvsp[(4) - (4)].integer) == 0) {
            semanticError("Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 467 "Parser.y"
    {
        if ((yyvsp[(3) - (3)].integer) == 0) {
            semanticError("Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 477 "Parser.y"
    { 
        printf("Function declaration executed\n");
        clearCurrentFunction();
        exit_scope(); 
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 483 "Parser.y"
    { 
        printf("Function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope(); 
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 489 "Parser.y"
    { 
        printf("Void function declaration executed\n"); 
        clearCurrentFunction();
        exit_scope();
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 495 "Parser.y"
    { 
        printf("Void function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope();
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 504 "Parser.y"
    {
        if (insert_symbol((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype), FUNCTION, 0)) {
            setCurrentFunction((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype));
            enter_scope((yyvsp[(2) - (2)].string));
        } else {
            semanticError("Function declaration failed");
        }
        (yyval.string) = (yyvsp[(2) - (2)].string);
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 516 "Parser.y"
    {
        if (insert_symbol((yyvsp[(2) - (2)].string), TYPE_VOID, FUNCTION, 0)) {
            setCurrentFunction((yyvsp[(2) - (2)].string), TYPE_VOID);
            enter_scope((yyvsp[(2) - (2)].string));
        } else {
            semanticError("Void function declaration failed");
        }
        (yyval.string) = (yyvsp[(2) - (2)].string);
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 534 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype), PARAMETER, 0)) {
            semanticError("Parameter declaration failed");
        }
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 543 "Parser.y"
    {
        if (current_function_name) {
            checkReturn(current_function_name, (yyvsp[(2) - (3)].integer), 1);
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN statement executed\n");
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 552 "Parser.y"
    {
        if (current_function_name) {
            checkReturn(current_function_name, TYPE_VOID, 0);
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN (void) statement executed\n");
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 565 "Parser.y"
    { loop_depth++; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 566 "Parser.y"
    {enter_scope("do-while");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 568 "Parser.y"
    {exit_scope();;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 569 "Parser.y"
    { loop_depth--; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 571 "Parser.y"
    {
        printf("DO-WHILE loop executed\n");
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 583 "Parser.y"
    {
        argument_count = 1;
        argument_types[0] = (yyvsp[(1) - (1)].integer);  
        (yyval.datatype) = (yyvsp[(1) - (1)].integer);  // Pass through the type
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 589 "Parser.y"
    {
        argument_types[argument_count] = (yyvsp[(3) - (3)].integer);  
        argument_count++;
        (yyval.datatype) = (yyvsp[(3) - (3)].integer);  // Pass through the type (or you could pass the first type)
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2660 "Parser.tab.c"
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
#line 595 "Parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d: %s\n", line_num, s);
    count_syntax_errors++;
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
        printf("\nParsing completed successfully.\n");
    } else {
        printf("\nParsing failed.\n");
    }

    // Print error summary
    printErrorSummary();

    // Return non-zero if there are any errors
    if (count_syntax_errors > 0 || count_semantic_errors > 0) {
        return 1;
    }

    return 0;
}
