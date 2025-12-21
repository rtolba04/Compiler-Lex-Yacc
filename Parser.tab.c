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

#line 86 "Parser.tab.c"

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

#include "Parser.tab.h"
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
  YYSYMBOL_global_list = 50,               /* global_list  */
  YYSYMBOL_global_element = 51,            /* global_element  */
  YYSYMBOL_statement_list = 52,            /* statement_list  */
  YYSYMBOL_statement = 53,                 /* statement  */
  YYSYMBOL_break_stmt = 54,                /* break_stmt  */
  YYSYMBOL_block = 55,                     /* block  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_declaration_stmt = 57,          /* declaration_stmt  */
  YYSYMBOL_bool_expression = 58,           /* bool_expression  */
  YYSYMBOL_type = 59,                      /* type  */
  YYSYMBOL_assignment_stmt = 60,           /* assignment_stmt  */
  YYSYMBOL_assign = 61,                    /* assign  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_T = 63,                         /* T  */
  YYSYMBOL_F = 64,                         /* F  */
  YYSYMBOL_condition = 65,                 /* condition  */
  YYSYMBOL_if_stmt = 66,                   /* if_stmt  */
  YYSYMBOL_if_block = 67,                  /* if_block  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_69_4 = 69,                      /* $@4  */
  YYSYMBOL_else_block = 70,                /* else_block  */
  YYSYMBOL_71_5 = 71,                      /* $@5  */
  YYSYMBOL_72_6 = 72,                      /* $@6  */
  YYSYMBOL_while_stmt = 73,                /* while_stmt  */
  YYSYMBOL_74_7 = 74,                      /* $@7  */
  YYSYMBOL_75_8 = 75,                      /* $@8  */
  YYSYMBOL_76_9 = 76,                      /* $@9  */
  YYSYMBOL_for_stmt = 77,                  /* for_stmt  */
  YYSYMBOL_78_10 = 78,                     /* $@10  */
  YYSYMBOL_79_11 = 79,                     /* $@11  */
  YYSYMBOL_switch_stmt = 80,               /* switch_stmt  */
  YYSYMBOL_81_12 = 81,                     /* $@12  */
  YYSYMBOL_switch_optional_default = 82,   /* switch_optional_default  */
  YYSYMBOL_case_list = 83,                 /* case_list  */
  YYSYMBOL_case_stmt = 84,                 /* case_stmt  */
  YYSYMBOL_default_case = 85,              /* default_case  */
  YYSYMBOL_function_decl = 86,             /* function_decl  */
  YYSYMBOL_function_name = 87,             /* function_name  */
  YYSYMBOL_function_name_void = 88,        /* function_name_void  */
  YYSYMBOL_parameter_list = 89,            /* parameter_list  */
  YYSYMBOL_parameter = 90,                 /* parameter  */
  YYSYMBOL_return_stmt = 91,               /* return_stmt  */
  YYSYMBOL_do_while_stmt = 92,             /* do_while_stmt  */
  YYSYMBOL_93_13 = 93,                     /* $@13  */
  YYSYMBOL_94_14 = 94,                     /* $@14  */
  YYSYMBOL_95_15 = 95,                     /* $@15  */
  YYSYMBOL_96_16 = 96,                     /* $@16  */
  YYSYMBOL_argument_list = 97              /* argument_list  */
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
#define YYLAST   794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

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
       0,    58,    58,    58,    63,    63,    66,    66,    69,    70,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    89,    97,    97,   111,   117,   126,   135,   141,
     151,   155,   163,   164,   165,   171,   172,   173,   174,   178,
     196,   200,   207,   218,   222,   226,   231,   235,   244,   256,
     260,   261,   262,   275,   285,   295,   296,   297,   298,   302,
     306,   310,   314,   318,   322,   326,   330,   334,   338,   343,
     346,   360,   360,   360,   364,   364,   364,   370,   371,   371,
     369,   390,   392,   389,   410,   409,   428,   438,   439,   445,
     446,   450,   460,   470,   476,   482,   488,   501,   513,   525,
     526,   534,   543,   552,   566,   567,   569,   570,   565,   583,
     584
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
  "NUMBER", "FLOAT", "$accept", "program", "$@1", "global_list",
  "global_element", "statement_list", "statement", "break_stmt", "block",
  "$@2", "declaration_stmt", "bool_expression", "type", "assignment_stmt",
  "assign", "expression", "T", "F", "condition", "if_stmt", "if_block",
  "$@3", "$@4", "else_block", "$@5", "$@6", "while_stmt", "$@7", "$@8",
  "$@9", "for_stmt", "$@10", "$@11", "switch_stmt", "$@12",
  "switch_optional_default", "case_list", "case_stmt", "default_case",
  "function_decl", "function_name", "function_name_void", "parameter_list",
  "parameter", "return_stmt", "do_while_stmt", "$@13", "$@14", "$@15",
  "$@16", "argument_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-161)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-107)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,    85,    86,    87,    88,   133,
      89,    44,    14,    90,   200,    91,    53,    54,    64,    92,
     177,   186,   204,   197,   205,   222,    93,   178,   198,   216,
      94,   126,   218,    95,   185,   212,   183,   184,   213,    96,
      16,    17,    35,    36,    97,    98,   127,   170,   190,   209,
     117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
