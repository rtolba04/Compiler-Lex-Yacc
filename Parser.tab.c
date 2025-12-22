
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
#line 92 "Parser.tab.c"

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
#line 134 "Parser.tab.c"

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
#line 37 "Parser.y"

    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   
    WhileLabels *wlbl;
    Attr attr;
   

   



/* Line 214 of yacc.c  */
#line 214 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 226 "Parser.tab.c"

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
#define YYLAST   870

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  248

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
     215,   217,   223,   231,   236,   241,   242,   243,   249,   250,
     251,   257,   258,   259,   260,   261,   273,   274,   275,   288,
     295,   296,   306,   313,   315,   316,   318,   321,   326,   330,
     338,   345,   353,   360,   363,   366,   368,   372,   375,   379,
     382,   383,   392,   396,   397,   398,   399,   406,   408
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    -1,    51,    52,    -1,    53,    -1,    52,
      53,    -1,    89,    -1,    59,    -1,    55,    -1,    54,    55,
      -1,    59,    -1,    62,    -1,    64,    41,    -1,    68,    -1,
      76,    -1,    80,    -1,    83,    -1,    89,    -1,    96,    -1,
      94,    -1,    56,    -1,    57,    -1,    17,    41,    -1,    -1,
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
      37,   101,    38,    -1,    44,    37,    38,    -1,    47,    -1,
      46,    -1,    45,    -1,    48,    -1,    20,    -1,    21,    -1,
      64,    28,    64,    -1,    64,    29,    64,    -1,    64,    30,
      64,    -1,    64,    31,    64,    -1,    64,    32,    64,    -1,
      64,    33,    64,    -1,    64,    34,    64,    -1,    64,    35,
      64,    -1,    36,    64,    -1,    64,    -1,     9,    37,    67,
      38,    69,    -1,     9,    37,    67,    38,    69,    10,    72,
      -1,     9,     1,    38,    69,    -1,     9,    37,    67,     1,
      -1,    -1,    -1,    39,    70,    54,    71,    40,    -1,    -1,
      -1,    39,    73,    54,    74,    40,    -1,    -1,    -1,    -1,
      -1,    11,    75,    37,    67,    38,    77,    39,    78,    54,
      79,    40,    -1,    -1,    -1,    12,    81,    37,    59,    67,
      41,    63,    38,    82,    39,    54,    40,    -1,    12,     1,
      38,    39,    54,    40,    -1,    -1,    14,    37,    44,    38,
      84,    39,    86,    85,    40,    -1,    14,     1,    38,    39,
      86,    40,    -1,    88,    -1,    -1,    87,    -1,    86,    87,
      -1,    15,    64,    43,    54,    -1,    16,    43,    54,    -1,
      90,    37,    92,    38,    39,    54,    40,    -1,    90,    37,
      38,    39,    54,    40,    -1,    91,    37,    92,    38,    39,
      54,    40,    -1,    91,    37,    38,    39,    54,    40,    -1,
      61,    44,    -1,    19,    44,    -1,    93,    -1,    92,    42,
      93,    -1,    61,    44,    -1,    18,    64,    41,    -1,    18,
      41,    -1,    -1,    13,    95,    97,    11,    37,    67,    38,
      41,    -1,    13,     1,    41,    -1,    -1,    -1,    -1,    98,
      39,    99,    54,   100,    40,    -1,    64,    -1,   101,    42,
      64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    82,    87,    87,    90,    90,    93,    94,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   113,   121,   121,   129,   135,   145,   155,   162,
     174,   178,   187,   191,   195,   200,   201,   202,   203,   207,
     242,   246,   253,   265,   274,   282,   289,   296,   308,   321,
     328,   329,   342,   358,   373,   386,   393,   400,   404,   410,
     415,   424,   437,   450,   464,   478,   492,   506,   519,   532,
     546,   551,   554,   557,   561,   568,   568,   568,   572,   572,
     572,   576,   587,   590,   590,   586,   612,   614,   611,   621,
     632,   631,   650,   660,   661,   667,   668,   672,   682,   692,
     707,   720,   730,   743,   759,   774,   775,   780,   789,   806,
     826,   836,   844,   871,   871,   871,   871,   875,   882
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
  "if_stmt", "if_block", "$@3", "$@4", "else_block", "$@5", "$@6",
  "M_while", "while_stmt", "$@7", "$@8", "$@9", "for_stmt", "$@10", "$@11",
  "switch_stmt", "$@12", "switch_optional_default", "case_list",
  "case_stmt", "default_case", "function_decl", "function_name",
  "function_name_void", "parameter_list", "parameter", "return_stmt",
  "M_do", "do_while_stmt", "do_block", "$@13", "$@14", "$@15",
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
      67,    68,    68,    68,    68,    70,    71,    69,    73,    74,
      72,    75,    77,    78,    79,    76,    81,    82,    80,    80,
      84,    83,    83,    85,    85,    86,    86,    87,    88,    89,
      89,    89,    89,    90,    91,    92,    92,    93,    94,    94,
      95,    96,    96,    98,    99,   100,    97,   101,   101
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
       1,     5,     7,     4,     4,     0,     0,     5,     0,     0,
       5,     0,     0,     0,     0,    11,     0,     0,    12,     6,
       0,     9,     6,     1,     0,     1,     2,     4,     3,     7,
       6,     7,     6,     2,     2,     1,     3,     2,     3,     2,
       0,     8,     3,     0,     0,     0,     6,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    35,    36,    37,    38,     0,     0,
       0,     3,     4,     7,     0,     6,     0,     0,     0,     0,
     104,     5,     0,   103,     0,     0,     0,     0,     0,    28,
      30,     0,    25,     0,     0,     0,   105,     0,     0,    31,
       0,    32,    33,     0,     0,    59,    60,     0,     0,    52,
      57,    56,    55,    58,     0,    45,    49,     0,   107,     0,
       0,     0,     0,     0,     0,    70,     0,    29,    51,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,    23,    52,     0,     8,    20,
      21,    10,    11,     0,    13,    14,    15,    16,    17,    19,
      18,     0,   106,     0,     0,    26,    69,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    50,    54,   117,     0,
      43,    44,    46,    47,    48,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,    22,   109,     0,     0,     0,
     100,     9,    12,     0,   102,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    53,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,   108,     0,     0,
       0,    99,   101,   118,    40,    75,    73,    74,     0,     0,
       0,     0,     0,     0,   114,     0,    90,    24,    41,    39,
       0,    71,    82,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,    89,     0,     0,     0,     0,
      92,    96,     0,     0,    78,    72,    83,     0,     0,     0,
       0,     0,    94,    77,     0,     0,     0,    87,   111,   116,
       0,     0,     0,    93,     0,     0,    42,     0,     0,    91,
       0,     0,     0,     0,    80,    85,     0,    88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    87,    88,    89,    90,   138,
      91,    44,    14,    92,   218,    93,    55,    56,    66,    94,
     176,   190,   213,   215,   224,   240,   128,    95,   204,   225,
     241,    96,   130,   237,    97,   201,   232,   199,   200,   233,
      98,    16,    17,    35,    36,    99,   132,   100,   163,   164,
     197,   220,   119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
    -178,    16,   263,  -178,  -178,  -178,  -178,  -178,   172,    46,
      51,   263,  -178,  -178,     3,  -178,    85,    92,     5,   -16,
    -178,  -178,    95,    72,    97,   111,   102,   124,    84,  -178,
    -178,   808,  -178,   127,   119,    50,  -178,   140,   100,  -178,
     808,  -178,  -178,   774,   152,  -178,  -178,   808,   774,   178,
    -178,  -178,  -178,  -178,    34,   166,  -178,    23,  -178,   164,
     172,    23,   180,    43,   808,   835,   182,  -178,  -178,   183,
     136,   808,   808,  -178,   808,   808,   808,   196,    22,  -178,
      37,    19,    54,   181,   803,  -178,   -24,   241,  -178,  -178,
    -178,  -178,  -178,   147,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,    23,  -178,   289,    23,  -178,   123,   808,   808,   808,
     808,   808,   808,   808,   808,  -178,  -178,  -178,   123,   116,
     166,   166,  -178,  -178,  -178,   808,   188,   774,   190,   191,
     194,   187,  -178,   197,   207,  -178,  -178,   195,    23,    86,
    -178,  -178,  -178,   337,  -178,   385,   123,   123,   123,   123,
     123,   123,   123,   123,  -178,   808,   202,   224,    14,   774,
     226,   310,  -178,   223,   233,   235,   238,  -178,   433,   232,
     234,  -178,  -178,   123,  -178,  -178,  -178,  -178,   224,   239,
      23,   774,     6,   242,  -178,   268,  -178,  -178,  -178,  -178,
      23,   274,  -178,   481,   250,    72,   774,    23,   808,    49,
    -178,   260,   529,   265,   266,  -178,   267,   281,   577,    75,
    -178,  -178,   268,   280,  -178,  -178,  -178,   294,   284,   282,
     285,    23,    57,  -178,    23,    23,   808,  -178,  -178,  -178,
     193,   287,   291,  -178,   625,   673,   123,   288,    23,  -178,
     292,   299,    23,   721,  -178,  -178,   769,  -178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,  -178,   313,   -53,   -82,  -178,  -178,  -178,
      -1,  -178,    -6,  -178,  -178,   -31,   115,    65,   -34,  -178,
     169,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,   141,  -177,  -178,
     108,  -178,  -178,   327,   301,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -116
