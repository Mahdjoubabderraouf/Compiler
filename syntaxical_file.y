%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex(void);
extern char* yytext;
int nbligne = 1;
int col=1;	
void yyerror(const char *s);
%}
%start Fonction

%token mcTRUE mcFALSE mcINTEGER mcREAL mcCHARACTER mcLOGICAL mcREAD mcWRITE mcDIMENSION mcPROGRAM mcEND mcROUTINE mcENDR mcCALL mcIF mcTHEN mcELSE mcENDIF mcDOWHILE mcENDO PartageMemoire
%token OR AND GT EQ GE NE LE LT eq point_virgule point plus mpins division or aro etoile virgule gui
%token paraO paraF identificateur INTEGER INTEGERPOSITIF INTEGERNEGATIF REAL caracter chaine commantaire REALNEGATIF REALPOSITIF

%left virgule
%left plus mpins
%left etoile division
%nonassoc EQ NE LT LE GT GE
%left AND OR
%left paraO paraF
%right UNARY_OPERATOR
%%
Fonction : type mcROUTINE identificateur paraO Liste paraF DECLARATIONS INSTR1 identificateur eq EXPR mcENDR Fonction
         | mcPROGRAM identificateur DECLARATIONS INSTR1 mcEND {  printf("Programme syntaxiquement correct.\n"); YYACCEPT; }
         ;

DECLARATIONS : type identificateur caractere1 DECLARATIONS1;

caractere1: etoile INTEGER
          | /*epsilon*/
          ;

DECLARATIONS1 : point_virgule DECLARATIONS
			  | point_virgule
              | virgule identificateur caractere1 DECLARATIONS1
              | mcDIMENSION paraO INTEGER paraF DECLARATIONS2
              | mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS2
			  | eq VALEURS DECLARATIONS1
			  ;/* TABLEAU tab (50),X = 847,ahmed (64); */

DECLARATIONS2 : point_virgule DECLARATIONS
              | point_virgule
              | virgule identificateur caractere1 DECLARATIONS1
              | mcDIMENSION paraO INTEGER paraF DECLARATIONS1
              | mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS1
              ;

VALEURS : REAL | INTEGER | caracter | chaine;

type : mcINTEGER | mcLOGICAL | mcREAL | mcCHARACTER;

INSTR1: INSTR1 INSTR point_virgule
      | ;

INSTR : Affectation
      | ES
      | Condition
      | Boucle
      | Appel
      | Equivalence
      | /*vide*/
      ;

Affectation : identificateur eq EXPR;


EXPR : CHAINE_STRING
     | MATH_VAR
     | APPEL_FONC
     | mcFALSE
     | mcTRUE
     ;

APPEL_FONC : mcCALL identificateur paraO Liste paraF ;

MATH_VAR : identificateur MATH_VAR1
         | identificateur paraO INTEGER paraF MATH_VAR1
         | identificateur paraO INTEGER virgule INTEGER paraF MATH_VAR1
         | INTEGER  MATH_VAR1
         | INTEGERPOSITIF  MATH_VAR1
         | INTEGERNEGATIF  MATH_VAR1

         | REAL MATH_VAR1
         | REALPOSITIF MATH_VAR1
         | REALNEGATIF MATH_VAR1
         | paraO MATH_VAR paraF MATH_VAR1
         ;

          /* paraO int OPER int paraF */

MATH_VAR1 : OPER MATH_VAR
          | INTEGERNEGATIF OPER MATH_VAR
          | INTEGERPOSITIF OPER MATH_VAR
          | REALNEGATIF OPER MATH_VAR
          | REALPOSITIF OPER MATH_VAR
          | INTEGERNEGATIF
          | INTEGERPOSITIF
          | REALNEGATIF
          | REALPOSITIF
          | /*vide*/
          ;

CHAINE_STRING : IDFI_CHAR CHAINE_STRING1;

CHAINE_STRING1 : plus IDFI_CHAR CHAINE_STRING1
               | mpins IDFI_CHAR CHAINE_STRING1
               | /*vide*/
               ;

IDFI_CHAR : chaine
          | caracter
          ;

ES : mcREAD paraO identificateur paraF 
   | mcWRITE paraO chaine paraF 
   | mcWRITE paraO chaine ES_WRITE_OPTIONAL paraF 
   ;

ES_WRITE_OPTIONAL :  virgule identificateur | virgule identificateur chaine ;

Appel : identificateur paraO Liste paraF ;

Equivalence : PartageMemoire paraO Liste paraF virgule paraO Liste paraF ;

Liste : identificateur
      | Liste virgule identificateur
      | Liste virgule identificateur paraO INTEGER paraF
      | Liste virgule identificateur paraO INTEGER virgule INTEGER paraF
      | identificateur paraO INTEGER virgule INTEGER paraF
      | identificateur paraO INTEGER paraF
      ;


Condition : mcIF paraO EXPR_CONDI paraF mcTHEN INSTR mcENDIF;

Boucle : mcDOWHILE paraO EXPR_CONDI paraF INSTR mcENDO;


EXPR_CONDI : EXPR_CONDI_TYPE EXPR_CONDI_SUITE;

EXPR_CONDI_TYPE : identificateur
               | mcTRUE
               | mcFALSE
               | INTEGER
               | REAL
               | paraO EXPR_CONDI paraF
               ;

EXPR_CONDI_SUITE : EXPR_CONDI_OP EXPR_CONDI_TYPE EXPR_CONDI_SUITE
                | point_virgule
                | ;

EXPR_CONDI_OP : OR
              | AND
              | GT
              | GE
              | EQ
              | NE
              | LE
              | LT
              | paraO EXPR_CONDI paraF
              | OPER
              ;

OPER : plus
     | mpins
     | etoile
     | division
     ;

%%

// Fonction main

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d, column %d: %s\n", nbligne, col, s);
    yyparse ();
}

int main() {
    yyparse();
    return 0;


}
