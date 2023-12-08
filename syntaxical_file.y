%{
#include<stdio.h>
#include<stdlib.h>
%}
%start Fonction
%token mcTRUE
%token mcFALSE
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
%left virgule
%left plus mpins
%left etoile division
%nonassoc EQ NE LT LE GT GE
%left AND OR
%left paraO paraF
%right UNARY_OPERATOR
%%
Fonction : type mcROUTINE identificateur paraO Liste  DECLARATIONS INSTR identificateur eq INTEGER mcENDR Fonction|Programme_pr;
Programme_pr : mcPROGRAM DECLARATIONS INSTR mcEND;
DECLARATIONS : type identificateur DECLARATIONS1;
DECLARATIONS1 : point_virgule|virgule identificateur DECLARATIONS1|TABLEAU|MATRICE|;
TABLEAU : mcDIMENSION DIMENSIONTAB DIMENSION_REST;
MATRICE : mcDIMENSION DIMENSIONMAT DIMENSION_REST;
DIMENSION_REST : virgule identificateur DECLARATIONS1|;
type : mcINTEGER|mcLOGICAL|mcREAL|mcCHARACTER;
INSTR : Affectation|ES|Condition|Boucle|Appel|Equivalence;
Affectation : identificateur eq EXPR;
EXPR : CHAINE_STRING|MATH_VAR|APPEL_FONC|LOGIQUE point_virgule;
APPEL_FONC : mcCALL identificateur paraO Liste point_virgule;
MATH_VAR : IDFI MATH_VAR1;
IDFI : identificateur GRA|INTEGER|REAL;
GRA : DIMENSIONMAT|DIMENSIONTAB|;
MATH_VAR1 : OPER IDFI MATH_VAR1|point_virgule;
CHAINE_STRING : IDFI_CHAR CHAINE_STRING1;
CHAINE_STRING1 : OPER IDFI_CHAR CHAINE_STRING1|point_virgule;
IDFI_CHAR : chaine|caracter;
LOGIQUE : mcTRUE|mcFALSE;
ES : mcREAD paraO identificateur paraF point_virgule|mcWRITE paraO chaine virgule Liste virgule chaine paraF point_virgule;
Condition : mcIF paraO EXPR_CONDI paraF mcTHEN INSTR mcENDIF;
Boucle : mcDOWHILE paraO EXPR_CONDI paraF INSTR mcENDO;
Appel : identificateur mcROUTINE paraO Liste paraF point_virgule;
Equivalence : PartageMemoire paraO Liste paraF virgule paraO Liste paraF point_virgule;
EXPR_CONDI : EXPR_CONDI_TYPE EXPR_CONDI_SUITE;
EXPR_CONDI_TYPE : identificateur|mcTRUE|mcFALSE|INTEGER|REAL|paraO EXPR_CONDI paraF;
EXPR_CONDI_SUITE : EXPR_CONDI_OP EXPR_CONDI_TYPE EXPR_CONDI_SUITE|point_virgule|;
EXPR_CONDI_OP : OR|AND|GT|GE|EQ|NE|LE|LT|paraO EXPR_CONDI paraF|OPER;
Liste : identificateur 
      | Liste virgule identificateur ;
OPER : plus|mpins|etoile|division;
%%
main()
{
  yyparse();
}
yywrap()
{}