#line 58 "Parser.y"
    { CreateSymbolTable(); }
#line 1446 "Parser.tab.c"
    break;

  case 8: /* statement_list: statement  */
#line 69 "Parser.y"
              { (yyval.integer) = (yyvsp[0].integer); }
#line 1452 "Parser.tab.c"
    break;

  case 9: /* statement_list: statement_list statement  */
#line 70 "Parser.y"
                               { (yyval.integer) = (yyvsp[0].integer); }
#line 1458 "Parser.tab.c"
    break;

  case 10: /* statement: declaration_stmt  */
#line 74 "Parser.y"
                     { (yyval.integer) = 0; }
#line 1464 "Parser.tab.c"
    break;

  case 11: /* statement: assignment_stmt  */
#line 75 "Parser.y"
                       { (yyval.integer) = 0; }
#line 1470 "Parser.tab.c"
    break;

  case 12: /* statement: expression SEMICOLON  */
#line 76 "Parser.y"
                           { (yyval.integer) = 0; }
#line 1476 "Parser.tab.c"
    break;

  case 13: /* statement: if_stmt  */
#line 77 "Parser.y"
              { (yyval.integer) = 0; }
#line 1482 "Parser.tab.c"
    break;

  case 14: /* statement: while_stmt  */
#line 78 "Parser.y"
                 { (yyval.integer) = 0; }
#line 1488 "Parser.tab.c"
    break;

  case 15: /* statement: for_stmt  */
#line 79 "Parser.y"
               { (yyval.integer) = 0; }
#line 1494 "Parser.tab.c"
    break;

  case 16: /* statement: switch_stmt  */
#line 80 "Parser.y"
                  { (yyval.integer) = 0; }
#line 1500 "Parser.tab.c"
    break;

  case 17: /* statement: function_decl  */
#line 81 "Parser.y"
                    { (yyval.integer) = 0; }
#line 1506 "Parser.tab.c"
    break;

  case 18: /* statement: do_while_stmt  */
#line 82 "Parser.y"
                    { (yyval.integer) = 0; }
#line 1512 "Parser.tab.c"
    break;

  case 19: /* statement: return_stmt  */
#line 83 "Parser.y"
                  { (yyval.integer) = 0; }
#line 1518 "Parser.tab.c"
    break;

  case 20: /* statement: break_stmt  */
#line 84 "Parser.y"
                 { (yyval.integer) = (yyvsp[0].integer); }
#line 1524 "Parser.tab.c"
    break;

  case 21: /* statement: block  */
#line 85 "Parser.y"
               { (yyval.integer) = (yyvsp[0].integer); }
#line 1530 "Parser.tab.c"
    break;

  case 22: /* break_stmt: BREAK SEMICOLON  */
#line 90 "Parser.y"
    {
        checkBreakContext(loop_depth, switch_depth);
        printf("BREAK statement executed\n");
        (yyval.integer) = 1; 
    }
#line 1540 "Parser.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 97 "Parser.y"
           { enter_scope("block"); }
