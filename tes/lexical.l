%{
#include <stdio.h>
#include <stdlib.h>
#include "sant.tab.h"
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
"="                 { return eq; }
";"                 { return point_virgule; }  
[ \t]

\n {
  nb_ligne++;
}
{identificateur} { return identificateur; } 

.               printf(" \"%s\" erreur lexicale a la ligne %d \n",yytext,nb_ligne);

%%

int main( )
{
  yylex();
}