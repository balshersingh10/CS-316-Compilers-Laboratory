/*Acknowledgements: https://github.com/aswanthpp/Compiler-Design*/
%{
	#include <stdio.h>
	#include <unistd.h>
	#include <stdlib.h>
	#include <string.h>
	#include "microParser.h"
%}

OPERATOR [:]|[+]|[-]|[*]|[/]|[=]|[!]|[<]|[>]|[(]|[)]|[,]|[;]
COMMENT #.*\n
IDENTIFIER [a-zA-Z][_a-zA-Z0-9]*
INTLITERAL [0-9]*
STRINGLITERAL \"(\\.|[^"\\])*\"
FLOATLITERAL [0-9]*\.[0-9]+
SPACE [ \t\n]
UNEXPECTED .

%%

{COMMENT} {}

{SPACE} {}

{INTLITERAL} {
	return INTLITERAL;
}

{FLOATLITERAL} {
	return FLOATLITERAL;
}

BEGIN  {
	return _BEGIN;
}

PROGRAM  {
	return PROGRAM;
}

END  {
	return END;
}

FUNCTION  {
	return FUNCTION;
}

READ  {
	return READ;
}

WRITE  {
	return WRITE;
}

IF  {
	return IF;
}

ELSE  {
	return ELSE;
}

FI  {
	return FI;
}

FOR  {
	return FOR;
}

ROF  {
	return ROF;
}

RETURN  {
	return RETURN;
}

INT  {
	yylval.v = strdup(yytext);
	return INT;
}

VOID  {
	return VOID;
}

STRING  {
	return STRING;
}

FLOAT  {
	yylval.v = strdup(yytext);
	return FLOAT;
}

{STRINGLITERAL} {
	yylval.s = strdup(yytext);
	return STRINGLITERAL;
}

{IDENTIFIER} {
	yylval.s = strdup(yytext);
	return IDENTIFIER;
}

{OPERATOR} {
	return *yytext;
}

%%

int yywrap()
{
  	return 1;
}
