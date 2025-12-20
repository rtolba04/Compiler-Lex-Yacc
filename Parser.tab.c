/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;


#line 82 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 5,                /* STRING_TYPE  */
  YYSYMBOL_CHAR_TYPE = 6,                  /* CHAR_TYPE  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_BOOL_TYPE = 8,                  /* BOOL_TYPE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_SWITCH = 14,                    /* SWITCH  */
  YYSYMBOL_CASE = 15,                      /* CASE  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_VOID_TYPE = 19,                 /* VOID_TYPE  */
  YYSYMBOL_TRUE_COND = 20,                 /* TRUE_COND  */
  YYSYMBOL_FALSE_COND = 21,                /* FALSE_COND  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 24,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 25,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 26,                    /* MODULO  */
  YYSYMBOL_ASSIGN = 27,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 29,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_THAN = 30,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 31,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL = 32,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 33,             /* GREATER_EQUAL  */
  YYSYMBOL_AND = 34,                       /* AND  */
  YYSYMBOL_OR = 35,                        /* OR  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_LPAREN = 37,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 38,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 39,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 40,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_IDENTIFIER = 44,                /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 45,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 46,                     /* FLOAT  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_statement_list = 50,            /* statement_list  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_declaration_stmt = 52,          /* declaration_stmt  */
  YYSYMBOL_bool_expression = 53,           /* bool_expression  */
  YYSYMBOL_type = 54,                      /* type  */
  YYSYMBOL_assignment_stmt = 55,           /* assignment_stmt  */
  YYSYMBOL_assign = 56,                    /* assign  */
  YYSYMBOL_expression = 57,                /* expression  */
  YYSYMBOL_T = 58,                         /* T  */
  YYSYMBOL_F = 59,                         /* F  */
  YYSYMBOL_condition = 60,                 /* condition  */
  YYSYMBOL_if_stmt = 61,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 62,                /* while_stmt  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_64_3 = 64,                      /* $@3  */
  YYSYMBOL_for_stmt = 65,                  /* for_stmt  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_switch_stmt = 68,               /* switch_stmt  */
  YYSYMBOL_scope_start = 69,               /* scope_start  */
  YYSYMBOL_scope_end = 70,                 /* scope_end  */
  YYSYMBOL_case_list = 71,                 /* case_list  */
  YYSYMBOL_case_stmt = 72,                 /* case_stmt  */
  YYSYMBOL_default_case = 73,              /* default_case  */
  YYSYMBOL_function_decl = 74,             /* function_decl  */
  YYSYMBOL_function_name = 75,             /* function_name  */
  YYSYMBOL_parameter_list = 76,            /* parameter_list  */
  YYSYMBOL_parameter = 77,                 /* parameter  */
  YYSYMBOL_return_stmt = 78,               /* return_stmt  */
  YYSYMBOL_do_while_stmt = 79,             /* do_while_stmt  */
  YYSYMBOL_80_6 = 80,                      /* $@6  */
  YYSYMBOL_81_7 = 81,                      /* $@7  */
  YYSYMBOL_argument_list = 82              /* argument_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   519

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    56,    61,    62,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    81,    85,    90,    95,
      99,   109,   110,   111,   117,   118,   119,   120,   124,   134,
     141,   142,   143,   148,   149,   154,   155,   159,   160,   161,
     176,   187,   198,   199,   200,   201,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   218,   219,   224,   226,
     223,   232,   234,   231,   240,   254,   270,   272,   275,   276,
     280,   282,   287,   289,   294,   299,   304,   309,   317,   323,
     324,   328,   335,   339,   348,   350,   347,   359,   360
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT_TYPE",
  "STRING_TYPE", "CHAR_TYPE", "CONST", "BOOL_TYPE", "IF", "ELSE", "WHILE",
  "FOR", "DO", "SWITCH", "CASE", "DEFAULT", "BREAK", "RETURN", "VOID_TYPE",
  "TRUE_COND", "FALSE_COND", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "MODULO", "ASSIGN", "EQUAL", "NOT_EQUAL", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL", "GREATER_EQUAL", "AND", "OR", "NOT", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "COMMA", "COLON", "IDENTIFIER",
  "NUMBER", "FLOAT", "$accept", "program", "$@1", "statement_list",
  "statement", "declaration_stmt", "bool_expression", "type",
  "assignment_stmt", "assign", "expression", "T", "F", "condition",
  "if_stmt", "while_stmt", "$@2", "$@3", "for_stmt", "$@4", "$@5",
  "switch_stmt", "scope_start", "scope_end", "case_list", "case_stmt",
  "default_case", "function_decl", "function_name", "parameter_list",
  "parameter", "return_stmt", "do_while_stmt", "$@6", "$@7",
  "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -145,     3,   430,  -145,  -145,  -145,  -145,  -145,   141,   -34,
     -25,    -2,    16,     8,    42,   436,    12,  -145,  -145,   473,
     442,    -1,  -145,  -145,   430,  -145,  -145,    72,  -145,    11,
      71,  -145,  -145,  -145,  -145,  -145,  -145,    84,  -145,  -145,
      79,    51,   442,   442,   104,  -145,    82,  -145,    87,    20,
      90,  -145,   473,   128,    92,   473,   469,  -145,    58,   473,
     473,  -145,   473,   473,   473,    19,   109,    18,  -145,    93,
     102,   442,    98,   430,   110,  -145,    97,    67,   473,   473,
     473,   473,   473,   473,   473,   473,  -145,    36,  -145,    67,
      75,   473,  -145,    71,    71,  -145,  -145,  -145,   113,   111,
      77,  -145,   473,  -145,  -145,   442,   135,   113,   115,   140,
      58,   166,   113,   113,    80,    67,    67,    67,    67,    67,
      67,    67,    67,  -145,  -145,   473,    40,  -145,   430,  -145,
     113,   141,    43,   144,  -145,   430,  -145,   139,  -145,   173,
     430,   113,    67,  -145,   210,   430,  -145,  -145,  -145,   210,
     430,   163,   153,   181,   473,     0,  -145,   210,   430,  -145,
    -145,   210,   183,   254,   473,   155,   158,   -15,   154,  -145,
    -145,   156,  -145,   210,  -145,   113,  -145,    67,  -145,   442,
     430,   430,  -145,  -145,   430,  -145,   430,   160,   298,   342,
     210,   386,   159,   161,   164,  -145,  -145,  -145,  -145,  -145,
    -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,    39,    43,    42,     3,     4,     6,     0,     7,     0,
      32,    36,     9,    10,    11,    12,    13,     0,    15,    14,
       0,     0,     0,     0,     0,    84,     0,    83,    39,     0,
       0,    38,     0,    55,     0,     0,     0,     5,    78,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,    82,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    41,    87,
       0,     0,    16,    30,    31,    33,    34,    35,     0,     0,
       0,    79,     0,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    28,    40,     0,     0,    66,     0,    81,
       0,     0,     0,     0,    20,     0,    58,     0,    85,     0,
       0,     0,    88,    18,     0,     0,    80,    17,    23,     0,
       0,     0,     0,     0,     0,     0,    68,     0,     0,    67,
      75,     0,    56,     0,     0,     0,     0,     0,     0,    64,
      69,     0,    77,     0,    74,     0,    59,    29,    61,     0,
       0,     0,    65,    76,     0,    60,     0,     0,    70,    72,
       0,     0,     0,     0,     0,    57,    62,    86,    71,    73,
      63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,   -52,   -24,   157,  -145,    10,  -145,  -145,
     -11,    45,   -13,   -41,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,   -93,  -144,  -145,    44,  -145,  -145,  -145,   131,
      73,  -145,  -145,  -145,  -145,  -145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    24,    25,    26,   106,    27,    28,   152,
      29,    30,    31,    54,    32,    33,   150,   185,    34,   186,
     200,    35,   128,   160,   155,   156,   171,    36,    37,   100,
     101,    38,    39,    73,   153,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    69,    70,     3,    49,   162,    51,    59,    60,    53,
      41,   169,    42,   172,   135,   154,   168,   174,    40,   139,
     140,   111,     4,     5,     6,     7,    55,   182,   180,   183,
     109,    53,    53,    59,    60,    43,    56,   145,   103,   104,
     159,    77,    59,    60,    87,    89,   195,    45,   158,    95,
      96,    97,    61,    44,    72,   105,    50,    98,    59,    60,
      53,    75,    59,    60,   133,    59,    60,   115,   116,   117,
     118,   119,   120,   121,   122,    99,   144,   123,    67,    46,
     126,   143,   184,   149,   147,    91,    99,    57,   157,    59,
      60,   132,    68,   161,    53,    62,    63,    64,   163,    92,
       4,     5,     6,     7,    93,    94,   173,     4,     5,     6,
       7,     8,     9,   124,   142,   130,    58,   125,   141,   131,
      57,    65,   131,    66,    56,    57,    74,    76,   188,   189,
      86,   107,   190,    57,   191,   113,   102,    57,   187,    57,
     108,    99,   110,   167,     4,     5,     6,     7,   112,    57,
      59,    60,   127,   177,   136,   129,    78,    79,    80,    81,
      82,    83,    84,    85,    57,    57,    57,    57,    53,     4,
       5,     6,     7,     8,     9,    10,   134,    11,    12,    13,
      14,   137,   148,   151,    15,    16,    17,    18,   154,    19,
     164,   165,   166,   175,   178,   179,   159,   181,   192,   170,
     197,    71,   198,    20,   146,   199,   138,   114,     0,     0,
      21,    22,    23,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
     159,     0,     0,     0,    21,    22,    23,     4,     5,     6,
       7,     8,     9,    10,     0,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,   176,     0,     0,     0,    21,    22,
      23,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,     0,     0,   193,    15,    16,    17,    18,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,    21,    22,    23,     4,     5,     6,     7,     8,
       9,    10,     0,    11,    12,    13,    14,     0,     0,   194,
      15,    16,    17,    18,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,    21,    22,    23,     4,
       5,     6,     7,     8,     9,    10,     0,    11,    12,    13,
      14,     0,     0,     0,    15,    16,    17,    18,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,   196,     0,     0,     0,
      21,    22,    23,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,     0,    19,     0,     0,    17,    18,     0,    19,
       0,     0,    17,    18,     0,    19,     0,    20,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    47,    52,    20,
      48,    22,    23,     0,     0,     0,    48,    22,    23,    17,
      18,     0,    19,    17,    18,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    88,     0,     0,
      20,     0,     0,    48,    22,    23,     0,    48,    22,    23
};

static const yytype_int16 yycheck[] =
{
      24,    42,    43,     0,    15,   149,    19,    22,    23,    20,
      44,   155,    37,   157,   107,    15,    16,   161,     8,   112,
     113,    73,     3,     4,     5,     6,    27,   171,    43,   173,
      71,    42,    43,    22,    23,    37,    37,   130,    20,    21,
      40,    52,    22,    23,    55,    56,   190,    39,   141,    62,
      63,    64,    41,    37,    44,    37,    44,    38,    22,    23,
      71,    41,    22,    23,   105,    22,    23,    78,    79,    80,
      81,    82,    83,    84,    85,    65,   128,    41,    27,    37,
      91,    41,   175,   135,    41,    27,    76,   111,   140,    22,
      23,   102,    41,   145,   105,    24,    25,    26,   150,    41,
       3,     4,     5,     6,    59,    60,   158,     3,     4,     5,
       6,     7,     8,    38,   125,    38,    44,    42,    38,    42,
     144,    37,    42,    44,    37,   149,    44,    37,   180,   181,
      38,    38,   184,   157,   186,    38,    27,   161,   179,   163,
      38,   131,    44,   154,     3,     4,     5,     6,    38,   173,
      22,    23,    39,   164,    39,    44,    28,    29,    30,    31,
      32,    33,    34,    35,   188,   189,   190,   191,   179,     3,
       4,     5,     6,     7,     8,     9,    41,    11,    12,    13,
      14,    41,    38,    44,    18,    19,    20,    21,    15,    23,
      27,    38,    11,    10,    39,    37,    40,    43,    38,   155,
      41,    44,    41,    37,   131,    41,    40,    76,    -1,    -1,
      44,    45,    46,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    20,    21,    -1,    23,
      -1,    -1,    20,    21,    -1,    23,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    37,    44,    45,    46,    41,    36,    37,
      44,    45,    46,    -1,    -1,    -1,    44,    45,    46,    20,
      21,    -1,    23,    20,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      37,    -1,    -1,    44,    45,    46,    -1,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     3,     4,     5,     6,     7,     8,
       9,    11,    12,    13,    14,    18,    19,    20,    21,    23,
      37,    44,    45,    46,    50,    51,    52,    54,    55,    57,
      58,    59,    61,    62,    65,    68,    74,    75,    78,    79,
      54,    44,    37,    37,    37,    39,    37,    41,    44,    57,
      44,    59,    36,    57,    60,    27,    37,    51,    44,    22,
      23,    41,    24,    25,    26,    37,    44,    27,    41,    60,
      60,    52,    54,    80,    44,    41,    37,    57,    28,    29,
      30,    31,    32,    33,    34,    35,    38,    57,    38,    57,
      82,    27,    41,    58,    58,    59,    59,    59,    38,    54,
      76,    77,    27,    20,    21,    37,    53,    38,    38,    60,
      44,    50,    38,    38,    76,    57,    57,    57,    57,    57,
      57,    57,    57,    41,    38,    42,    57,    39,    69,    44,
      38,    42,    57,    60,    41,    69,    39,    41,    40,    69,
      69,    38,    57,    41,    50,    69,    77,    41,    38,    50,
      63,    44,    56,    81,    15,    71,    72,    50,    69,    40,
      70,    50,    70,    50,    27,    38,    11,    57,    16,    70,
      72,    73,    70,    50,    70,    10,    40,    57,    39,    37,
      43,    43,    70,    70,    69,    64,    66,    60,    50,    50,
      50,    50,    38,    17,    17,    70,    40,    41,    41,    41,
      67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    49,    48,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    53,    53,    53,    54,    54,    54,    54,    55,    56,
      57,    57,    57,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    63,    64,
      62,    66,    67,    65,    68,    68,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    75,    76,
      76,    77,    78,    78,    80,    81,    79,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     3,
       5,     1,     1,     3,     1,     1,     1,     1,     4,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     2,     1,
       4,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     7,    11,     0,     0,
       9,     0,     0,    12,     7,     8,     1,     1,     1,     2,
       4,     6,     3,     5,     7,     6,     8,     7,     2,     1,
       3,     2,     3,     2,     0,     0,    11,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 56 "parser.y"
    { CreateSymbolTable(); }
#line 1347 "parser.tab.c"
    break;

  case 16: /* declaration_stmt: type IDENTIFIER SEMICOLON  */
