%{
#include <string>
#include <sstream>

using namespace std;

%}

ESPACO [ \t]
DIGITO [0-9]
LETRA [A-Za-z_]


DELIM {ESPACO}+
NUM {DIGITO}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETRA}|{NUM})\'
ID {LETRA}({LETRA}|{NUM})*

%%

"\n"		{
				nlinha++;
			}

"="			{
				yylval.label = yytext;
				return TK_ATR;
			}

"const"		{
				yylval.traducao = yytext;
				yylval.label = yytext;

				return TK_CONST;
			}

"begin"		{
				yylval.traducao = "{\n";
				yylval.label = yytext;

				return TK_BEGIN;
			}

"end"		{
				yylval.traducao = "\n}\n";
				yylval.label = yytext;

				return TK_END;
			}

{DELIM} 	{}

"main"		{return TK_MAIN;}

"procedure"		{return TK_PROCEDURE;}

"function"		{return TK_FUNCTION;}


"int"		{
				yylval.label = yytext;
				return TK_TIPO_INT;
			}

"float"		{
				yylval.label = yytext;
				return TK_TIPO_FLOAT;
			}

"char"		{
				yylval.label = yytext;
				return TK_TIPO_CHAR;
			}

"boolean"	{
				yylval.traducao = "int";
				yylval.label = yytext;
				return TK_TIPO_BOOL;
			}

[(){}[\];,]	{ return *yytext; }

"++"		{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_PLUSPLUS;
			}

"+"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_SOMA;
			}

"-"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_SUB;
			}

"*"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_MUL;
			}

"/"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_DIV;
			}

"!"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_NOT;
			}

"<"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_MENOR;
			}

">"			{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_MAIOR;
			}

"<="		{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_MENOR_IGUAL;
			}

">="		{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_MAIOR_IGUAL;
			}

"=="		{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_IGUAL;
			}

"!="		{
				yylval.traducao = yytext;
				yylval.label = yytext;
				return TK_DIFERENTE;
			}

{NUM}		{	
				yylval.traducao = yytext;
				yylval.label = yytext;
				yylval.tipo = "int";
				return TK_NUM;
			}

{REAL}		{	
				yylval.traducao = yytext;
				yylval.label = yytext;
				yylval.tipo = "float";
				return TK_REAL;
			}

"true"		{	
				yylval.traducao = "1";
				yylval.label = yytext;
				yylval.tipo = "boolean";
				return TK_LOGICO;
			}

"false"		{	
				yylval.traducao = "0";
				yylval.label = yytext;
				yylval.tipo = "boolean";
				return TK_LOGICO;
			}

{ID}		{ yylval.label = yytext; return TK_ID; }
.			{ *yytext; }

%%