#line 1546 "Parser.tab.c"
    break;

  case 24: /* block: LBRACE $@2 statement_list RBRACE  */
#line 99 "Parser.y"
           { exit_scope(); (yyval.integer) = (yyvsp[-1].integer); }
#line 1552 "Parser.tab.c"
    break;

  case 25: /* declaration_stmt: type IDENTIFIER SEMICOLON  */
#line 112 "Parser.y"
    {
        if (!insert_symbol((yyvsp[-1].string), (yyvsp[-2].datatype), VARIABLE, 0)) {
            semanticError("Variable declaration failed");
        }
    }
#line 1562 "Parser.tab.c"
    break;

  case 26: /* declaration_stmt: CONST type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 118 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[-3].string), (yyvsp[-4].datatype), VARIABLE, 1);
        if (entry) {
            entry->is_initialized = 1;
        } else {
            semanticError("Const variable declaration failed");
        }
    }
#line 1575 "Parser.tab.c"
    break;

  case 27: /* declaration_stmt: type IDENTIFIER ASSIGN expression SEMICOLON  */
#line 127 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[-3].string), (yyvsp[-4].datatype), VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
        } else {
            semanticError("Variable declaration failed");
        }
    }
#line 1588 "Parser.tab.c"
    break;

  case 28: /* declaration_stmt: BOOL_TYPE IDENTIFIER SEMICOLON  */
#line 136 "Parser.y"
    {
        if (!insert_symbol((yyvsp[-1].string), TYPE_BOOL, VARIABLE, 0)) {
            semanticError("Boolean variable declaration failed");
        }
    }
#line 1598 "Parser.tab.c"
    break;

  case 29: /* declaration_stmt: BOOL_TYPE IDENTIFIER ASSIGN bool_expression SEMICOLON  */
#line 142 "Parser.y"
    {
        SymbolEntry *entry = insert_symbol((yyvsp[-3].string), TYPE_BOOL, VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
            printf("Boolean variable declared: %s\n", (yyvsp[-3].string));
        } else {
            semanticError("Boolean variable declaration failed");
        }
    }
#line 1612 "Parser.tab.c"
    break;

  case 30: /* declaration_stmt: type error SEMICOLON  */
#line 151 "Parser.y"
                           {
        syntaxError("Invalid variable declaration");
        yyerrok;
    }
#line 1621 "Parser.tab.c"
    break;

  case 31: /* declaration_stmt: CONST type error SEMICOLON  */
#line 155 "Parser.y"
                                 {
        syntaxError("Invalid const declaration - expected: const type identifier = value;");
        yyerrok;
    }
#line 1630 "Parser.tab.c"
    break;

  case 32: /* bool_expression: TRUE_COND  */
#line 163 "Parser.y"
                         { (yyval.integer) = 1; }
#line 1636 "Parser.tab.c"
    break;

  case 33: /* bool_expression: FALSE_COND  */
#line 164 "Parser.y"
                         { (yyval.integer) = 0; }
#line 1642 "Parser.tab.c"
    break;

  case 34: /* bool_expression: LPAREN condition RPAREN  */
#line 165 "Parser.y"
                                   { (yyval.integer) = (yyvsp[-1].integer); }
#line 1648 "Parser.tab.c"
    break;

  case 35: /* type: INT  */
#line 171 "Parser.y"
                      { (yyval.datatype) = TYPE_INT; }
#line 1654 "Parser.tab.c"
    break;

  case 36: /* type: FLOAT_TYPE  */
#line 172 "Parser.y"
                      { (yyval.datatype) = TYPE_FLOAT; }
#line 1660 "Parser.tab.c"
    break;

  case 37: /* type: STRING_TYPE  */
#line 173 "Parser.y"
                      { (yyval.datatype) = TYPE_STRING; }
#line 1666 "Parser.tab.c"
    break;

  case 38: /* type: CHAR_TYPE  */
#line 174 "Parser.y"
                      { (yyval.datatype) = TYPE_CHAR; }