static const yytype_int16 yytable[] =
{
      54,    13,    18,   139,    22,   141,    26,    22,   103,    63,
      13,    28,    65,    70,    69,   177,     3,    65,    34,    34,
     131,   141,   211,   126,    77,    29,     4,     5,     6,     7,
       8,     9,    78,   106,    79,    80,    81,    82,   129,   118,
      83,    84,    10,    45,    46,   211,    47,    23,   143,    27,
     195,   145,   178,   137,    34,   133,    71,    72,  -110,   127,
      48,   141,    85,   141,   198,    71,    72,    86,    50,    51,
      52,    53,   198,   231,   -86,    73,   146,   147,   148,   149,
     150,   151,   152,   153,   105,   168,   141,   169,    59,   210,
      19,   134,    60,   158,   156,    20,    65,    71,    72,    31,
       4,     5,     6,     7,    41,    42,    45,    46,   170,    47,
      15,   141,    68,    32,     4,     5,     6,     7,   221,    15,
     141,    43,    24,    48,   173,   179,   141,   193,    65,    25,
      49,    50,    51,    52,    53,    33,    30,   202,    62,   122,
     123,   124,    60,    39,   208,    71,    72,   194,   141,    37,
      65,    40,   141,   141,   154,   182,    45,    46,   155,    47,
     181,   141,   207,    58,   141,    65,    57,   209,   230,    71,
      72,   234,   235,    48,   117,     4,     5,     6,     7,    61,
      49,    50,    51,    52,    53,   243,   120,   121,   142,   246,
      74,    75,    76,    67,    77,   236,     4,     5,     6,     7,
       8,     9,    78,   101,    79,    80,    81,    82,   -97,   -97,
      83,    84,    10,    45,    46,    70,    47,    71,    72,   104,
     115,   116,   135,   125,    71,    72,   157,   159,   162,   160,
      48,   161,    85,   -97,   183,   165,   167,    86,    50,    51,
      52,    53,    77,   174,     4,     5,     6,     7,     8,     9,
      78,   166,    79,    80,    81,    82,    71,    72,    83,    84,
      10,    45,    46,   175,    47,   180,     4,     5,     6,     7,
       8,     9,   184,   188,   185,   189,   186,   192,    48,   196,
      85,   140,    10,   198,   203,    86,    50,    51,    52,    53,
      77,   206,     4,     5,     6,     7,     8,     9,    78,   212,
      79,    80,    81,    82,   214,   216,    83,    84,    10,    45,
      46,   217,    47,     4,     5,     6,     7,     8,     9,   219,
     223,   226,   227,   228,    21,   229,    48,   242,    85,   144,
     238,   239,   244,    86,    50,    51,    52,    53,    77,   245,
       4,     5,     6,     7,     8,     9,    78,   191,    79,    80,
      81,    82,    38,   222,    83,    84,    10,    45,    46,     0,
      47,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,    85,   171,     0,     0,
       0,    86,    50,    51,    52,    53,    77,     0,     4,     5,
       6,     7,     8,     9,    78,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    10,    45,    46,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    85,   172,     0,     0,     0,    86,
      50,    51,    52,    53,    77,     0,     4,     5,     6,     7,
       8,     9,    78,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    10,    45,    46,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    85,   187,     0,     0,     0,    86,    50,    51,
      52,    53,    77,     0,     4,     5,     6,     7,     8,     9,
      78,     0,    79,    80,    81,    82,     0,     0,    83,    84,
      10,    45,    46,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
      85,   205,     0,     0,     0,    86,    50,    51,    52,    53,
      77,     0,     4,     5,     6,     7,     8,     9,    78,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    10,    45,
      46,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    85,   -76,
       0,     0,     0,    86,    50,    51,    52,    53,    77,     0,
       4,     5,     6,     7,     8,     9,    78,     0,    79,    80,
      81,    82,     0,     0,    83,    84,    10,    45,    46,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,    85,  -115,     0,     0,
       0,    86,    50,    51,    52,    53,    77,     0,     4,     5,
       6,     7,     8,     9,    78,     0,    79,    80,    81,    82,
       0,     0,    83,    84,    10,    45,    46,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    85,   -79,     0,     0,     0,    86,
      50,    51,    52,    53,    77,     0,     4,     5,     6,     7,
       8,     9,    78,     0,    79,    80,    81,    82,     0,     0,
      83,    84,    10,    45,    46,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    85,   -84,     0,     0,     0,    86,    50,    51,
      52,    53,    77,     0,     4,     5,     6,     7,     8,     9,
      78,     0,    79,    80,    81,    82,     0,     0,    83,    84,
      10,    45,    46,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
      85,   -98,     0,     0,     0,    86,    50,    51,    52,    53,
      77,     0,     4,     5,     6,     7,     8,     9,    78,     0,
      79,    80,    81,    82,     0,     0,    83,    84,    10,    45,
      46,     0,    47,     0,    45,    46,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    85,   247,
      64,    48,     0,    86,    50,    51,    52,    53,    49,    50,
      51,    52,    53,    45,    46,     0,    47,     0,    45,    46,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,   136,    48,     0,    49,    50,    51,
      52,    53,    49,    50,    51,    52,    53,    71,    72,     0,
       0,     0,     0,   107,   108,   109,   110,   111,   112,   113,
     114
};

