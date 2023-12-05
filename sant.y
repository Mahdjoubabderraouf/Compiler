%{
#include<stdio.h>
#include<stdlib.h>
#include "sant.tab.h"
%}
%start S
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
%token mcIF
%token mcTHEN
%token mcELSE
%token mcENDIF
%token mcDOWHILE
%token mcENDO
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

S:Programme;
Programme : desFonctions Programme_pr;
desFonctions : Fonction desFonctions;

Fonction : type mcROUTINE identificateur paraO Liste  DECLARATIONS INSTR identificateur eq INTEGER mcENDR;
Programme_pr : mcPROGRAM DECLARATIONS INSTR mcEND;


Liste : identificateur  Liste1;
Liste1 : virgule identificateur Liste1 | paraF |;


DECLARATIONS : type identificateur DECLARATIONS1;
DECLARATIONS1 : point_virgule | virgule identificateur DECLARATIONS1 | TABLEAU | MATRICE;
TABLEAU : DIMENSIONTAB | DIMENSIONTAB virgule identificateur DECLARATIONS1;
MATRICE : DIMENSIONMAT | DIMENSIONMAT virgule identificateur DECLARATIONS1;


INSTR : Affectation | ES | Condition | Boucle | Appel | Equivalence;


Affectation : identificateur eq EXPR;

EXPR : CHAINE_STRING | MATH_VAR | APPEL_FONC | LOGIQUE point_virgule;

MATH : INTEGER MATH1 | REAL MATH1;
MATH1 : OPER REAL MATH1 | OPER INTEGER MATH1 | point_virgule;
OPER : plus | mpins | etoile | division;


APPEL_FONC : mcCALL identificateur paraO Liste point_virgule;

MATH_VAR : IDFI MATH_VAR1;
IDFI : identificateur | INTEGER | REAL | identificateur DIMENSIONMAT | identificateur DIMENSIONTAB;
MATH_VAR1 : OPER IDFI MATH_VAR1 | point_virgule ;

CHAINE_STRING : IDFI_CHAR CHAINE_STRING1;
CHAINE_STRING1 : OPER IDFI_CHAR CHAINE_STRING1 | point_virgule;
IDFI_CHAR : chaine | caracter;

LOGIQUE : LOGICAL_WORD_TRUE | LOGICAL_WORD_FALSE;



ES : mcREAD paraO identificateur paraF point_virgule | mcWRITE paraO chaine virgule Liste virgule chaine paraF point_virgule;


Condition : mcIF paraO EXPR_CONDI paraF mcTHEN Condition_INSTR Condition_ELSE;
Condition_INSTR : INSTR point_virgule Condition_INSTR | INSTR point_virgule;
Condition_ELSE : mcELSE Condition_INSTR mcENDIF | mcENDIF;


EXPR_CONDI : EXPR_CONDI_TYPE EXPR_CONDI_SUITE;
EXPR_CONDI_TYPE : identificateur | LOGICAL_WORD_TRUE | LOGICAL_WORD_FALSE | INTEGER | REAL | paraO EXPR_CONDI paraF;
EXPR_CONDI_SUITE : EXPR_CONDI_OP EXPR_CONDI_TYPE EXPR_CONDI_SUITE;
EXPR_CONDI_OP : OR | AND | GT | GE | EQ | NE | LE | LT | paraO EXPR_CONDI paraF | OPER;


Boucle : mcDOWHILE paraO EXPR_CONDI paraF Boucle_INSTR mcENDO;
Boucle_INSTR : INSTR point_virgule Boucle_INSTR | INSTR point_virgule;


Appel : identificateur APPEL_FONC;

Equivalence : PartageMemoire paraO Liste paraF virgule paraO Liste paraF point_virgule;

type : mcINTEGER | mcLOGICAL | mcREAL | mcCHARACTER;
%%

main()
{
yyparse();
}
yywrap()
{}
