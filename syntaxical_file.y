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
%token paraO paraF DIMENSIONTAB DIMENSIONMAT identificateur INTEGER INTEGERPOSITIF INTEGERNEGATIF REAL caracter chaine commantaire REALNEGATIF REALPOSITIF

%left virgule
%left plus mpins
%left etoile division
%nonassoc EQ NE LT LE GT GE
%left AND OR
%left paraO paraF
%right UNARY_OPERATOR
%%

Fonction : type mcROUTINE identificateur paraO Liste DECLARATIONS INSTR identificateur eq VALEURS_RETURN mcENDR Fonction
         | mcPROGRAM identificateur DECLARATIONS INSTR mcEND { printf("Programme syntaxiquement correct.\n"); YYACCEPT; }
         ;


DECLARATIONS : type identificateur DECLARATIONS1;

DECLARATIONS1 : point_virgule DECLARATIONS
			  | point_virgule
              | virgule identificateur DECLARATIONS1
              | TABLEAU
              | MATRICE DECLARATIONS1
			  | OPERS VALEURS DECLARATIONS1	 
			  ;
			  
OPERS : eq | OPER;

VALEURS : REAL | INTEGER | caracter | chaine;
 
VALEURS_RETURN : REAL | INTEGER | identificateur;
 
TABLEAU : mcDIMENSION paraO INTEGER paraF DECLARATIONS1;

MATRICE : mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS1;

type : mcINTEGER | mcLOGICAL | mcREAL | mcCHARACTER;

INSTR : INSTR Affectation
      | INSTR ES
      | INSTR Condition
      | INSTR Boucle
      | INSTR Appel
      | INSTR Equivalence
      | 
      ;

Affectation : identificateur eq EXPR point_virgule;

EXPR : CHAINE_STRING
     | MATH_VAR
     | APPEL_FONC
     | LOGIQUE point_virgule
     ;

APPEL_FONC : mcCALL identificateur paraO Liste paraF point_virgule;

MATH_VAR : identificateur MATH_VAR1

         | INTEGER  MATH_VAR1
         | INTEGERPOSITIF  MATH_VAR1
         | INTEGERNEGATIF  MATH_VAR1

         | REAL MATH_VAR1
         | REALPOSITIF MATH_VAR1
         | REALNEGATIF MATH_VAR1
         | paraO MATH_VAR paraF
         ;

MATH_VAR1 : OPER MATH_VAR
          | INTEGERNEGATIF 
          | INTEGERPOSITIF
          | REALNEGATIF
          | REALPOSITIF
          | /*vide*/
          ;

CHAINE_STRING : IDFI_CHAR CHAINE_STRING1;

CHAINE_STRING1 : OPER IDFI_CHAR CHAINE_STRING1
               | point_virgule
               ;

IDFI_CHAR : chaine
          | caracter
          ;

LOGIQUE : mcTRUE
        | mcFALSE
        ;

ES : mcREAD paraO identificateur paraF point_virgule
   | mcWRITE paraO chaine ES_WRITE_OPTIONAL paraF point_virgule
   ;

ES_WRITE_OPTIONAL :  virgule identificateur | virgule identificateur chaine | ;


Condition : mcIF paraO EXPR_CONDI paraF mcTHEN INSTR mcENDIF;

Boucle : mcDOWHILE paraO EXPR_CONDI paraF INSTR mcENDO;

Appel : identificateur mcROUTINE paraO Liste paraF point_virgule;

Equivalence : PartageMemoire paraO Liste paraF virgule paraO Liste paraF point_virgule;

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

Liste : identificateur paraF
      | Liste virgule identificateur
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
    
}

int main() {
    yyparse();
    return 0;
}
