%{
#include<stdio.h>
#include<stdlib.h>
%}
%token LOGICAL_WORD_TRUE
%token LOGICAL_WORD_FALSE
%token mcINTEGER
%token mcREAL
%token mcCHARACTER
%token mcLOGICAL
%token mcREAD
%token mcWRITE
%token mcDIMENSION
%token mcPROGRAM
%token mcEND
%token mcROUTINE
%token mcENDR
%token mcCALL
%token IF
%token THEN
%token ELSE
%token ENDIF
%token DOWHILE
%token ENDO
%token PartageMemoire
%token OR
%token AND
%token GT
%token EQ
%token GE
%token NE
%token LE
%token LT
%token Fonction_i
%token eq
%token point_virgule
%token plus
%token mpins
%token division
%token or
%token aro
%token etoile
%token virgule
%token paraO
%token paraF
%token DIMENSIONTAB
%token DIMENSIONMAT
%token identificateur
%token INTEGER
%token INTEGERPOSITIF
%token INTEGERNEGATIF
%token REAL
%token caracter
%token chaine
%token commantaire
%token REALNEGATIF
%token REALPOSITIF
%%
programe : desFonctions prog_princ;
desFonctions : fonnction desFonctions;
fonnction : fonnction_signature declarations instructions ENDR

%%