#line 82 "parser.y"
    {
        insert_symbol((yyvsp[-1].string), (yyvsp[-2].datatype), VARIABLE, 0);
    }
#line 1355 "parser.tab.c"
    break;

  case 17: /* declaration_stmt: CONST type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 86 "parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[-3].string), (yyvsp[-4].datatype), VARIABLE, 1);
        if (entry) entry->is_initialized = 1;
    }
#line 1364 "parser.tab.c"
    break;

  case 18: /* declaration_stmt: type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 91 "parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[-3].string), (yyvsp[-4].datatype), VARIABLE, 0);
        if (entry) entry->is_initialized = 1;
    }
#line 1373 "parser.tab.c"
    break;

  case 19: /* declaration_stmt: BOOL_TYPE IDENTIFIER SEMICOLON  */
#line 96 "parser.y"
    {
        insert_symbol((yyvsp[-1].string), TYPE_BOOL, VARIABLE, 0);
    }
#line 1381 "parser.tab.c"
    break;

  case 20: /* declaration_stmt: BOOL_TYPE IDENTIFIER ASSIGN bool_expression SEMICOLON  */
#line 100 "parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[-3].string), TYPE_BOOL, VARIABLE, 0);
        if (entry) entry->is_initialized = 1;
        printf("Boolean variable declared: %s\n", (yyvsp[-3].string));
    }