#line 1672 "Parser.tab.c"
    break;

  case 39: /* assignment_stmt: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 179 "Parser.y"
    {
        if (!checkVariableDeclared((yyvsp[-3].string))) {
        } else {
            // Check const reassignment
            if (!checkConstReassignment((yyvsp[-3].string))) {
                // Error already reported
            } else {
                // Check type compatibility
                DataType lhsType = getType((yyvsp[-3].string));
                DataType rhsType = (yyvsp[-1].integer); // Simplified - in real implementation track expression types
                
                if (!update_symbol_initialized((yyvsp[-3].string))) {
                    semanticError("Failed to update symbol initialization");
                }
            }
        }
    }
#line 1694 "Parser.tab.c"
    break;

  case 40: /* assignment_stmt: error ASSIGN expression SEMICOLON  */
#line 196 "Parser.y"
                                        {
        syntaxError("Invalid left-hand side in assignment");
        yyerrok;
    }
#line 1703 "Parser.tab.c"
    break;

  case 41: /* assignment_stmt: IDENTIFIER ASSIGN error SEMICOLON  */
#line 200 "Parser.y"
                                        {
        syntaxError("Invalid expression in assignment");
        yyerrok;
    }
#line 1712 "Parser.tab.c"
    break;

  case 42: /* assign: IDENTIFIER ASSIGN expression  */
#line 207 "Parser.y"
                                  { 
        if (checkVariableDeclared((yyvsp[-2].string))) {
            if (checkConstReassignment((yyvsp[-2].string))) {
                printf("Assignment executed: %s\n", (yyvsp[-2].string));
            }
        }
        (yyval.integer) = (yyvsp[0].integer);  
    }
#line 1725 "Parser.tab.c"
    break;

  case 43: /* expression: expression PLUS T  */
#line 218 "Parser.y"
                         {
        DataType type = resolveType((yyvsp[-2].integer), (yyvsp[0].integer));
        (yyval.integer) = type;
    }
#line 1734 "Parser.tab.c"
    break;

  case 44: /* expression: expression MINUS T  */
#line 222 "Parser.y"
                          {
        DataType type = resolveType((yyvsp[-2].integer), (yyvsp[0].integer));
        (yyval.integer) = type;
    }
#line 1743 "Parser.tab.c"
    break;

  case 45: /* expression: T  */
#line 226 "Parser.y"
         { (yyval.integer) = (yyvsp[0].integer); }
#line 1749 "Parser.tab.c"
    break;

  case 46: /* T: T MULTIPLY F  */
#line 231 "Parser.y"
                  { 
        DataType type = resolveType((yyvsp[-2].integer), (yyvsp[0].integer));
        (yyval.integer) = type; 
    }
#line 1758 "Parser.tab.c"
    break;

  case 47: /* T: T DIVIDE F  */
#line 235 "Parser.y"
                  { 
        if ((yyvsp[0].integer) == 0) {
            checkDivisionByZero(0);
            (yyval.integer) = TYPE_UNKNOWN;
        } else {
            DataType type = resolveType((yyvsp[-2].integer), (yyvsp[0].integer));
            (yyval.integer) = type;
        }
    }
#line 1772 "Parser.tab.c"
    break;

  case 48: /* T: T MODULO F  */
#line 244 "Parser.y"
                  { 
        if ((yyvsp[0].integer) == 0) {
            checkDivisionByZero(0);
            (yyval.integer) = TYPE_UNKNOWN;
        } else {
            // Modulo only works with integers
            if ((yyvsp[-2].integer) != TYPE_INT || (yyvsp[0].integer) != TYPE_INT) {
                semanticError("Modulo operator requires integer operands");
            }
            (yyval.integer) = TYPE_INT;
        }
    }
#line 1789 "Parser.tab.c"
    break;

  case 49: /* T: F  */
#line 256 "Parser.y"
         { (yyval.integer) = (yyvsp[0].integer); }
#line 1795 "Parser.tab.c"
    break;

  case 50: /* F: LPAREN condition RPAREN  */
#line 260 "Parser.y"
                             { (yyval.integer) = (yyvsp[-1].integer); }
#line 1801 "Parser.tab.c"
    break;

  case 51: /* F: MINUS F  */
#line 261 "Parser.y"
               { (yyval.integer) = -(yyvsp[0].integer); }
