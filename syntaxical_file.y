%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern int yylex(void);
extern char* yytext;
int nbligne = 1;
int col = 1;

void yyerror(const char *s);

void addType(char *name, char *type);
void addVarPlace(char *name, char *varPlace);

char sauvType[25];
char sauvPlace[25];
%}

%union 
{ 
   int entier;
   float real; 
   char* string;
   char caracter;
}

%start Fonction

%token mcTRUE mcFALSE <string>mcINTEGER <string>mcREAL <string>mcCHARACTER <string>mcLOGICAL mcREAD mcWRITE mcDIMENSION mcPROGRAM mcEND mcROUTINE mcENDR mcCALL mcIF mcTHEN mcELSE mcENDIF mcDOWHILE mcENDDO PartageMemoire
%token OR AND GT EQ GE NE LE LT eq point_virgule point plus mpins division or aro etoile virgule
%token paraO paraF <string>identificateur <entier>INTEGER <entier>INTEGERPOSITIF <entier>INTEGERNEGATIF <real>REAL <caracter>caracter <string>chaine commantaire <real>REALNEGATIF <real>REALPOSITIF

%left virgule
%left plus mpins
%left etoile division
%nonassoc EQ NE LT LE GT GE
%left AND OR
%left paraO paraF
%left point
%type <string>type
%%

Fonction : type mcROUTINE identificateur paraO Liste paraF DECLARATIONS INST_S identificateur eq EXPR mcENDR {  strcpy(sauvType,$1);  addType($3,sauvType); sprintf (sauvPlace,"FONCTION %s",$3); } Fonction 
         | mcPROGRAM identificateur DECLARATIONS INST_S mcEND {  printf("Programme syntaxiquement correct.\n"); YYACCEPT; }
         ;

DECLARATIONS : type identificateur caractere1 DECLARATIONS1 { strcpy(sauvType,$1); addType ($2,sauvType);addVarPlace($2,sauvPlace); }
             |
             ;
                 
caractere1: etoile INTEGER
          | /*epsilon*/
          ;

DECLARATIONS1 : point_virgule DECLARATIONS
                    | virgule identificateur caractere1 DECLARATIONS1 {addType ($2,sauvType); }
                    | mcDIMENSION paraO INTEGER paraF DECLARATIONS2
                    | mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS2
			  | eq VALEURS DECLARATIONS1
			  ;
DECLARATIONS2 : point_virgule DECLARATIONS
              | virgule identificateur caractere1 DECLARATIONS1
              | mcDIMENSION paraO INTEGER paraF DECLARATIONS1
              | mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS1
              ;

VALEURS : REAL | INTEGER | caracter | chaine;

type : mcINTEGER | mcLOGICAL | mcREAL | mcCHARACTER;

INST_S: INST_S INSTR point_virgule | INST_S Condition
      | ;

INSTR : Affectation
      | ES
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

Boucle : mcDOWHILE paraO expression paraF INST_S mcENDDO ;


Condition : mcIF paraO expression paraF mcTHEN INST_S mcELSE INST_S mcENDIF
          | mcIF paraO expression paraF mcTHEN INST_S mcENDIF
          ;

expression : paraO expression paraF
           | expression point AND point expression
           | expression point OR point expression
           | expression OPER_COMPARISON expression
           | operand
           ;

operand: mcTRUE
       | mcFALSE
       | MATH_VAR
       ;           

OPER_COMPARISON: point EQ point
               | point GT point
               | point GE point
               | point NE point
               | point LE point
               | point LT point 
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
