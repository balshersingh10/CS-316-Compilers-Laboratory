%{
%}
OPERATOR ":="|"<="|">="|"!="|"("|")"|"+"|"-"|"*"|"/"|"="|"<"|">"|";"|","
KEYWORD "PROGRAM"|"BEGIN"|"END"|"FUNCTION"|"READ"|"WRITE"|"IF"|"ELSE"|"FI"|"FOR"|"ROF"|"RETURN"|"INT"|"VOID"|"STRING"|"FLOAT"
COMMENT #.*\n
IDENTIFIER [a-zA-Z][_a-zA-Z0-9]*
INTLITERAL [0-9]*
STRINGLITERAL \"(\\.|[^"\\])*\"
FLOATLITERAL [0-9]*\.[0-9]+
SPACE [ \t\n]
UNEXPECTED .
%%
{SPACE} {}
{COMMENT} {}
{OPERATOR} {
	printf("Token Type: OPERATOR\nValue: %s\n",yytext);
}
{KEYWORD} {
	printf("Token Type: KEYWORD\nValue: %s\n",yytext);
}
{IDENTIFIER} {
	printf("Token Type: IDENTIFIER\nValue: %s\n",yytext);
}
{INTLITERAL} {
	printf("Token Type: INTLITERAL\nValue: %s\n",yytext);
}
{FLOATLITERAL} {
	printf("Token Type: FLOATLITERAL\nValue: %s\n",yytext);
}
{STRINGLITERAL} {
	printf("Token Type: STRINGLITERAL\nValue: %s\n",yytext);
}
%%
int yywrap(){
  	return 1;
}

int main(int argc, char* argv[]){
	if(argc > 1){
		FILE *filepointer = fopen(argv[1], "r");
		if(filepointer)
			yyin = filepointer;
	}
    yylex();
    return 1;
}