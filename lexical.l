%{
#include <stdio.h>
#include <stdlib.h>
int nb_ligne = 0;
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
REAL		   {INTEGER}\.{NATUREL}
identificateur {lettre}({lettre}|{chiffre}|\_){0,9}
caracter \'.\'
chaine 	\".+\"
commantaire %.*;

%%
"TRUE"              { return LOGICAL_WORD_TRUE; }
"FALSE"             { return LOGICAL_WORD_FALSE; }
"INTEGER"           { return mcINTEGER; }
"REAL"              { return mcREAL; }
"CHARACTER"         { return mcCHARACTER; }
"LOGICAL"           { return mcLOGICAL; }
"READ"              { return mcREAD; }
"WRITE"             { return mcWRITE; }
"DIMENSION"         { return mcDIMENSION; }
"PROGRAM"           { return mcPROGRAM; }
"END"               { return mcEND; }
"ROUTINE"           { return mcROUTINE; }
"ENDR"              { return mcENDR; }
"CALL"              { return mcCALL; }
"IF"                { return IF; }
"THEN"              { return THEN; }
"ELSE"              { return ELSE; }
"ENDIF"             { return ENDIF; }
"DOWHILE"           { return DOWHILE; }
"ENDO"              { return ENDO; }
"PartageMemoire"    { return PartageMemoire; }
"OR"                { return OR; }
"AND"               { return AND; }
"GT"                { return GT; }
"EQ"                { return EQ; }
"GE"                { return GE; }
"NE"                { return NE; }
"LE"                { return LE; }
"LT"                { return LT; }
"Fonction_i"        { return Mot_cle_Fonction_i_reconnu; }

"="                 { return eq; }
";"                 { return point_virgule; }
"+"                 { return plus; }
"-"                 { return mpins; }
"/"                 { return division; }
"|"                 { return or ; }
"@"                 { return aro; }
"*"                 { return etoile; }
","                 { return virgule; }
"("                 { return paraO; }
")"                 { return paraF; }

[ \t]

\n {
  nb_ligne++;
}
{DIMENSIONTAB}   { return DIMENSIONTAB; }
{DIMENSIONMAT}   { return DIMENSIONMAT; }
{identificateur} { return identificateur; } 
{INTEGER}        { return INTEGER; }
{INTEGERPOSITIF} { return INTEGERPOSITIF; }
{INTEGERNEGATIF} { return INTEGERNEGATIF; }
{REAL}           { return REAL; }
{caracter}       { return caracter; }
{chaine}         { return chaine; }
{commantaire}    { /* Ignore les commentaires */ }
{REALNEGATIF}    { return REALNEGATIF; }
{REALPOSITIF}    { return REALPOSITIF; }
.               printf(" \"%s\" erreur lexicale a la ligne %d \n",yytext,nb_ligne);

%%

int main( )
{
  yylex();
}