#line 1391 "parser.tab.c"
    break;

  case 21: /* bool_expression: TRUE_COND  */
#line 109 "parser.y"
                         { (yyval.integer) = 1; }
#line 1397 "parser.tab.c"
    break;

  case 22: /* bool_expression: FALSE_COND  */
#line 110 "parser.y"
                         { (yyval.integer) = 0; }
#line 1403 "parser.tab.c"
    break;

  case 23: /* bool_expression: LPAREN condition RPAREN  */
#line 111 "parser.y"
                                   { (yyval.integer) = (yyvsp[-1].integer); }
#line 1409 "parser.tab.c"
    break;

  case 24: /* type: INT  */
#line 117 "parser.y"
                      { (yyval.datatype) = TYPE_INT; }
#line 1415 "parser.tab.c"
    break;

  case 25: /* type: FLOAT_TYPE  */
#line 118 "parser.y"
                      { (yyval.datatype) = TYPE_FLOAT; }
#line 1421 "parser.tab.c"
    break;

  case 26: /* type: STRING_TYPE  */
#line 119 "parser.y"
                      { (yyval.datatype) = TYPE_STRING; }
#line 1427 "parser.tab.c"
    break;

  case 27: /* type: CHAR_TYPE  */
#line 120 "parser.y"
                      { (yyval.datatype) = TYPE_CHAR; }
