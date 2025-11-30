
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     FOR = 266,
     REPEAT = 267,
     UNTIL = 268,
     SWITCH = 269,
     CASE = 270,
     DEFAULT = 271,
     BREAK = 272,
     FUNCTION = 273,
     RETURN = 274,
     PLUS = 275,
     MINUS = 276,
     MULTIPLY = 277,
     DIVIDE = 278,
     MODULO = 279,
     ASSIGN = 280,
     EQUAL = 281,
     NOT_EQUAL = 282,
     LESS_THAN = 283,
     GREATER_THAN = 284,
     LESS_EQUAL = 285,
     GREATER_EQUAL = 286,
     AND = 287,
     OR = 288,
     NOT = 289,
     LPAREN = 290,
     RPAREN = 291,
     LBRACE = 292,
     RBRACE = 293,
     SEMICOLON = 294,
     COMMA = 295,
     COLON = 296,
     IDENTIFIER = 297,
     NUMBER = 298,
     FLOAT = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 10 "Parser.y"

    int integer;      
    float floatval;     
    char *string;     
    char charval;     



/* Line 1676 of yacc.c  */
#line 105 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


