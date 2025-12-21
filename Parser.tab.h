/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "Parser.y"

#include "symbol_table.h"
#include "semantic_checks.h"

#line 54 "Parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT_TYPE = 259,              /* FLOAT_TYPE  */
    STRING_TYPE = 260,             /* STRING_TYPE  */
    CHAR_TYPE = 261,               /* CHAR_TYPE  */
    CONST = 262,                   /* CONST  */
    BOOL_TYPE = 263,               /* BOOL_TYPE  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    WHILE = 266,                   /* WHILE  */
    FOR = 267,                     /* FOR  */
    DO = 268,                      /* DO  */
    SWITCH = 269,                  /* SWITCH  */
    CASE = 270,                    /* CASE  */
    DEFAULT = 271,                 /* DEFAULT  */
    BREAK = 272,                   /* BREAK  */
    RETURN = 273,                  /* RETURN  */
    VOID_TYPE = 274,               /* VOID_TYPE  */
    TRUE_COND = 275,               /* TRUE_COND  */
    FALSE_COND = 276,              /* FALSE_COND  */
    PLUS = 277,                    /* PLUS  */
    MINUS = 278,                   /* MINUS  */
    MULTIPLY = 279,                /* MULTIPLY  */
    DIVIDE = 280,                  /* DIVIDE  */
    MODULO = 281,                  /* MODULO  */
    ASSIGN = 282,                  /* ASSIGN  */
    EQUAL = 283,                   /* EQUAL  */
    NOT_EQUAL = 284,               /* NOT_EQUAL  */
    LESS_THAN = 285,               /* LESS_THAN  */
    GREATER_THAN = 286,            /* GREATER_THAN  */
    LESS_EQUAL = 287,              /* LESS_EQUAL  */
    GREATER_EQUAL = 288,           /* GREATER_EQUAL  */
    AND = 289,                     /* AND  */
    OR = 290,                      /* OR  */
    NOT = 291,                     /* NOT  */
    LPAREN = 292,                  /* LPAREN  */
    RPAREN = 293,                  /* RPAREN  */
    LBRACE = 294,                  /* LBRACE  */
    RBRACE = 295,                  /* RBRACE  */
    SEMICOLON = 296,               /* SEMICOLON  */
    COMMA = 297,                   /* COMMA  */
    COLON = 298,                   /* COLON  */
    IDENTIFIER = 299,              /* IDENTIFIER  */
    NUMBER = 300,                  /* NUMBER  */
    FLOAT = 301                    /* FLOAT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "Parser.y"

    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   

#line 125 "Parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