#line 1433 "parser.tab.c"
    break;

  case 28: /* assignment_stmt: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 125 "parser.y"
    {
        if (!update_symbol_initialized((yyvsp[-3].string))) {
            yyerror("Undeclared variable in assignment");
        }
    }
#line 1443 "parser.tab.c"
    break;

  case 29: /* assign: IDENTIFIER ASSIGN expression  */
#line 134 "parser.y"
                                  { 
        printf("Assignment executed: %s \n", (yyvsp[-2].string));
        (yyval.integer) = (yyvsp[0].integer);  
    }
#line 1452 "parser.tab.c"
    break;

  case 30: /* expression: expression PLUS T  */
#line 141 "parser.y"
                                     { (yyval.integer) = (yyvsp[-2].integer) + (yyvsp[0].integer); }
#line 1458 "parser.tab.c"
    break;

  case 31: /* expression: expression MINUS T  */
#line 142 "parser.y"
                                     { (yyval.integer) = (yyvsp[-2].integer) - (yyvsp[0].integer); }
#line 1464 "parser.tab.c"
    break;

  case 32: /* expression: T  */
#line 143 "parser.y"
                                    { (yyval.integer) = (yyvsp[0].integer); }
#line 1470 "parser.tab.c"
    break;

  case 33: /* T: T MULTIPLY F  */
