%{
#include <stdio.h>
#include <stdlib.h>
#include "syntaxical_file.tab.h"
extern nbligne;
extern col;
#include "symbolsTable.h"
extern YYSTYPE yylval;
%}
lettre         [a-zA-Z]
chiffre        [0-9]
NATUREL        {chiffre}+
INTEGERPOSITIF (\+)[ ]*{NATUREL}
INTEGERNEGATIF (\-)[ ]*{NATUREL}
INTEGER        {NATUREL}
DIMENSIONTAB   DIMENSION[\(]{NATUREL}[\)]
DIMENSIONMAT   DIMENSION[\(]{NATUREL}[\,]{NATUREL}[\)]
REALNEGATIF    \-{INTEGER}\.{NATUREL}
REALPOSITIF    \+{INTEGER}\.{NATUREL}
REAL           {INTEGER}\.{NATUREL}
identificateur {lettre}({lettre}|{chiffre}|\_){0,9}
caracter \'.\'
chaine 	\".+\"
commantaire %.*;
%%
"FALSE"             { addMotCle(yytext, "mcFALSE" ,1); col = col + yyleng; return mcFALSE; }
"INTEGER"           { addMotCle(yytext, "mcINTEGER",1) col = col + yyleng; return mcINTEGER; }
"REAL"              { addMotCle(yytext, "mcREAL", 1); col = col + yyleng; return mcREAL; }
"CHARACTER"         { addMotCle(yytext, "mcCHARACTER", 1); col = col + yyleng; return mcCHARACTER; }
"LOGICAL"           { addMotCle(yytext, "mcLOGICAL", 1); col = col + yyleng; return mcLOGICAL; }
"READ"              { addMotCle(yytext, "mcREAD", 1); col = col + yyleng; return mcREAD; }
"WRITE"             { addMotCle(yytext, "mcWRITE", 1); col = col + yyleng; return mcWRITE; }
"DIMENSION"         { addMotCle(yytext, "mcDIMENSION", 1); col = col + yyleng; return mcDIMENSION; }
"PROGRAM"           { addMotCle(yytext, "mcPROGRAM", 1); col = col + yyleng; return mcPROGRAM; }
"END"               { addMotCle(yytext, "mcEND", 1); col = col + yyleng; return mcEND; }
"ROUTINE"           { addMotCle(yytext, "mcROUTINE", 1); col = col + yyleng; return mcROUTINE; }
"ENDR"              { addMotCle(yytext, "mcENDR", 1); col = col + yyleng; return mcENDR; }
"CALL"              { addMotCle(yytext, "mcCALL", 1); col = col + yyleng; return mcCALL; }
"IF"                { addMotCle(yytext, "mcIF", 1); col = col + yyleng; return mcIF; }
"THEN"              { addMotCle(yytext, "mcTHEN", 1); col = col + yyleng; return mcTHEN; }
"ELSE"              { addMotCle(yytext, "mcELSE", 1); col = col + yyleng; return mcELSE; }
"ENDIF"             { addMotCle(yytext, "mcENDIF", 1); col = col + yyleng; return mcENDIF; }
"DOWHILE"           { addMotCle(yytext, "mcDOWHILE", 1); col = col + yyleng; return mcDOWHILE; }
"ENDO"              { addMotCle(yytext, "mcENDO", 1); col = col + yyleng; return mcENDO; }
"PartageMemoire"    { addMotCle(yytext, "PartageMemoire", 1); col = col + yyleng; return PartageMemoire; }
"OR"                { addMotCle(yytext, "OR", 1); col = col + yyleng; return OR; }
"AND"               { addMotCle(yytext, "AND", 1); col = col + yyleng; return AND; }
"GT"                { addMotCle(yytext, "GT", 1); col = col + yyleng; return GT; }
"EQ"                { addMotCle(yytext, "EQ", 1); col = col + yyleng; return EQ; }
"GE"                { addMotCle(yytext, "GE", 1); col = col + yyleng; return GE; }
"NE"                { addMotCle(yytext, "NE", 1); col = col + yyleng; return NE; }
"LE"                { addMotCle(yytext, "LE", 1); col = col + yyleng; return LE; }
"LT"                { addMotCle(yytext, "LT", 1); col = col + yyleng; return LT; }
"="                 { addSept(yytext, "eq", 1);col = col + yyleng; return eq; }
";"                 { col = col + yyleng; return point_virgule; }
"+"                 { col = col + yyleng; return plus; }
"-"                 { col = col + yyleng; return mpins; }
"/"                 { col = col + yyleng; return division; }
"|"                 { col = col + yyleng; return or ; }
"@"                 { col = col + yyleng; return aro; }
"*"                 { col = col + yyleng; return etoile; }
","                 { col = col + yyleng; return virgule; }
"("                 { col = col + yyleng; return paraO; }
")"                 { col = col + yyleng; return paraF; }
[ \t]               {col = col + strlen(yytext);}
\n {col =1; nbligne++;}

{DIMENSIONTAB}   { col = col + yyleng; return DIMENSIONTAB; }
{DIMENSIONMAT}   { col = col + yyleng; return DIMENSIONMAT; }
{identificateur} { col = col + yyleng; return identificateur; } 
{INTEGER}        { col = col + yyleng; return INTEGER; }
{INTEGERPOSITIF} { col = col + yyleng; return INTEGERPOSITIF; }
{INTEGERNEGATIF} { col = col + yyleng; return INTEGERNEGATIF; }
{REAL}           { col = col + yyleng; return REAL; }
{caracter}       { col = col + yyleng; return caracter; }
{chaine}         { col = col + yyleng; return chaine; }
{commantaire}    { /* Ignore les commentaires */ }
{REALNEGATIF}    { col = col + yyleng; return REALNEGATIF; }
{REALPOSITIF}    { col = col + yyleng; return REALPOSITIF; }
. {printf("erreur lexical a la ligne %d  la col %d entite %s \n",nbligne,col, yytext);}
%%
