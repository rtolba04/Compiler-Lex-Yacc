
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
#line 19 "Parser.y"

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

static char *current_func_name = NULL;
static char *current_func_end  = NULL;


/* Line 189 of yacc.c  */
#line 93 "Parser.tab.c"

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
#include "quad.h"

typedef struct {
    char *Lstart;
    char *Lend;
} WhileLabels;

typedef struct {
    int type;      // TYPE_BOOL, TYPE_INT, ...
    char *place;   // temp name or variable name
} Attr;



/* Line 209 of yacc.c  */
#line 135 "Parser.tab.c"

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
     STRING_LITERAL = 300,
     NUMBER = 301,
     FLOAT = 302,
     CHAR_LITERAL = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 38 "Parser.y"

    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   
    WhileLabels *wlbl;
    Attr attr;
   

   



/* Line 214 of yacc.c  */
#line 215 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 227 "Parser.tab.c"

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
#define YYLAST   927

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      45,    46,    47,    48
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
     178,   180,   184,   188,   192,   196,   200,   204,   208,   212,
     215,   217,   218,   222,   224,   225,   233,   234,   235,   241,
     242,   243,   249,   250,   251,   252,   253,   265,   266,   267,
     268,   269,   270,   271,   288,   295,   296,   306,   313,   315,
     316,   318,   321,   326,   330,   338,   345,   353,   360,   363,
     366,   368,   372,   375,   379,   382,   383,   392,   396,   397,
     398,   399,   406,   408
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    -1,    51,    52,    -1,    53,    -1,    52,
      53,    -1,    96,    -1,    59,    -1,    55,    -1,    54,    55,
      -1,    59,    -1,    62,    -1,    64,    41,    -1,    69,    -1,
      79,    -1,    83,    -1,    90,    -1,    96,    -1,   103,    -1,
     101,    -1,    56,    -1,    57,    -1,    17,    41,    -1,    -1,
      39,    58,    54,    40,    -1,    61,    44,    41,    -1,     7,
      61,    44,    27,    64,    41,    -1,    61,    44,    27,    64,
      41,    -1,     8,    44,    41,    -1,     8,    44,    27,    60,
      41,    -1,    61,     1,    41,    -1,     7,    61,     1,    41,
      -1,    20,    -1,    21,    -1,    37,    67,    38,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,    44,    27,    64,
      41,    -1,     1,    27,    64,    41,    -1,    44,    27,     1,
      41,    -1,    44,    27,    64,    -1,    64,    22,    65,    -1,
      64,    23,    65,    -1,    65,    -1,    65,    24,    66,    -1,
      65,    25,    66,    -1,    65,    26,    66,    -1,    66,    -1,
      37,    67,    38,    -1,    23,    66,    -1,    44,    -1,    44,
      37,   108,    38,    -1,    44,    37,    38,    -1,    47,    -1,
      46,    -1,    45,    -1,    48,    -1,    20,    -1,    21,    -1,
      64,    28,    64,    -1,    64,    29,    64,    -1,    64,    30,
      64,    -1,    64,    31,    64,    -1,    64,    32,    64,    -1,
      64,    33,    64,    -1,    64,    34,    64,    -1,    64,    35,
      64,    -1,    36,    64,    -1,    64,    -1,    -1,    70,    10,
      75,    -1,    70,    -1,    -1,     9,    37,    67,    38,    68,
      71,    72,    -1,    -1,    -1,    39,    73,    54,    74,    40,
      -1,    -1,    -1,    39,    76,    54,    77,    40,    -1,    -1,
      -1,    -1,    -1,    11,    78,    37,    67,    38,    80,    39,
      81,    54,    82,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    84,    37,    59,    85,    67,    86,    41,    87,
      63,    88,    38,    89,    39,    54,    40,    -1,    12,     1,
      38,    39,    54,    40,    -1,    -1,    14,    37,    44,    38,
      91,    39,    93,    92,    40,    -1,    14,     1,    38,    39,
      93,    40,    -1,    95,    -1,    -1,    94,    -1,    93,    94,
      -1,    15,    64,    43,    54,    -1,    16,    43,    54,    -1,
      97,    37,    99,    38,    39,    54,    40,    -1,    97,    37,
      38,    39,    54,    40,    -1,    98,    37,    99,    38,    39,
      54,    40,    -1,    98,    37,    38,    39,    54,    40,    -1,
      61,    44,    -1,    19,    44,    -1,   100,    -1,    99,    42,
     100,    -1,    61,    44,    -1,    18,    64,    41,    -1,    18,
      41,    -1,    -1,    13,   102,   104,    11,    37,    67,    38,
      41,    -1,    13,     1,    41,    -1,    -1,    -1,    -1,   105,
      39,   106,    54,   107,    40,    -1,    64,    -1,   108,    42,
      64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    83,    88,    88,    91,    91,    94,    95,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   114,   122,   122,   130,   136,   146,   156,   163,
     175,   179,   188,   192,   196,   201,   202,   203,   204,   208,
     243,   247,   254,   266,   275,   283,   290,   297,   309,   322,
     329,   330,   343,   359,   374,   387,   394,   401,   405,   411,
     416,   425,   438,   451,   465,   479,   493,   507,   520,   533,
     547,   551,   563,   569,   574,   574,   586,   586,   586,   590,
     590,   590,   596,   607,   610,   610,   606,   632,   634,   639,
     644,   648,   652,   631,   665,   676,   675,   694,   704,   705,
     711,   712,   716,   726,   736,   751,   764,   774,   787,   803,
     818,   819,   824,   833,   850,   870,   880,   888,   915,   915,
     915,   915,   919,   926
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
  "RBRACE", "SEMICOLON", "COMMA", "COLON", "IDENTIFIER", "STRING_LITERAL",
  "NUMBER", "FLOAT", "CHAR_LITERAL", "$accept", "program", "$@1",
  "global_list", "global_element", "statement_list", "statement",
  "break_stmt", "block", "$@2", "declaration_stmt", "bool_expression",
  "type", "assignment_stmt", "assign", "expression", "T", "F", "condition",
  "M_if", "if_stmt", "if_begin", "$@3", "if_block", "$@4", "$@5",
  "else_block", "$@6", "$@7", "M_while", "while_stmt", "$@8", "$@9",
  "$@10", "for_stmt", "$@11", "@12", "@13", "$@14", "$@15", "$@16",
  "switch_stmt", "$@17", "switch_optional_default", "case_list",
  "case_stmt", "default_case", "function_decl", "function_name",
  "function_name_void", "parameter_list", "parameter", "return_stmt",
  "M_do", "do_while_stmt", "do_block", "$@18", "$@19", "$@20",
  "argument_list", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    51,    50,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    58,    57,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    61,    61,    61,    61,    62,
      62,    62,    63,    64,    64,    64,    65,    65,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    69,    71,    70,    73,    74,    72,    76,
      77,    75,    78,    80,    81,    82,    79,    84,    85,    86,
      87,    88,    89,    83,    83,    91,    90,    90,    92,    92,
      93,    93,    94,    95,    96,    96,    96,    96,    97,    98,
      99,    99,   100,   101,   101,   102,   103,   103,   105,   106,
     107,   104,   108,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     3,     6,     5,     3,     5,
       3,     4,     1,     1,     3,     1,     1,     1,     1,     4,
       4,     4,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     2,     1,     4,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     0,     3,     1,     0,     7,     0,     0,     5,     0,
       0,     5,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,    16,     6,     0,     9,     6,     1,     0,
       1,     2,     4,     3,     7,     6,     7,     6,     2,     2,
       1,     3,     2,     3,     2,     0,     8,     3,     0,     0,
       0,     6,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    35,    36,    37,    38,     0,     0,
       0,     3,     4,     7,     0,     6,     0,     0,     0,     0,
     109,     5,     0,   108,     0,     0,     0,     0,     0,    28,
      30,     0,    25,     0,     0,     0,   110,     0,     0,    31,
       0,    32,    33,     0,     0,    59,    60,     0,     0,    52,
      57,    56,    55,    58,     0,    45,    49,     0,   112,     0,
       0,     0,     0,     0,     0,    70,     0,    29,    51,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,    23,    52,     0,     8,    20,
      21,    10,    11,     0,    13,    73,    14,    15,    16,    17,
      19,    18,     0,   111,     0,     0,    26,    69,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    50,    54,   122,
       0,    43,    44,    46,    47,    48,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    22,   114,     0,     0,     0,
     105,     9,    12,     0,     0,   107,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    53,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,   113,     0,     0,
       0,    79,    72,   104,   106,   123,    40,    71,     0,     0,
      88,     0,     0,   119,     0,    95,    24,    41,    39,     0,
      74,    83,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,    94,    89,     0,     0,     0,    97,
     101,     0,     0,    76,    75,    84,     0,     0,     0,     0,
      99,    81,     0,     0,    90,   116,   121,     0,     0,     0,
      98,     0,     0,     0,     0,    96,     0,     0,     0,    91,
       0,    78,    86,     0,     0,    42,    92,     0,     0,     0,
      93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    87,    88,    89,    90,   138,
      91,    44,    14,    92,   239,    93,    55,    56,    66,   190,
      94,    95,   202,   214,   222,   236,   172,   189,   212,   128,
      96,   203,   223,   237,    97,   130,   193,   216,   233,   244,
     247,    98,   200,   229,   198,   199,   230,    99,    16,    17,
      35,    36,   100,   132,   101,   163,   164,   196,   218,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
    -185,    20,   174,  -185,  -185,  -185,  -185,  -185,   137,   -12,
      46,   174,  -185,  -185,     2,  -185,    68,    78,     4,    16,
    -185,  -185,    -3,    45,    18,    60,    56,    92,     8,  -185,
    -185,   865,  -185,    82,    80,   -11,  -185,    97,    72,  -185,
     865,  -185,  -185,    86,   111,  -185,  -185,   865,    86,   117,
    -185,  -185,  -185,  -185,    51,   123,  -185,   826,  -185,   120,
     137,   826,   122,    53,   865,   892,   125,  -185,  -185,   127,
     831,   865,   865,  -185,   865,   865,   865,   144,   139,  -185,
       7,     3,    12,   150,   860,  -185,    66,   250,  -185,  -185,
    -185,  -185,  -185,    77,  -185,   184,  -185,  -185,  -185,  -185,
    -185,  -185,   826,  -185,   298,   826,  -185,   135,   865,   865,
     865,   865,   865,   865,   865,   865,  -185,  -185,  -185,   135,
      74,   123,   123,  -185,  -185,  -185,   865,    86,   158,   159,
     162,   155,  -185,   163,   156,  -185,  -185,    79,   826,    14,
    -185,  -185,  -185,   165,   346,  -185,   394,   135,   135,   135,
     135,   135,   135,   135,   135,  -185,   865,   104,   164,    86,
     185,   182,  -185,   215,   188,   189,   191,  -185,   442,   190,
     115,  -185,  -185,  -185,  -185,   135,  -185,  -185,   192,   826,
    -185,     6,   195,  -185,   218,  -185,  -185,  -185,  -185,   826,
    -185,  -185,   490,    86,    45,    86,   826,   865,     1,  -185,
     196,   538,   197,   198,  -185,  -185,   200,   586,    48,  -185,
    -185,   218,   194,  -185,  -185,  -185,   199,   203,   205,   826,
      10,  -185,   826,   826,  -185,  -185,  -185,   202,   209,   220,
    -185,   634,   682,   221,   826,  -185,   226,   232,   216,  -185,
     730,  -185,  -185,   865,   236,   135,  -185,   237,   826,   778,
    -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,  -185,   264,   -50,   -57,  -185,  -185,  -185,
      -1,  -185,    -6,  -185,  -185,   -31,    96,    -7,   -42,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,    67,  -184,  -185,   102,  -185,  -185,
     252,   219,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -121