#line 148 "parser.y"
                                    { (yyval.integer) = (yyvsp[-2].integer) * (yyvsp[0].integer); }
#line 1476 "parser.tab.c"
    break;

  case 34: /* T: T DIVIDE F  */
#line 149 "parser.y"
                                    { if ((yyvsp[0].integer) == 0) 
                                        yyerror("Division by zero");
                                     else 
                                        (yyval.integer) = (yyvsp[-2].integer) / (yyvsp[0].integer);
                                    }
#line 1486 "parser.tab.c"
    break;

  case 35: /* T: T MODULO F  */
#line 154 "parser.y"
                                    { (yyval.integer) = (yyvsp[-2].integer) % (yyvsp[0].integer); }
#line 1492 "parser.tab.c"
    break;

  case 36: /* T: F  */
#line 155 "parser.y"
                                    { (yyval.integer) = (yyvsp[0].integer); }
#line 1498 "parser.tab.c"
    break;

  case 37: /* F: LPAREN condition RPAREN  */
#line 159 "parser.y"
                                   { (yyval.integer) = (yyvsp[-1].integer); }
#line 1504 "parser.tab.c"
    break;

  case 38: /* F: MINUS F  */
#line 160 "parser.y"
                                    { (yyval.integer) = -(yyvsp[0].integer); }