static const yytype_int16 yycheck[] =
{
      31,     2,     8,    27,     1,    87,     1,     1,    61,    40,
      11,    27,    43,    37,    48,     1,     0,    48,    24,    25,
       1,   103,   199,     1,     1,    41,     3,     4,     5,     6,
       7,     8,     9,    64,    11,    12,    13,    14,     1,    70,
      17,    18,    19,    20,    21,   222,    23,    44,   101,    44,
      44,   104,    38,    84,    60,     1,    22,    23,    39,    37,
      37,   143,    39,   145,    15,    22,    23,    44,    45,    46,
      47,    48,    15,    16,    37,    41,   107,   108,   109,   110,
     111,   112,   113,   114,    41,   138,   168,     1,    38,    40,
      44,    37,    42,   127,   125,    44,   127,    22,    23,    27,
       3,     4,     5,     6,    20,    21,    20,    21,   139,    23,
       2,   193,    47,    41,     3,     4,     5,     6,    43,    11,
     202,    37,    37,    37,   155,   159,   208,   180,   159,    37,
      44,    45,    46,    47,    48,    38,    41,   190,    38,    74,
      75,    76,    42,    41,   197,    22,    23,   181,   230,    38,
     181,    27,   234,   235,    38,   161,    20,    21,    42,    23,
     161,   243,   196,    44,   246,   196,    39,   198,   221,    22,
      23,   224,   225,    37,    38,     3,     4,     5,     6,    39,
      44,    45,    46,    47,    48,   238,    71,    72,    41,   242,
      24,    25,    26,    41,     1,   226,     3,     4,     5,     6,
       7,     8,     9,    39,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    37,    23,    22,    23,    39,
      38,    38,    41,    27,    22,    23,    38,    37,    41,    38,
      37,    37,    39,    40,    11,    38,    41,    44,    45,    46,
      47,    48,     1,    41,     3,     4,     5,     6,     7,     8,
       9,    44,    11,    12,    13,    14,    22,    23,    17,    18,
      19,    20,    21,    39,    23,    39,     3,     4,     5,     6,
       7,     8,    39,    41,    39,    41,    38,    38,    37,    37,
      39,    40,    19,    15,    10,    44,    45,    46,    47,    48,
       1,    41,     3,     4,     5,     6,     7,     8,     9,    39,
      11,    12,    13,    14,    39,    39,    17,    18,    19,    20,
      21,    44,    23,     3,     4,     5,     6,     7,     8,    38,
      40,    27,    38,    41,    11,    40,    37,    39,    39,    40,
      43,    40,    40,    44,    45,    46,    47,    48,     1,    40,
       3,     4,     5,     6,     7,     8,     9,   178,    11,    12,
      13,    14,    25,   212,    17,    18,    19,    20,    21,    -1,
      23,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      47,    48,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    47,    48,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,
      -1,    -1,    -1,    44,    45,    46,    47,    48,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      47,    48,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    47,    48,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    23,    -1,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,
      36,    37,    -1,    44,    45,    46,    47,    48,    44,    45,
      46,    47,    48,    20,    21,    -1,    23,    -1,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    37,    -1,    44,    45,    46,
      47,    48,    44,    45,    46,    47,    48,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,     3,     4,     5,     6,     7,     8,
      19,    52,    53,    59,    61,    89,    90,    91,    61,    44,
      44,    53,     1,    44,    37,    37,     1,    44,    27,    41,
      41,    27,    41,    38,    61,    92,    93,    38,    92,    41,
      27,    20,    21,    37,    60,    20,    21,    23,    37,    44,
      45,    46,    47,    48,    64,    65,    66,    39,    44,    38,
      42,    39,    38,    64,    36,    64,    67,    41,    66,    67,
      37,    22,    23,    41,    24,    25,    26,     1,     9,    11,
      12,    13,    14,    17,    18,    39,    44,    54,    55,    56,
      57,    59,    62,    64,    68,    76,    80,    83,    89,    94,
      96,    39,    93,    54,    39,    41,    64,    28,    29,    30,
      31,    32,    33,    34,    35,    38,    38,    38,    64,   101,
      65,    65,    66,    66,    66,    27,     1,    37,    75,     1,
      81,     1,    95,     1,    37,    41,    41,    64,    58,    27,
      40,    55,    41,    54,    40,    54,    64,    64,    64,    64,
      64,    64,    64,    64,    38,    42,    64,    38,    67,    37,
      38,    37,    41,    97,    98,    38,    44,    41,    54,     1,
      64,    40,    40,    64,    41,    39,    69,     1,    38,    67,
      39,    59,    61,    11,    39,    39,    38,    40,    41,    41,
      70,    69,    38,    54,    67,    44,    37,    99,    15,    86,
      87,    84,    54,    10,    77,    40,    41,    67,    54,    64,
      40,    87,    39,    71,    39,    72,    39,    44,    63,    38,
     100,    43,    86,    40,    73,    78,    27,    38,    41,    40,
      54,    16,    85,    88,    54,    54,    64,    82,    43,    40,
      74,    79,    39,    54,    40,    40,    54,    40
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
#line 82 "Parser.y"
    { CreateSymbolTable(); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 93 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 94 "Parser.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 98 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 99 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 100 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 101 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 102 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 103 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 104 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 105 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 106 "Parser.y"
    { (yyval.integer) = 0; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 107 "Parser.y"
    { (yyval.integer) = 2; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 108 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 109 "Parser.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 114 "Parser.y"
    {
        checkBreakContext(loop_depth, switch_depth);
        printf("BREAK statement executed\n");
        (yyval.integer) = 1; 
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 121 "Parser.y"
    { enter_scope("block"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 123 "Parser.y"
    { exit_scope(); (yyval.integer) = (yyvsp[(3) - (4)].integer); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 130 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].datatype), VARIABLE, 0)) {
            semanticError("Variable declaration failed");
        }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 136 "Parser.y"
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
#line 146 "Parser.y"
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
#line 156 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (3)].string), TYPE_BOOL, VARIABLE, 0)) {

            semanticError("Boolean variable declaration failed");
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 163 "Parser.y"
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
#line 174 "Parser.y"
    {
        syntaxError("Invalid variable declaration");
        yyerrok;
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    {
        syntaxError("Invalid const declaration - expected: const type identifier = value;");
        yyerrok;
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 187 "Parser.y"
    { 
        (yyval.attr).place = strdup("1");
        (yyval.attr).type = TYPE_BOOL;
     ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 191 "Parser.y"
    {
        (yyval.attr).place = strdup("0");
        (yyval.attr).type = TYPE_BOOL;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 195 "Parser.y"
    { (yyval.attr) = (yyvsp[(2) - (3)].attr); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 200 "Parser.y"
    { (yyval.datatype) = TYPE_INT; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 201 "Parser.y"
    { (yyval.datatype) = TYPE_FLOAT; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 202 "Parser.y"
    { (yyval.datatype) = TYPE_STRING; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { (yyval.datatype) = TYPE_CHAR; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 208 "Parser.y"
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
#line 242 "Parser.y"
    {
        syntaxError("Invalid left-hand side in assignment");
        yyerrok;
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 246 "Parser.y"
    {
        syntaxError("Invalid expression in assignment");
        yyerrok;
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
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
#line 265 "Parser.y"
    {
        
        (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);

        char *t = newTemp();
        emit("ADD", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 274 "Parser.y"
    {
            (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);

            char *t = newTemp();
            emit("SUB", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
            (yyval.attr).place = t;
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 282 "Parser.y"
    {
            (yyval.attr) = (yyvsp[(1) - (1)].attr);
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 289 "Parser.y"
    {
        (yyval.attr).type = resolveType((yyvsp[(1) - (3)].attr).type, (yyvsp[(3) - (3)].attr).type);

        char *t = newTemp();
        emit("MUL", (yyvsp[(1) - (3)].attr).place, (yyvsp[(3) - (3)].attr).place, t);
        (yyval.attr).place = t;
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 296 "Parser.y"
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
#line 308 "Parser.y"
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
#line 321 "Parser.y"
    {
        (yyval.attr) = (yyvsp[(1) - (1)].attr);
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 328 "Parser.y"
    { (yyval.attr) = (yyvsp[(2) - (3)].attr); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 329 "Parser.y"
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
#line 342 "Parser.y"
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
#line 358 "Parser.y"
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
#line 373 "Parser.y"
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
#line 386 "Parser.y"
    {
    (yyval.attr).type = TYPE_FLOAT;
    char buf[64];
    snprintf(buf, sizeof(buf), "%f", (yyvsp[(1) - (1)].floatval));  
    (yyval.attr).place = strdup(buf); 
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 393 "Parser.y"
    {
        char buf[32];
          snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].integer));
          (yyval.attr).place = strdup(buf); 
        (yyval.attr).type = TYPE_INT;
        
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 400 "Parser.y"
    {
        (yyval.attr).type = TYPE_STRING;
        (yyval.attr).place = strdup((yyvsp[(1) - (1)].string));
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 404 "Parser.y"
    {
        (yyval.attr).type = TYPE_CHAR;
        char buf[10];
        snprintf(buf, sizeof(buf), "'%c'", (yyvsp[(1) - (1)].charval));
        (yyval.attr).place = strdup(buf);
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 410 "Parser.y"
    {
        (yyval.attr).type = TYPE_BOOL;
        (yyval.attr).place = strdup("1");
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 415 "Parser.y"
    {
        (yyval.attr).type = TYPE_BOOL;
        (yyval.attr).place = strdup("0");
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 424 "Parser.y"
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
#line 437 "Parser.y"
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
#line 450 "Parser.y"
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
#line 464 "Parser.y"
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
#line 478 "Parser.y"
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
#line 492 "Parser.y"
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
#line 506 "Parser.y"
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
#line 519 "Parser.y"
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
#line 532 "Parser.y"
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
#line 546 "Parser.y"
    { (yyval.attr) = (yyvsp[(1) - (1)].attr); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 551 "Parser.y"
    { 
        printf("IF statement executed\n"); 
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 554 "Parser.y"
    {
        printf("IF-ELSE statement executed\n");  
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 557 "Parser.y"
    {
        syntaxError("Malformed condition in IF statement");
        yyerrok;
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 561 "Parser.y"
    {
        syntaxError("Missing closing parenthesis in IF statement");
        yyerrok;
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 568 "Parser.y"
    {enter_scope("if-block");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 568 "Parser.y"
    {exit_scope();;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 572 "Parser.y"
    {enter_scope("else-block");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 572 "Parser.y"
    {exit_scope();;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 576 "Parser.y"
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();
        p->Lend = newLabel();
        emit("LABEL", NULL, NULL, p->Lstart);
        (yyval.wlbl) = p;
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 587 "Parser.y"
    {   emit("JMPF", (yyvsp[(4) - (5)].attr).place, NULL, (yyvsp[(2) - (5)].wlbl)->Lend);
        loop_depth++; 
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 590 "Parser.y"
    {enter_scope("while");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 590 "Parser.y"
    {exit_scope();;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 591 "Parser.y"
    { 
        emit("JMP", NULL, NULL, (yyvsp[(2) - (11)].wlbl)->Lstart);
        emit("LABEL", NULL, NULL, (yyvsp[(2) - (11)].wlbl)->Lend);
        free((yyvsp[(2) - (11)].wlbl));
        loop_depth--;
        printf("WHILE loop executed\n"); 
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 612 "Parser.y"
    { enter_scope("for-loop"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 614 "Parser.y"
    { loop_depth++; ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 616 "Parser.y"
    { 
        loop_depth--;
        printf("FOR loop executed\n");
        exit_scope(); 
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 621 "Parser.y"
    {
        syntaxError("Malformed FOR loop structure");
        loop_depth--;
        exit_scope();
        yyerrok;
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 632 "Parser.y"
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

  case 91:

/* Line 1455 of yacc.c  */
#line 644 "Parser.y"
    {
        switch_depth--;
        exit_scope();
        printf("SWITCH statement executed on variable '%s'\n", (yyvsp[(3) - (9)].string));
        (yyval.integer) = 0; 
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 650 "Parser.y"
    {
        syntaxError("Malformed SWITCH statement");
        switch_depth--;
        exit_scope();
        yyerrok;
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 673 "Parser.y"
    {
        if ((yyvsp[(4) - (4)].integer) != 1) {
            semanticError("Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 683 "Parser.y"
    {
        if ((yyvsp[(3) - (3)].integer) != 1) {
            semanticError("Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 693 "Parser.y"
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

  case 100:

/* Line 1455 of yacc.c  */
#line 708 "Parser.y"
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

  case 101:

/* Line 1455 of yacc.c  */
#line 721 "Parser.y"
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

  case 102:

/* Line 1455 of yacc.c  */
#line 731 "Parser.y"
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

  case 103:

/* Line 1455 of yacc.c  */
#line 744 "Parser.y"
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

  case 104:

/* Line 1455 of yacc.c  */
#line 760 "Parser.y"
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

  case 107:

/* Line 1455 of yacc.c  */
#line 781 "Parser.y"
    {
        if (!insert_symbol((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].datatype), PARAMETER, 0)) {
            semanticError("Parameter declaration failed");
        }
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 790 "Parser.y"
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

  case 109:

/* Line 1455 of yacc.c  */
#line 807 "Parser.y"
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

  case 110:

/* Line 1455 of yacc.c  */
#line 826 "Parser.y"
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();
        p->Lend   = newLabel();
        emit("LABEL", NULL, NULL, p->Lstart);
        (yyval.wlbl) = p;
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 837 "Parser.y"
    {
        emit("JMPF", (yyvsp[(6) - (8)].attr).place, NULL, (yyvsp[(2) - (8)].wlbl)->Lend);
        emit("JMP",  NULL, NULL, (yyvsp[(2) - (8)].wlbl)->Lstart);
        emit("LABEL", NULL, NULL, (yyvsp[(2) - (8)].wlbl)->Lend);
      
        printf("DO-WHILE loop executed\n");
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 845 "Parser.y"
    {
        syntaxError("Malformed DO-WHILE loop");
        loop_depth = 0; // Reset in case it was incremented
        yyerrok;
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 871 "Parser.y"
    { loop_depth++; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 871 "Parser.y"
    { enter_scope("do-while"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 871 "Parser.y"
    { exit_scope(); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 871 "Parser.y"
    { loop_depth--; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 876 "Parser.y"
    {
        argument_count = 1;
        argument_types[0] = (yyvsp[(1) - (1)].attr).type; 
        emit("PARAM", (yyvsp[(1) - (1)].attr).place, NULL, NULL); 
        (yyval.attr) = (yyvsp[(1) - (1)].attr);  // Pass through the type
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 883 "Parser.y"
    {
        argument_types[argument_count] = (yyvsp[(3) - (3)].attr).type;  
        argument_count++;
        emit("PARAM", (yyvsp[(3) - (3)].attr).place, NULL, NULL); 
        (yyval.attr) = (yyvsp[(3) - (3)].attr);  // Pass through the type (or you could pass the first type)
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 3016 "Parser.tab.c"
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
#line 890 "Parser.y"


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
