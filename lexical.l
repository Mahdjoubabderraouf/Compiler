%{
#include <stdio.h>
#include <stdlib.h>
#include "syntaxical_file.tab.h"
extern nb_ligne;
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
"FALSE"             {addMotCle("FALSE" , "mcFALSE" ,1); col = col + yyleng; return mcFALSE; }
"INTEGER"           { afficher(); col = col + yyleng; return mcINTEGER; }
"REAL"              { col = col + yyleng; return mcREAL; }
"CHARACTER"         { col = col + yyleng; return mcCHARACTER; }
"LOGICAL"           { col = col + yyleng; return mcLOGICAL; }
"READ"              { col = col + yyleng; return mcREAD; }
"WRITE"             { col = col + yyleng; return mcWRITE; }
"DIMENSION"         { col = col + yyleng; return mcDIMENSION; }
"PROGRAM"           { col = col + yyleng; return mcPROGRAM; }
"END"               { col = col + yyleng; return mcEND; }
"ROUTINE"           { col = col + yyleng; return mcROUTINE; }
"ENDR"              { col = col + yyleng; return mcENDR; }
"CALL"              { col = col + yyleng; return mcCALL; }
"IF"                { col = col + yyleng; return mcIF; }
"THEN"              { col = col + yyleng; return mcTHEN; }
"ELSE"              { col = col + yyleng; return mcELSE; }
"ENDIF"             { col = col + yyleng; return mcENDIF; }
"DOWHILE"           { col = col + yyleng; return mcDOWHILE; }
"ENDO"              { col = col + yyleng; return mcENDO; }
"PartageMemoire"    { col = col + yyleng; return PartageMemoire; }
"OR"                { col = col + yyleng; return OR; }
"AND"               { col = col + yyleng; return AND; }
"GT"                { col = col + yyleng; return GT; }
"EQ"                { col = col + yyleng; return EQ; }
"GE"                { col = col + yyleng; return GE; }
"NE"                { col = col + yyleng; return NE; }
"LE"                { col = col + yyleng; return LE; }
"LT"                { col = col + yyleng; return LT; }
"="                 { col = col + yyleng; return eq; }
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

[ \t]               {//col = col + strlen(yytext);}

\n {
  col =1; nb_ligne++;
}

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
. {printf("erreur lexical a la ligne %d  la col %d entite %s \n",nb_ligne,col, yytext);}
%%