#line 1510 "parser.tab.c"
    break;

  case 39: /* F: IDENTIFIER  */
#line 162 "parser.y"
    {
        SymbolEntry *entry = lookup_symbol((yyvsp[0].string));
        if (!entry) {
            yyerror("Undeclared variable used in expression");
            (yyval.integer) = 0; 
        } else if (entry->is_initialized == 0) {
            yyerror("Use of uninitialized variable");
            (yyval.integer) = 0;
        }
         else {
            update_symbol_used((yyvsp[0].string));
            (yyval.integer) = 0; // or entry->type if you want type checking later
        }
    }
#line 1529 "parser.tab.c"
    break;

  case 40: /* F: IDENTIFIER LPAREN argument_list RPAREN  */
#line 177 "parser.y"
    {
        SymbolEntry *entry = lookup_symbol((yyvsp[-3].string));
        if (!entry || entry->kind != FUNCTION) {
            yyerror("Call to undeclared function");
        } else {
            update_symbol_used((yyvsp[-3].string));
        }
        printf("Function call: %s() executed\n", (yyvsp[-3].string));
        (yyval.integer) = 0;
    }
#line 1544 "parser.tab.c"
    break;

  case 41: /* F: IDENTIFIER LPAREN RPAREN  */
#line 188 "parser.y"
    {    
         SymbolEntry *entry = lookup_symbol((yyvsp[-2].string));
        if (!entry || entry->kind != FUNCTION) {
            yyerror("Call to undeclared function");
        } else {
            update_symbol_used((yyvsp[-2].string));
        }
        (yyval.integer) = 0;  
        printf("Function call: %s() with no arguments executed\n", (yyvsp[-2].string));  (yyval.integer) = 0;    
    }
#line 1559 "parser.tab.c"
    break;

  case 42: /* F: FLOAT  */
#line 198 "parser.y"
                                    { (yyval.integer) = (yyvsp[0].floatval); }
#line 1565 "parser.tab.c"
    break;

  case 43: /* F: NUMBER  */
#line 199 "parser.y"
                                    { (yyval.integer) = (yyvsp[0].integer); }
#line 1571 "parser.tab.c"
    break;

  case 44: /* F: TRUE_COND  */
#line 200 "parser.y"
                                    { (yyval.integer) = 1; }
#line 1577 "parser.tab.c"
    break;

  case 45: /* F: FALSE_COND  */
#line 201 "parser.y"
                                    { (yyval.integer) = 0; }
#line 1583 "parser.tab.c"
    break;

  case 46: /* condition: expression EQUAL expression  */
#line 205 "parser.y"
                                    { (yyval.integer) = ((yyvsp[-2].integer) == (yyvsp[0].integer)); }
#line 1589 "parser.tab.c"
    break;

  case 47: /* condition: expression NOT_EQUAL expression  */
#line 206 "parser.y"
                                      { (yyval.integer) = ((yyvsp[-2].integer) != (yyvsp[0].integer)); }
#line 1595 "parser.tab.c"
    break;

  case 48: /* condition: expression LESS_THAN expression  */
#line 207 "parser.y"
                                      { (yyval.integer) = ((yyvsp[-2].integer) < (yyvsp[0].integer)); }
#line 1601 "parser.tab.c"
    break;

  case 49: /* condition: expression GREATER_THAN expression  */
#line 208 "parser.y"
                                         { (yyval.integer) = ((yyvsp[-2].integer) > (yyvsp[0].integer)); }
#line 1607 "parser.tab.c"
    break;

  case 50: /* condition: expression LESS_EQUAL expression  */
#line 209 "parser.y"
                                       { (yyval.integer) = ((yyvsp[-2].integer) <= (yyvsp[0].integer)); }
#line 1613 "parser.tab.c"
    break;

  case 51: /* condition: expression GREATER_EQUAL expression  */
#line 210 "parser.y"
                                          { (yyval.integer) = ((yyvsp[-2].integer) >= (yyvsp[0].integer)); }
#line 1619 "parser.tab.c"
    break;

  case 52: /* condition: expression AND expression  */