#line 1807 "Parser.tab.c"
    break;

  case 52: /* F: IDENTIFIER  */
#line 263 "Parser.y"
    {
        if (checkVariableDeclared((yyvsp[0].string))) {
            if (checkVariableInitialized((yyvsp[0].string))) {
                update_symbol_used((yyvsp[0].string));
                (yyval.integer) = getType((yyvsp[0].string));
            } else {
                (yyval.integer) = TYPE_UNKNOWN;
            }
        } else {
            (yyval.integer) = TYPE_UNKNOWN;
        }
    }
#line 1824 "Parser.tab.c"
    break;

  case 53: /* F: IDENTIFIER LPAREN argument_list RPAREN  */
#line 276 "Parser.y"
    {
        if (checkFunctionCall((yyvsp[-3].string))) {
            update_symbol_used((yyvsp[-3].string));
            (yyval.integer) = getType((yyvsp[-3].string));
        } else {
            (yyval.integer) = TYPE_UNKNOWN;
        }
        printf("Function call: %s() executed\n", (yyvsp[-3].string));
    }
#line 1838 "Parser.tab.c"
    break;

  case 54: /* F: IDENTIFIER LPAREN RPAREN  */
#line 286 "Parser.y"
    {    
        if (checkFunctionCall((yyvsp[-2].string))) {
            update_symbol_used((yyvsp[-2].string));
            (yyval.integer) = getType((yyvsp[-2].string));
        } else {
            (yyval.integer) = TYPE_UNKNOWN;
        }
        printf("Function call: %s() with no arguments executed\n", (yyvsp[-2].string));
    }
#line 1852 "Parser.tab.c"
    break;

  case 55: /* F: FLOAT  */
#line 295 "Parser.y"
             { (yyval.integer) = TYPE_FLOAT; }
#line 1858 "Parser.tab.c"
    break;

  case 56: /* F: NUMBER  */
#line 296 "Parser.y"
              { (yyval.integer) = TYPE_INT; }
#line 1864 "Parser.tab.c"
    break;

  case 57: /* F: TRUE_COND  */
#line 297 "Parser.y"
                 { (yyval.integer) = TYPE_BOOL; }
#line 1870 "Parser.tab.c"
    break;

  case 58: /* F: FALSE_COND  */
#line 298 "Parser.y"
                  { (yyval.integer) = TYPE_BOOL; }
#line 1876 "Parser.tab.c"
    break;

  case 59: /* condition: expression EQUAL expression  */