static const yytype_int16 yytable[] =
{
      54,    13,    18,    22,   131,    26,    69,    22,   129,    63,
      13,   104,    65,   133,   210,   169,   197,    65,    34,    34,
       3,     4,     5,     6,     7,   197,   228,    59,    41,    42,
     141,    60,    19,   107,    45,    46,   210,    47,    30,   119,
      68,   209,  -115,    28,   -87,    43,    23,   141,    27,   134,
     194,    48,   144,   137,    34,   146,    33,    29,    49,    50,
      51,    52,    53,     4,     5,     6,     7,   123,   124,   125,
      71,    72,    31,    71,    72,    71,    72,   147,   148,   149,
     150,   151,   152,   153,   154,   158,    32,   141,   168,   141,
      20,   219,    73,   139,   106,   157,    65,    39,    37,    71,
      72,    71,    72,    70,    15,    24,    45,    46,   170,    47,
      62,   141,   155,    15,    60,    25,   156,   178,   142,    40,
     167,    57,    64,    48,    58,   175,    71,    72,    65,   192,
      49,    50,    51,    52,    53,   141,    61,    71,    72,   201,
       4,     5,     6,     7,   141,   176,   207,    74,    75,    76,
     141,   205,    67,   206,    70,   181,   188,    71,    72,   102,
     180,   105,    65,   116,    65,   117,   208,   121,   122,   227,
     141,   126,   231,   232,   141,   141,   127,     4,     5,     6,
       7,     8,     9,   141,   240,     4,     5,     6,     7,     8,
       9,   135,   141,    10,   143,   159,   162,   160,   249,   161,
     166,   165,   177,    77,   171,     4,     5,     6,     7,     8,
       9,    78,   245,    79,    80,    81,    82,  -102,  -102,    83,
      84,    10,    45,    46,   179,    47,   182,   183,   184,   185,
     191,   187,   195,   197,   221,   211,   213,   215,   217,    48,
     224,    85,  -102,   243,   225,   226,    86,    50,    51,    52,
      53,    77,   234,     4,     5,     6,     7,     8,     9,    78,
     235,    79,    80,    81,    82,   238,   241,    83,    84,    10,
      45,    46,   242,    47,   246,    21,   248,    38,   220,   103,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    85,
     140,     0,     0,     0,    86,    50,    51,    52,    53,    77,
       0,     4,     5,     6,     7,     8,     9,    78,     0,    79,
      80,    81,    82,     0,     0,    83,    84,    10,    45,    46,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    85,   145,     0,
       0,     0,    86,    50,    51,    52,    53,    77,     0,     4,
       5,     6,     7,     8,     9,    78,     0,    79,    80,    81,
      82,     0,     0,    83,    84,    10,    45,    46,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    85,   173,     0,     0,     0,
      86,    50,    51,    52,    53,    77,     0,     4,     5,     6,
       7,     8,     9,    78,     0,    79,    80,    81,    82,     0,
       0,    83,    84,    10,    45,    46,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    85,   174,     0,     0,     0,    86,    50,
      51,    52,    53,    77,     0,     4,     5,     6,     7,     8,
       9,    78,     0,    79,    80,    81,    82,     0,     0,    83,
      84,    10,    45,    46,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    85,   186,     0,     0,     0,    86,    50,    51,    52,
      53,    77,     0,     4,     5,     6,     7,     8,     9,    78,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    10,
      45,    46,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    85,
     204,     0,     0,     0,    86,    50,    51,    52,    53,    77,
       0,     4,     5,     6,     7,     8,     9,    78,     0,    79,
      80,    81,    82,     0,     0,    83,    84,    10,    45,    46,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    85,   -80,     0,
       0,     0,    86,    50,    51,    52,    53,    77,     0,     4,
       5,     6,     7,     8,     9,    78,     0,    79,    80,    81,
      82,     0,     0,    83,    84,    10,    45,    46,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    85,  -120,     0,     0,     0,
      86,    50,    51,    52,    53,    77,     0,     4,     5,     6,
       7,     8,     9,    78,     0,    79,    80,    81,    82,     0,
       0,    83,    84,    10,    45,    46,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    85,   -77,     0,     0,     0,    86,    50,
      51,    52,    53,    77,     0,     4,     5,     6,     7,     8,
       9,    78,     0,    79,    80,    81,    82,     0,     0,    83,
      84,    10,    45,    46,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    85,   -85,     0,     0,     0,    86,    50,    51,    52,
      53,    77,     0,     4,     5,     6,     7,     8,     9,    78,
       0,    79,    80,    81,    82,     0,     0,    83,    84,    10,
      45,    46,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    85,
    -103,     0,     0,     0,    86,    50,    51,    52,    53,    77,
       0,     4,     5,     6,     7,     8,     9,    78,     0,    79,
      80,    81,    82,     0,     0,    83,    84,    10,    45,    46,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    85,   250,     0,
       0,     0,    86,    50,    51,    52,    53,    77,     0,     4,
       5,     6,     7,     8,     9,    78,     0,    79,    80,    81,
      82,     0,     0,    83,    84,    10,    45,    46,     0,    47,
       0,    45,    46,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    85,     0,     0,    48,   118,
      86,    50,    51,    52,    53,    49,    50,    51,    52,    53,
      45,    46,     0,    47,     0,    45,    46,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,   136,    48,     0,    49,    50,    51,    52,    53,    49,
      50,    51,    52,    53,    71,    72,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115
};