#line 211 "parser.y"
                                { (yyval.integer) = ((yyvsp[-2].integer) && (yyvsp[0].integer)); }
#line 1625 "parser.tab.c"
    break;

  case 53: /* condition: expression OR expression  */
#line 212 "parser.y"
                               { (yyval.integer) = ((yyvsp[-2].integer) || (yyvsp[0].integer)); }
#line 1631 "parser.tab.c"
    break;

  case 54: /* condition: NOT expression  */
#line 213 "parser.y"
                     { (yyval.integer) = !(yyvsp[0].integer); }
#line 1637 "parser.tab.c"
    break;

  case 55: /* condition: expression  */
#line 214 "parser.y"
                 { (yyval.integer) = (yyvsp[0].integer); }
#line 1643 "parser.tab.c"
    break;

  case 56: /* if_stmt: IF LPAREN condition RPAREN scope_start statement_list scope_end  */
#line 218 "parser.y"
                                                                                                  { printf("IF statement executed\n"); }
#line 1649 "parser.tab.c"
    break;

  case 57: /* if_stmt: IF LPAREN condition RPAREN scope_start statement_list scope_end ELSE scope_start statement_list scope_end  */
#line 219 "parser.y"
                                                                                                                  {printf("IF-ELSE statement executed\n");  }
#line 1655 "parser.tab.c"
    break;

  case 58: /* $@2: %empty  */
#line 224 "parser.y"
            { enter_scope(); }
#line 1661 "parser.tab.c"
    break;

  case 59: /* $@3: %empty  */
#line 226 "parser.y"
            { exit_scope(); }
#line 1667 "parser.tab.c"
    break;

  case 60: /* while_stmt: WHILE LPAREN condition RPAREN LBRACE $@2 statement_list RBRACE $@3  */
#line 227 "parser.y"
    {printf("WHILE loop executed\n");}
#line 1673 "parser.tab.c"
    break;

  case 61: /* $@4: %empty  */
#line 232 "parser.y"
            { enter_scope(); }
#line 1679 "parser.tab.c"
    break;

  case 62: /* $@5: %empty  */
#line 234 "parser.y"
            { exit_scope(); }
#line 1685 "parser.tab.c"
    break;

  case 63: /* for_stmt: FOR LPAREN declaration_stmt condition SEMICOLON assign RPAREN LBRACE $@4 statement_list RBRACE $@5  */
#line 235 "parser.y"
    { printf("FOR loop with declaration executed\n");    }
#line 1691 "parser.tab.c"
    break;

  case 64: /* switch_stmt: SWITCH LPAREN IDENTIFIER RPAREN scope_start case_list scope_end  */
#line 241 "parser.y"
    {
        SymbolEntry *entry = lookup_symbol((yyvsp[-4].string));
        if (!entry) {
            yyerror("Undeclared variable in SWITCH statement");
        } 
        else if (entry->is_initialized == 0) {
            yyerror("Use of uninitialized variable in SWITCH statement");
        }
        else {
            update_symbol_used((yyvsp[-4].string));
            printf("SWITCH statement executed on variable '%s'\n", (yyvsp[-4].string));
        }
    }
#line 1709 "parser.tab.c"
    break;

  case 65: /* switch_stmt: SWITCH LPAREN IDENTIFIER RPAREN scope_start case_list default_case scope_end  */
#line 255 "parser.y"
    {
        SymbolEntry *entry = lookup_symbol((yyvsp[-5].string));
        if (!entry) {
            yyerror("Undeclared variable in SWITCH statement");
        } 
        else if (entry->is_initialized == 0) {
            yyerror("Use of uninitialized variable in SWITCH statement");
        }
        else {
            update_symbol_used((yyvsp[-5].string));
            printf("SWITCH statement with DEFAULT executed on variable '%s'\n", (yyvsp[-5].string));
        }
    }
#line 1727 "parser.tab.c"
    break;

  case 66: /* scope_start: LBRACE  */
#line 270 "parser.y"
                    { enter_scope(); }
#line 1733 "parser.tab.c"
    break;

  case 67: /* scope_end: RBRACE  */