#line 302 "Parser.y"
                                 { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1885 "Parser.tab.c"
    break;

  case 60: /* condition: expression NOT_EQUAL expression  */
#line 306 "Parser.y"
                                      { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1894 "Parser.tab.c"
    break;

  case 61: /* condition: expression LESS_THAN expression  */
#line 310 "Parser.y"
                                      { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1903 "Parser.tab.c"
    break;

  case 62: /* condition: expression GREATER_THAN expression  */
#line 314 "Parser.y"
                                         { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1912 "Parser.tab.c"
    break;

  case 63: /* condition: expression LESS_EQUAL expression  */
#line 318 "Parser.y"
                                       { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1921 "Parser.tab.c"
    break;

  case 64: /* condition: expression GREATER_EQUAL expression  */
#line 322 "Parser.y"
                                          { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1930 "Parser.tab.c"
    break;

  case 65: /* condition: expression AND expression  */
#line 326 "Parser.y"
                                { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1939 "Parser.tab.c"
    break;

  case 66: /* condition: expression OR expression  */
#line 330 "Parser.y"
                               { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1948 "Parser.tab.c"
    break;

  case 67: /* condition: NOT expression  */
#line 334 "Parser.y"
                     { 
        checkBooleanCondition(TYPE_BOOL);
        (yyval.integer) = TYPE_BOOL; 
    }
#line 1957 "Parser.tab.c"
    break;

  case 68: /* condition: expression  */
#line 338 "Parser.y"
                 { (yyval.integer) = (yyvsp[0].integer); }
#line 1963 "Parser.tab.c"
    break;

  case 69: /* if_stmt: IF LPAREN condition RPAREN if_block  */
#line 343 "Parser.y"
                                        { 
        printf("IF statement executed\n"); 
    }
#line 1971 "Parser.tab.c"
    break;

  case 70: /* if_stmt: IF LPAREN condition RPAREN if_block ELSE else_block  */
#line 346 "Parser.y"
                                                          {
        printf("IF-ELSE statement executed\n");  
    }
#line 1979 "Parser.tab.c"
    break;

  case 71: /* $@3: %empty  */
#line 360 "Parser.y"
           {enter_scope("if-block");}
#line 1985 "Parser.tab.c"
    break;

  case 72: /* $@4: %empty  */
#line 360 "Parser.y"
                                                     {exit_scope();}
#line 1991 "Parser.tab.c"
    break;

  case 74: /* $@5: %empty  */
#line 364 "Parser.y"
           {enter_scope("else-block");}
#line 1997 "Parser.tab.c"
    break;

  case 75: /* $@6: %empty  */
#line 364 "Parser.y"
                                                       {exit_scope();}
#line 2003 "Parser.tab.c"
    break;

  case 77: /* $@7: %empty  */
#line 370 "Parser.y"
    { loop_depth++; }
#line 2009 "Parser.tab.c"
    break;

  case 78: /* $@8: %empty  */
#line 371 "Parser.y"
           {enter_scope("while");}
#line 2015 "Parser.tab.c"
    break;

  case 79: /* $@9: %empty  */
#line 371 "Parser.y"
                                                  {exit_scope();}
#line 2021 "Parser.tab.c"
    break;

  case 80: /* while_stmt: WHILE LPAREN condition RPAREN $@7 LBRACE $@8 statement_list $@9 RBRACE  */
#line 372 "Parser.y"
    { 
        loop_depth--;
        printf("WHILE loop executed\n"); 
    }
#line 2030 "Parser.tab.c"
    break;

  case 81: /* $@10: %empty  */
#line 390 "Parser.y"
    { enter_scope("for-loop"); }
#line 2036 "Parser.tab.c"
    break;

  case 82: /* $@11: %empty  */
#line 392 "Parser.y"
    { loop_depth++; }
#line 2042 "Parser.tab.c"
    break;

  case 83: /* for_stmt: FOR $@10 LPAREN declaration_stmt condition SEMICOLON assign RPAREN $@11 LBRACE statement_list RBRACE  */
#line 394 "Parser.y"
    { 
        loop_depth--;
        printf("FOR loop executed\n");
        exit_scope(); 
    }
#line 2052 "Parser.tab.c"
    break;

  case 84: /* $@12: %empty  */
#line 410 "Parser.y"
    { 
        if (checkVariableDeclared((yyvsp[-1].string))) {
            if (!checkVariableInitialized((yyvsp[-1].string))) {
                // Error already reported
            } else {
                update_symbol_used((yyvsp[-1].string));
            }
        }
        switch_depth++; 
        enter_scope("switch-scope");
    }
#line 2068 "Parser.tab.c"
    break;

  case 85: /* switch_stmt: SWITCH LPAREN IDENTIFIER RPAREN $@12 LBRACE case_list switch_optional_default RBRACE  */
#line 422 "Parser.y"
    {
        switch_depth--;
        exit_scope();
        printf("SWITCH statement executed on variable '%s'\n", (yyvsp[-6].string));
        (yyval.integer) = 0; 
    }
#line 2079 "Parser.tab.c"
    break;

  case 86: /* switch_stmt: SWITCH error RPAREN LBRACE case_list RBRACE  */
#line 428 "Parser.y"
                                                  {
        syntaxError("Malformed SWITCH statement");
        switch_depth--;
        exit_scope();
        yyerrok;
    }
#line 2090 "Parser.tab.c"
    break;

  case 91: /* case_stmt: CASE expression COLON statement_list  */
#line 451 "Parser.y"
    {
        if ((yyvsp[0].integer) == 0) {
            semanticError("Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    }
#line 2101 "Parser.tab.c"
    break;

  case 92: /* default_case: DEFAULT COLON statement_list  */
#line 461 "Parser.y"
    {
        if ((yyvsp[0].integer) == 0) {
            semanticError("Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    }
#line 2112 "Parser.tab.c"
    break;

  case 93: /* function_decl: function_name LPAREN parameter_list RPAREN LBRACE statement_list RBRACE  */
#line 471 "Parser.y"
    { 
        printf("Function declaration executed\n");
        clearCurrentFunction();
        exit_scope(); 
    }
#line 2122 "Parser.tab.c"
    break;

  case 94: /* function_decl: function_name LPAREN RPAREN LBRACE statement_list RBRACE  */
#line 477 "Parser.y"
    { 
        printf("Function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope(); 
    }
#line 2132 "Parser.tab.c"
    break;

  case 95: /* function_decl: function_name_void LPAREN parameter_list RPAREN LBRACE statement_list RBRACE  */
#line 483 "Parser.y"
    { 
        printf("Void function declaration executed\n"); 
        clearCurrentFunction();
        exit_scope();
    }
#line 2142 "Parser.tab.c"
    break;

  case 96: /* function_decl: function_name_void LPAREN RPAREN LBRACE statement_list RBRACE  */
#line 489 "Parser.y"
    { 
        printf("Void function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope();
    }
#line 2152 "Parser.tab.c"
    break;

  case 97: /* function_name: type IDENTIFIER  */
#line 502 "Parser.y"
    {
        if (insert_symbol((yyvsp[0].string), (yyvsp[-1].datatype), FUNCTION, 0)) {
            setCurrentFunction((yyvsp[0].string), (yyvsp[-1].datatype));
            enter_scope((yyvsp[0].string));
        } else {
            semanticError("Function declaration failed");
        }
        (yyval.string) = (yyvsp[0].string);
    }
#line 2166 "Parser.tab.c"
    break;

  case 98: /* function_name_void: VOID_TYPE IDENTIFIER  */
#line 514 "Parser.y"
    {
        if (insert_symbol((yyvsp[0].string), TYPE_VOID, FUNCTION, 0)) {
            setCurrentFunction((yyvsp[0].string), TYPE_VOID);
            enter_scope((yyvsp[0].string));
        } else {
            semanticError("Void function declaration failed");
        }
        (yyval.string) = (yyvsp[0].string);
    }
#line 2180 "Parser.tab.c"
    break;

  case 101: /* parameter: type IDENTIFIER  */
#line 535 "Parser.y"
    {
        if (!insert_symbol((yyvsp[0].string), (yyvsp[-1].datatype), PARAMETER, 0)) {
            semanticError("Parameter declaration failed");
        }
    }
#line 2190 "Parser.tab.c"
    break;

  case 102: /* return_stmt: RETURN expression SEMICOLON  */
#line 544 "Parser.y"
    {
        if (current_function_name) {
            checkReturn(current_function_name, (yyvsp[-1].integer), 1);
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN statement executed\n");
    }
#line 2203 "Parser.tab.c"
    break;

  case 103: /* return_stmt: RETURN SEMICOLON  */
#line 553 "Parser.y"
    {
        if (current_function_name) {
            checkReturn(current_function_name, TYPE_VOID, 0);
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN (void) statement executed\n");
    }
#line 2216 "Parser.tab.c"
    break;

  case 104: /* $@13: %empty  */
#line 566 "Parser.y"
    { loop_depth++; }
#line 2222 "Parser.tab.c"
    break;

  case 105: /* $@14: %empty  */
#line 567 "Parser.y"
           {enter_scope("do-while");}
#line 2228 "Parser.tab.c"
    break;

  case 106: /* $@15: %empty  */
#line 569 "Parser.y"
    {exit_scope();}
#line 2234 "Parser.tab.c"
    break;

  case 107: /* $@16: %empty  */
#line 570 "Parser.y"
    { loop_depth--; }
#line 2240 "Parser.tab.c"
    break;

  case 108: /* do_while_stmt: DO $@13 LBRACE $@14 statement_list $@15 RBRACE $@16 WHILE LPAREN condition RPAREN SEMICOLON  */
#line 572 "Parser.y"
    {
        printf("DO-WHILE loop executed\n");
    }
#line 2248 "Parser.tab.c"
    break;


#line 2252 "Parser.tab.c"

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

#line 586 "Parser.y"


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