static const yytype_int16 yycheck[] =
{
      31,     2,     8,     1,     1,     1,    48,     1,     1,    40,
      11,    61,    43,     1,   198,     1,    15,    48,    24,    25,
       0,     3,     4,     5,     6,    15,    16,    38,    20,    21,
      87,    42,    44,    64,    20,    21,   220,    23,    41,    70,
      47,    40,    39,    27,    37,    37,    44,   104,    44,    37,
      44,    37,   102,    84,    60,   105,    38,    41,    44,    45,
      46,    47,    48,     3,     4,     5,     6,    74,    75,    76,
      22,    23,    27,    22,    23,    22,    23,   108,   109,   110,
     111,   112,   113,   114,   115,   127,    41,   144,   138,   146,
      44,    43,    41,    27,    41,   126,   127,    41,    38,    22,
      23,    22,    23,    37,     2,    37,    20,    21,   139,    23,
      38,   168,    38,    11,    42,    37,    42,   159,    41,    27,
      41,    39,    36,    37,    44,   156,    22,    23,   159,   179,
      44,    45,    46,    47,    48,   192,    39,    22,    23,   189,
       3,     4,     5,     6,   201,    41,   196,    24,    25,    26,
     207,   193,    41,   195,    37,   161,    41,    22,    23,    39,
     161,    39,   193,    38,   195,    38,   197,    71,    72,   219,
     227,    27,   222,   223,   231,   232,    37,     3,     4,     5,
       6,     7,     8,   240,   234,     3,     4,     5,     6,     7,
       8,    41,   249,    19,    10,    37,    41,    38,   248,    37,
      44,    38,    38,     1,    39,     3,     4,     5,     6,     7,
       8,     9,   243,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    39,    23,    11,    39,    39,    38,
      38,    41,    37,    15,    40,    39,    39,    39,    38,    37,
      41,    39,    40,    27,    41,    40,    44,    45,    46,    47,
      48,     1,    43,     3,     4,     5,     6,     7,     8,     9,
      40,    11,    12,    13,    14,    44,    40,    17,    18,    19,
      20,    21,    40,    23,    38,    11,    39,    25,   211,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    48,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    47,    48,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    48,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    47,    48,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    48,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    -1,    23,
      -1,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    37,    38,
      44,    45,    46,    47,    48,    44,    45,    46,    47,    48,
      20,    21,    -1,    23,    -1,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    37,    -1,    44,    45,    46,    47,    48,    44,
      45,    46,    47,    48,    22,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,     3,     4,     5,     6,     7,     8,
      19,    52,    53,    59,    61,    96,    97,    98,    61,    44,
      44,    53,     1,    44,    37,    37,     1,    44,    27,    41,
      41,    27,    41,    38,    61,    99,   100,    38,    99,    41,
      27,    20,    21,    37,    60,    20,    21,    23,    37,    44,
      45,    46,    47,    48,    64,    65,    66,    39,    44,    38,
      42,    39,    38,    64,    36,    64,    67,    41,    66,    67,
      37,    22,    23,    41,    24,    25,    26,     1,     9,    11,
      12,    13,    14,    17,    18,    39,    44,    54,    55,    56,
      57,    59,    62,    64,    69,    70,    79,    83,    90,    96,
     101,   103,    39,   100,    54,    39,    41,    64,    28,    29,
      30,    31,    32,    33,    34,    35,    38,    38,    38,    64,
     108,    65,    65,    66,    66,    66,    27,    37,    78,     1,
      84,     1,   102,     1,    37,    41,    41,    64,    58,    27,
      40,    55,    41,    10,    54,    40,    54,    64,    64,    64,
      64,    64,    64,    64,    64,    38,    42,    64,    67,    37,
      38,    37,    41,   104,   105,    38,    44,    41,    54,     1,
      64,    39,    75,    40,    40,    64,    41,    38,    67,    39,
      59,    61,    11,    39,    39,    38,    40,    41,    41,    76,
      68,    38,    54,    85,    44,    37,   106,    15,    93,    94,
      91,    54,    71,    80,    40,    67,    67,    54,    64,    40,
      94,    39,    77,    39,    72,    39,    86,    38,   107,    43,
      93,    40,    73,    81,    41,    41,    40,    54,    16,    92,
      95,    54,    54,    87,    43,    40,    74,    82,    44,    63,
      54,    40,    40,    27,    88,    64,    38,    89,    39,    54,
      40
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
#line 83 "Parser.y"
    { CreateSymbolTable(); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 94 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 95 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 99 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 100 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 101 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 102 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 103 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 104 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 105 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 106 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 107 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "Parser.y"
    { (yyval.integer) = 2; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 109 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 110 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 115 "Parser.y"
    {
        checkBreakContext(loop_depth, switch_depth);
        printf("BREAK statement executed\n");
        (yyval.integer) = 1; 
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 122 "Parser.y"
    { enter_scope("block"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 124 "Parser.y"
    { exit_scope(); (yyval.integer) = (yyvsp[(3) - (4)].integer); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 131 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].datatype), VARIABLE, 0)) {
            semanticError("Variable declaration failed");
        }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 137 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(3) - (6)].string), (yyvsp[(2) - (6)].datatype), VARIABLE, 1);
        if (entry) {
            entry->is_initialized = 1;
            emit("ASSIGN", (yyvsp[(5) - (6)].attr).place, NULL, (yyvsp[(3) - (6)].string));
        } else {
            semanticError("Const variable declaration failed");
        }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(2) - (5)].string), (yyvsp[(1) - (5)].datatype), VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
            emit("ASSIGN", (yyvsp[(4) - (5)].attr).place, NULL, (yyvsp[(2) - (5)].string));
        } else {
            semanticError("Variable declaration failed");
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 157 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (3)].string), TYPE_BOOL, VARIABLE, 0)) {

            semanticError("Boolean variable declaration failed");
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[(2) - (5)].string), TYPE_BOOL, VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
            emit("ASSIGN", (yyvsp[(4) - (5)].attr).place, NULL, (yyvsp[(2) - (5)].string));
            printf("Boolean variable declared: %s\n", (yyvsp[(2) - (5)].string));
        } else {
            
            semanticError("Boolean variable declaration failed");
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    {
        syntaxError("Invalid variable declaration");
        yyerrok;
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    {
        syntaxError("Invalid const declaration - expected: const type identifier = value;");
        yyerrok;
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 188 "Parser.y"
    { 
        (yyval.attr).place = strdup("1");
        (yyval.attr).type = TYPE_BOOL;
     ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 192 "Parser.y"
    {
        (yyval.attr).place = strdup("0");
        (yyval.attr).type = TYPE_BOOL;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 196 "Parser.y"
    { (yyval.attr) = (yyvsp[(2) - (3)].attr); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 201 "Parser.y"
    { (yyval.datatype) = TYPE_INT; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 202 "Parser.y"
    { (yyval.datatype) = TYPE_FLOAT; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { (yyval.datatype) = TYPE_STRING; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 204 "Parser.y"
    { (yyval.datatype) = TYPE_CHAR; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 209 "Parser.y"
    {
        DataType lhsType = getType((yyvsp[(1) - (4)].string));
        DataType rhsType = (yyvsp[(3) - (4)].attr).type;
        if (!checkVariableDeclared((yyvsp[(1) - (4)].string))) {
            
        } else {
            // Check const reassignment
            if (!checkConstReassignment((yyvsp[(1) - (4)].string))) {
                // Error already reported
            } else {
                // Check type compatibility
                if (!areTypesCompatible(lhsType, rhsType))  
                {
                char error_msg[256];
                snprintf(error_msg, sizeof(error_msg),
                        "Type mismatch in assignment to '%s': cannot assign %s to %s",
                        (yyvsp[(1) - (4)].string),
                        dataTypeToString(rhsType), 
                        dataTypeToString(lhsType));
                semanticError(error_msg);
                }
                else {
                       if (!update_symbol_initialized((yyvsp[(1) - (4)].string))) {
                    semanticError("Failed to update symbol initialization");
                }
                else{
                    emit("ASSIGN", (yyvsp[(3) - (4)].attr).place, NULL, (yyvsp[(1) - (4)].string));
                }
                }
             
            }
        }    
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 243 "Parser.y"
    {
        syntaxError("Invalid left-hand side in assignment");
        yyerrok;
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 247 "Parser.y"
    {
        syntaxError("Invalid expression in assignment");
        yyerrok;
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 254 "Parser.y"
    { 
        if (checkVariableDeclared((yyvsp[(1) - (3)].string))) {
            if (checkConstReassignment((yyvsp[(1) - (3)].string))) {
                printf("Assignment executed: %s\n", (yyvsp[(1) - (3)].string));
                emit("ASSIGN", (yyvsp[(3) - (3)].attr).place, NULL, (yyvsp[(1) - (3)].string));

            }
        } 
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 266 "Parser.y"
    {
        
        (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);

        char *t = newTemp();
        emit("ADD", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 275 "Parser.y"
    {
            (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);

            char *t = newTemp();
            emit("SUB", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
            (yyval.attr).place = t;
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 283 "Parser.y"
    {
            (yyval.attr) = (yyvsp[(1) - (1)].attr);
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 290 "Parser.y"
    {
        (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);

        char *t = newTemp();
        emit("MUL", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 297 "Parser.y"
    {
    if ((yyvsp[(3) - (3)].attr).type == TYPE_INT && (yyvsp[(3) - (3)].attr).place==0) {
        checkDivisionByZero(0);
        (yyval.attr).type = TYPE_UNKNOWN;
        (yyval.attr).place = NULL;
    } else {
        (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);
        char *t = newTemp();
        emit("DIV", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
    }
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 309 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].attr).type != TYPE_INT || (yyvsp[(3) - (3)].attr).type != TYPE_INT) {
        semanticError("Modulo operator requires integer operands");
        (yyval.attr).type = TYPE_UNKNOWN;
        (yyval.attr).place = NULL;
    } else {
        (yyval.attr).type = TYPE_INT;

        char *t = newTemp();
        emit("MOD", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
    }
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 322 "Parser.y"
    {
        (yyval.attr) = (yyvsp[(1) - (1)].attr);
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 329 "Parser.y"
    { (yyval.attr) = (yyvsp[(2) - (3)].attr); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 330 "Parser.y"
    {
        if ((yyvsp[(2) - (2)].attr).type != TYPE_INT && (yyvsp[(2) - (2)].attr).type != TYPE_FLOAT) {
            semanticError("Unary minus requires numeric operand");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        } else {
            (yyval.attr).type = (yyvsp[(2) - (2)].attr).type;

            char *t = newTemp();
            emit("NEG", (yyvsp[(2) - (2)].attr).place, NULL, t);
            (yyval.attr).place = t;
        }
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 343 "Parser.y"
    {
        if (checkVariableDeclared((yyvsp[(1) - (1)].string))) {
            if (checkVariableInitialized((yyvsp[(1) - (1)].string))) {
                update_symbol_used((yyvsp[(1) - (1)].string));
                (yyval.attr).type = getType((yyvsp[(1) - (1)].string));
                (yyval.attr).place = (yyvsp[(1) - (1)].string);  
               
            } else {
                (yyval.attr).type = TYPE_UNKNOWN;
                (yyval.attr).place = NULL;
            }
        } else {
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 359 "Parser.y"
    {
        if (checkFunctionCall((yyvsp[(1) - (4)].string), argument_types, argument_count)) {
            update_symbol_used((yyvsp[(1) - (4)].string));
            (yyval.attr).type = getType((yyvsp[(1) - (4)].string)); //this will get the return type of the function since it is what is stored in the symbol table 
            char buf[32];
            snprintf(buf, sizeof(buf), "%d", argument_count);
            char *t = newTemp();
            emit("CALL", (yyvsp[(1) - (4)].string), strdup(buf), t);
            (yyval.attr).place = t;
        } else {
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        argument_count = 0;
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 374 "Parser.y"
    {
        if (checkFunctionCall((yyvsp[(1) - (3)].string), NULL, 0)) {
            update_symbol_used((yyvsp[(1) - (3)].string));
            (yyval.attr).type = getType((yyvsp[(1) - (3)].string));

            char *t = newTemp();
            emit("CALL", (yyvsp[(1) - (3)].string), "0", t);
            (yyval.attr).place = t;
        } else {
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 387 "Parser.y"
    {
    (yyval.attr).type = TYPE_FLOAT;
    char buf[64];
    snprintf(buf, sizeof(buf), "%f", (yyvsp[(1) - (1)].floatval));  
    (yyval.attr).place = strdup(buf); 
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 394 "Parser.y"
    {
        char buf[32];
          snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].integer));
          (yyval.attr).place = strdup(buf); 
        (yyval.attr).type = TYPE_INT;
        
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 401 "Parser.y"
    {
        (yyval.attr).type = TYPE_STRING;
        (yyval.attr).place = strdup((yyvsp[(1) - (1)].string));
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 405 "Parser.y"
    {
        (yyval.attr).type = TYPE_CHAR;
        char buf[10];
        snprintf(buf, sizeof(buf), "'%c'", (yyvsp[(1) - (1)].charval));
        (yyval.attr).place = strdup(buf);
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 411 "Parser.y"
    {
        (yyval.attr).type = TYPE_BOOL;
        (yyval.attr).place = strdup("1");
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 416 "Parser.y"
    {
        (yyval.attr).type = TYPE_BOOL;
        (yyval.attr).place = strdup("0");
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 425 "Parser.y"
    { 
        if (!areTypesCompatible((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type)) {
            semanticError("Type mismatch in equality comparison");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("EQ", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
        }
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 438 "Parser.y"
    { 
        if (!areTypesCompatible((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type)) {
            semanticError("Type mismatch in inequality comparison");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("NE", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t; 
        }
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 451 "Parser.y"
    { 
        if (!(((yyvsp[(1) - (3)].attr).type == TYPE_INT || (yyvsp[(1) - (3)].attr).type == TYPE_FLOAT) &&
              ((yyvsp[(3) - (3)].attr).type == TYPE_INT || (yyvsp[(3) - (3)].attr).type == TYPE_FLOAT))) {
            semanticError("Type mismatch in less-than comparison");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("LT", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t; 
        }
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 465 "Parser.y"
    { 
        if (!(((yyvsp[(1) - (3)].attr).type == TYPE_INT || (yyvsp[(1) - (3)].attr).type == TYPE_FLOAT) &&
              ((yyvsp[(3) - (3)].attr).type == TYPE_INT || (yyvsp[(3) - (3)].attr).type == TYPE_FLOAT))) {
            semanticError("Type mismatch in greater-than comparison");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("GT", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t; 
        }
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 479 "Parser.y"
    { 
        if (!(((yyvsp[(1) - (3)].attr).type == TYPE_INT || (yyvsp[(1) - (3)].attr).type == TYPE_FLOAT) &&
              ((yyvsp[(3) - (3)].attr).type == TYPE_INT || (yyvsp[(3) - (3)].attr).type == TYPE_FLOAT))) {
            semanticError("Type mismatch in less-than-or-equal comparison");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("LE", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t; 
        }
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 493 "Parser.y"
    { 
        if (!(((yyvsp[(1) - (3)].attr).type == TYPE_INT || (yyvsp[(1) - (3)].attr).type == TYPE_FLOAT) &&
              ((yyvsp[(3) - (3)].attr).type == TYPE_INT || (yyvsp[(3) - (3)].attr).type == TYPE_FLOAT))) {
            semanticError("Type mismatch in greater-than-or-equal comparison");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("GE", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t; 
        }
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 507 "Parser.y"
    { 
        if ((yyvsp[(1) - (3)].attr).type != TYPE_BOOL || (yyvsp[(3) - (3)].attr).type != TYPE_BOOL) {
            semanticError("Logical AND requires boolean operands");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("AND", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
        } 
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 520 "Parser.y"
    { 
        if ((yyvsp[(1) - (3)].attr).type != TYPE_BOOL || (yyvsp[(3) - (3)].attr).type != TYPE_BOOL) {
            semanticError("Logical OR requires boolean operands");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("OR", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
        } 
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 533 "Parser.y"
    { 
        if ((yyvsp[(2) - (2)].attr).type != TYPE_BOOL) {
            semanticError("Logical NOT requires a boolean operand");
            (yyval.attr).type = TYPE_UNKNOWN;
            (yyval.attr).place = NULL;
        }
        else {
        (yyval.attr).type = TYPE_BOOL;
        char *t = newTemp();
        emit("NOT", (yyvsp[(2) - (2)].attr).place, NULL, t);
        (yyval.attr).place = t;
        }
        
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 547 "Parser.y"
    { (yyval.attr) = (yyvsp[(1) - (1)].attr); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 551 "Parser.y"
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();  // Label for else block
        p->Lend = newLabel();    // Label for end of if-else
      
        (yyval.wlbl) = p;

    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 564 "Parser.y"
    {
        emit("LABEL", NULL, NULL, (yyvsp[(1) - (3)].wlbl)->Lend);       // End label
        free((yyvsp[(1) - (3)].wlbl));
        printf("IF-ELSE statement executed\n");  
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 574 "Parser.y"
    {
        emit("JMPF", (yyvsp[(3) - (5)].attr).place, NULL, (yyvsp[(5) - (5)].wlbl)->Lstart);  // Jump to else
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 577 "Parser.y"
    {
        emit("JMP", NULL, NULL, (yyvsp[(5) - (7)].wlbl)->Lend);         // Jump to end
        emit("LABEL", NULL, NULL, (yyvsp[(5) - (7)].wlbl)->Lstart);     // Else label 
        (yyval.wlbl) = (yyvsp[(5) - (7)].wlbl);
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 586 "Parser.y"
    {enter_scope("if-block");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 586 "Parser.y"
    {exit_scope();;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 590 "Parser.y"
    {enter_scope("else-block");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 590 "Parser.y"
    {exit_scope();;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 596 "Parser.y"
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();
        p->Lend = newLabel();
        emit("LABEL", NULL, NULL, p->Lstart);
        (yyval.wlbl) = p;
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 607 "Parser.y"
    {   emit("JMPF", (yyvsp[(4) - (5)].attr).place, NULL, (yyvsp[(2) - (5)].wlbl)->Lend);
        loop_depth++; 
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 610 "Parser.y"
    {enter_scope("while");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 610 "Parser.y"
    {exit_scope();;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 611 "Parser.y"
    { 
        emit("JMP", NULL, NULL, (yyvsp[(2) - (11)].wlbl)->Lstart);
        emit("LABEL", NULL, NULL, (yyvsp[(2) - (11)].wlbl)->Lend);
        free((yyvsp[(2) - (11)].wlbl));
        loop_depth--;
        printf("WHILE loop executed\n"); 
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 632 "Parser.y"
    { enter_scope("for-loop"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 634 "Parser.y"
    {
      (yyval.string) = newLabel();  // Save start label
      emit("LABEL", NULL, NULL, (yyval.string));
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 639 "Parser.y"
    {
        (yyval.string) = newLabel();  // Save end label
        emit("JMPF", (yyvsp[(6) - (6)].attr).place, NULL, (yyval.string));  
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 644 "Parser.y"
    {
        delay_emit = 1;   // STOP assign from emitting
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 648 "Parser.y"
    {
        delay_emit = 0;   // Resume normal emission
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 652 "Parser.y"
    { loop_depth++; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 654 "Parser.y"
    { 
        flush_delayed();  // Emit any delayed quads
        emit("JMP", NULL, NULL, (yyvsp[(5) - (16)].string));
        
        // Place end label
        emit("LABEL", NULL, NULL, (yyvsp[(7) - (16)].string));

        loop_depth--;
        printf("FOR loop executed\n");
        exit_scope(); 
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 665 "Parser.y"
    {
        syntaxError("Malformed FOR loop structure");
        loop_depth--;
        exit_scope();
        yyerrok;
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 676 "Parser.y"
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

  case 96:

/* Line 1455 of yacc.c  */
#line 688 "Parser.y"
    {
        switch_depth--;
        exit_scope();
        printf("SWITCH statement executed on variable '%s'\n", (yyvsp[(3) - (9)].string));
        (yyval.integer) = 0; 
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 694 "Parser.y"
    {
        syntaxError("Malformed SWITCH statement");
        switch_depth--;
        exit_scope();
        yyerrok;
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 717 "Parser.y"
    {
        if ((yyvsp[(4) - (4)].integer) != 1) {
            semanticError("Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 727 "Parser.y"
    {
        if ((yyvsp[(3) - (3)].integer) != 1) {
            semanticError("Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 737 "Parser.y"
    { 

        if((yyvsp[(6) - (7)].integer) != 2) {
            semanticError("Function must end with a return statement");
        }
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);

        current_func_end  = NULL;
        current_func_name = NULL;
        printf("Function declaration executed\n");
        clearCurrentFunction();
        exit_scope(); 
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 752 "Parser.y"
    { 
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);
        current_func_end  = NULL;
        current_func_name = NULL;
        if((yyvsp[(5) - (6)].integer) != 2) {
            semanticError("Function must end with a return statement");
        }
        printf("Function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope(); 
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 765 "Parser.y"
    { 
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);
        current_func_end  = NULL;
        current_func_name = NULL;
        printf("Void function declaration executed\n"); 
        clearCurrentFunction();
        exit_scope();
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 775 "Parser.y"
    { 
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);
        current_func_end  = NULL;
        current_func_name = NULL;
        printf("Void function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope();
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 788 "Parser.y"
    {
        if (insert_symbol((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype), FUNCTION, 0)) {
            setCurrentFunction((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype));
            enter_scope((yyvsp[(2) - (2)].string));
            current_func_name = (yyvsp[(2) - (2)].string);
            current_func_end  = newLabel();

            emit("FUNC_BEGIN", current_func_name, NULL, NULL);
        } else {
            semanticError("Function declaration failed");
        }
        (yyval.string) = (yyvsp[(2) - (2)].string);
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 804 "Parser.y"
    {
        if (insert_symbol((yyvsp[(2) - (2)].string), TYPE_VOID, FUNCTION, 0)) {
            setCurrentFunction((yyvsp[(2) - (2)].string), TYPE_VOID);
            enter_scope((yyvsp[(2) - (2)].string));
            current_func_name = (yyvsp[(2) - (2)].string);
            current_func_end  = newLabel();
            emit("FUNC_BEGIN", current_func_name, NULL, NULL);
        } else {
            semanticError("Void function declaration failed");
        }
        (yyval.string) = (yyvsp[(2) - (2)].string);
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 825 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype), PARAMETER, 0)) {
            semanticError("Parameter declaration failed");
        }
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 834 "Parser.y"
    {
        if (current_function_name) {
            if(checkReturn(current_function_name, (yyvsp[(2) - (3)].attr).type, 1)) {
                // Return type matches
                emit("RETURN", (yyvsp[(2) - (3)].attr).place, NULL, NULL);              // simplest

                // jump to common function end
                emit("JMP", NULL, NULL, current_func_end);
                
            }
        } else {
            semanticError("Return statement outside of function");
        }
      
        printf("RETURN statement executed\n");
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 851 "Parser.y"
    {
        if (current_function_name) {
            if(checkReturn(current_function_name, TYPE_VOID, 0)) {
                // Return type matches
                emit("RETURN", NULL, NULL, NULL);              // simplest

                // jump to common function end
                emit("JMP", NULL, NULL, current_func_end);
                
            }
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN (void) statement executed\n");
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 870 "Parser.y"
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();
        p->Lend   = newLabel();
        emit("LABEL", NULL, NULL, p->Lstart);
        (yyval.wlbl) = p;
    ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 881 "Parser.y"
    {
        emit("JMPF", (yyvsp[(6) - (8)].attr).place, NULL, (yyvsp[(2) - (8)].wlbl)->Lend);
        emit("JMP",  NULL, NULL, (yyvsp[(2) - (8)].wlbl)->Lstart);
        emit("LABEL", NULL, NULL, (yyvsp[(2) - (8)].wlbl)->Lend);
      
        printf("DO-WHILE loop executed\n");
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 889 "Parser.y"
    {
        syntaxError("Malformed DO-WHILE loop");
        loop_depth = 0; // Reset in case it was incremented
        yyerrok;
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 915 "Parser.y"
    { loop_depth++; ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 915 "Parser.y"
    { enter_scope("do-while"); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 915 "Parser.y"
    { exit_scope(); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 915 "Parser.y"
    { loop_depth--; ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 920 "Parser.y"
    {
        argument_count = 1;
        argument_types[0] = (yyvsp[(1) - (1)].attr).type; 
        emit("PARAM", (yyvsp[(1) - (1)].attr).place, NULL, NULL); 
        (yyval.attr) = (yyvsp[(1) - (1)].attr);  // Pass through the type
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 927 "Parser.y"
    {
        argument_types[argument_count] = (yyvsp[(3) - (3)].attr).type;  
        argument_count++;
        emit("PARAM", (yyvsp[(3) - (3)].attr).place, NULL, NULL); 
        (yyval.attr) = (yyvsp[(3) - (3)].attr);  // Pass through the type (or you could pass the first type)
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 3086 "Parser.tab.c"
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
#line 934 "Parser.y"


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
        print_quads();
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