#line 272 "parser.y"
                    { exit_scope(); }
#line 1739 "parser.tab.c"
    break;

  case 70: /* case_stmt: CASE expression COLON statement_list  */
#line 281 "parser.y"
    {      printf("CASE executed\n");    }
#line 1745 "parser.tab.c"
    break;

  case 71: /* case_stmt: CASE expression COLON statement_list BREAK SEMICOLON  */
#line 283 "parser.y"
    {      printf("CASE with BREAK executed\n");    }
#line 1751 "parser.tab.c"
    break;

  case 72: /* default_case: DEFAULT COLON statement_list  */
#line 288 "parser.y"
    {        printf("DEFAULT case executed\n");   }
#line 1757 "parser.tab.c"
    break;

  case 73: /* default_case: DEFAULT COLON statement_list BREAK SEMICOLON  */
#line 290 "parser.y"
    {     printf("DEFAULT case with BREAK executed\n");   }
#line 1763 "parser.tab.c"
    break;

  case 74: /* function_decl: function_name LPAREN parameter_list RPAREN scope_start statement_list scope_end  */
#line 296 "parser.y"
    {
        printf("Function declaration executed\n");
    }
#line 1771 "parser.tab.c"
    break;

  case 75: /* function_decl: function_name LPAREN RPAREN scope_start statement_list scope_end  */
#line 300 "parser.y"
    {       
       
        printf("Function declaration (no parameters) executed\n");    
    }
#line 1780 "parser.tab.c"
    break;

  case 76: /* function_decl: VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN scope_start statement_list scope_end  */
#line 305 "parser.y"
    {      
        insert_symbol((yyvsp[-6].string), TYPE_VOID, FUNCTION, 0);
        printf("Void function declaration executed\n");  
    }
#line 1789 "parser.tab.c"
    break;

  case 77: /* function_decl: VOID_TYPE IDENTIFIER LPAREN RPAREN scope_start statement_list scope_end  */
#line 310 "parser.y"
    {      
        insert_symbol((yyvsp[-5].string), TYPE_VOID, FUNCTION, 0);
        printf("Void function declaration (no parameters) executed\n");  
    }
#line 1798 "parser.tab.c"
    break;

  case 78: /* function_name: type IDENTIFIER  */
#line 318 "parser.y"
    {
        insert_symbol((yyvsp[0].string), (yyvsp[-1].datatype), FUNCTION, 0);
    }
#line 1806 "parser.tab.c"
    break;

  case 81: /* parameter: type IDENTIFIER  */
#line 329 "parser.y"
    {
        insert_symbol((yyvsp[0].string), (yyvsp[-1].datatype), PARAMETER, 0);
    }
#line 1814 "parser.tab.c"
    break;

  case 82: /* return_stmt: RETURN expression SEMICOLON  */
#line 336 "parser.y"
    {
        printf("RETURN statement executed\n");
    }
#line 1822 "parser.tab.c"
    break;

  case 83: /* return_stmt: RETURN SEMICOLON  */
#line 340 "parser.y"
    {
        printf("RETURN (void) statement executed\n");
    }
#line 1830 "parser.tab.c"
    break;

  case 84: /* $@6: %empty  */
#line 348 "parser.y"
            { enter_scope(); }
#line 1836 "parser.tab.c"
    break;

  case 85: /* $@7: %empty  */
#line 350 "parser.y"
            { exit_scope(); }
#line 1842 "parser.tab.c"
    break;

  case 86: /* do_while_stmt: DO LBRACE $@6 statement_list RBRACE $@7 WHILE LPAREN condition RPAREN SEMICOLON  */
#line 352 "parser.y"
    { printf("DO-WHILE loop executed\n"); }
#line 1848 "parser.tab.c"
    break;


#line 1852 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 362 "parser.y"


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
    //testing quad
    emit("TEST", "a", "b", "t1");

    if(yyparse() == 0) {
        printf("Parsing completed successfully.\n");
        //print_symbol_table();
        print_quads();
    } else {
        printf("Parsing failed.\n");
    }
}
