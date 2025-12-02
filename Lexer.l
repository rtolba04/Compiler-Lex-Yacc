%{
#include "Parser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int line_num = 1;
%}

/* Regular Definitions */
DIGIT       [0-9]
LETTER      [a-zA-Z_]
ID          {LETTER}({LETTER}|{DIGIT})* 
/* Identifiers can only start with letters or underscore but may contain digits afterwards*/
INTEGER     {DIGIT}+
FLOAT       {DIGIT}+\.{DIGIT}+

WHITESPACE  [ \t]+
NEWLINE     \n

%%


"int"           { return INT; }
"float"         { return FLOAT_TYPE; }
"char"          { return CHAR_TYPE; }
"string"        { return STRING_TYPE; }
"const"         { return CONST; }
"if"            { return IF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
"for"           { return FOR; }
"switch"        { return SWITCH; }
"case"          { return CASE; }
"default"       { return DEFAULT; }
"break"         { return BREAK; }
"return"        { return RETURN; }
"do"            { return DO; }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULTIPLY; }
"/"             { return DIVIDE; }
"%"             { return MODULO; }
"="             { return ASSIGN; }
"=="            { return EQUAL; }
"!="            { return NOT_EQUAL; }
"<"             { return LESS_THAN; }
">"             { return GREATER_THAN; }
"<="            { return LESS_EQUAL; }
">="            { return GREATER_EQUAL; }
"&&"            { return AND; }
"||"            { return OR; }
"!"             { return NOT; }

"("             { return LPAREN; }
")"             { return RPAREN; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
";"             { return SEMICOLON; }
","             { return COMMA; }
":"             { return COLON; }



{ID}            { yylval.string = strdup(yytext); return IDENTIFIER; }
{INTEGER}       { yylval.integer = atoi(yytext); return NUMBER; }
{FLOAT}         { yylval.floatval = atof(yytext); return FLOAT; }



{WHITESPACE}    { /* skip */ }
{NEWLINE}       { line_num++; }




%%

int yywrap() {
    return 1;
}