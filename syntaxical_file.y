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
void afficher();
void addVariable(char *name, char *type, int state, char* val, char varPlace[]);

char sauvType[25];
char sauvPlace[25];
char IDFValeur[25];
char IDF[25];
char listeSource [500];
 char errorMsg[500];
%}

%union 
{ 
   int entier;
   float real; 
   char* string;
   char caracter;
}

%start Fonction

%token <string>mcTRUE <string>mcFALSE <string>mcINTEGER <string>mcREAL <string>mcCHARACTER <string>mcLOGICAL mcREAD mcWRITE mcDIMENSION mcPROGRAM mcEND mcROUTINE mcENDR mcCALL mcIF mcTHEN mcELSE mcENDIF mcDOWHILE mcENDDO PartageMemoire
%token OR AND GT EQ GE NE LE LT eq point_virgule point plus mpins division or aro etoile virgule
%token paraO paraF <string>identificateur <entier>INTEGER <entier>INTEGERPOSITIF <entier>INTEGERNEGATIF <real>REAL <caracter>caracter <string>chaine commantaire <real>REALNEGATIF <real>REALPOSITIF

%left virgule
%left plus mpins
%left etoile division
%nonassoc EQ NE LT LE GT GE
%right eq
%left AND OR
%left paraO paraF
%left point
%type <string>type
%type <entier>VALEURS_entier
%type <real>VALEURS_real
%type <string>LOGICAL
%%

Fonction : type mcROUTINE identificateur { addVariable($3,$1,1,"NULL","PROGRAM") ; strcpy(sauvType,$1);  addType($3,sauvType); sprintf (sauvPlace,"FONCTION %s",$3); } paraO { sprintf(listeSource ,"para de Fun %s",$3); } Liste paraF DECLARATIONS INST_S identificateur  
         eq EXPR { 
           if ( strcmp($3,$11) != 0 )
           { 
          sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
            } 
         } mcENDR  Fonction 
         | mcPROGRAM identificateur {sprintf (sauvPlace,"PROGRAM");} DECLARATIONS INST_S mcEND {  printf("Programme syntaxiquement correct.\n");  YYACCEPT; }
         ;

DECLARATIONS : type identificateur caractere1 {  strcpy(sauvType,$1); strcpy(IDF,$2);  } DECLARATIONS1 
             |
             ;
                 
caractere1: etoile INTEGER
          | /*epsilon*/
          ;

DECLARATIONS1 : point_virgule { addVariable(IDF,sauvType,1,"NULL",sauvPlace);} DECLARATIONS 
              | virgule { addVariable(IDF,sauvType,1,"NULL",sauvPlace);} identificateur caractere1 { strcpy(IDF,$3); } DECLARATIONS1
              | mcDIMENSION paraO INTEGER paraF DECLARATIONS2
              | mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS2   
              | eq VALEURS_entier { sprintf(IDFValeur,"%d", $2) ; addVariable(IDF,sauvType,1,IDFValeur,sauvPlace);} DECLARATIONS1                   
              | eq VALEURS_real { sprintf(IDFValeur,"%f", $2) ; addVariable(IDF,sauvType,1,IDFValeur,sauvPlace);} DECLARATIONS1 
              | eq chaine { sprintf(IDFValeur,"%s", $2) ; addVariable(IDF,sauvType,1,IDFValeur,sauvPlace);} DECLARATIONS1                     
              | eq caracter {  sprintf(IDFValeur,"%c", $2); addVariable(IDF,sauvType,1,IDFValeur,sauvPlace);}DECLARATIONS1 
              | eq LOGICAL{ sprintf(IDFValeur,"%s", $2) ; printf("%s\n",IDFValeur); addVariable(IDF,sauvType,1,IDFValeur,sauvPlace);} DECLARATIONS1
              ;

DECLARATIONS2 : point_virgule { addVariable(IDF,sauvType,1,"NULL",sauvPlace);} DECLARATIONS
              | virgule identificateur { addVariable(IDF,sauvType,1,"NULL",sauvPlace);} caractere1 DECLARATIONS1
              | mcDIMENSION paraO INTEGER paraF DECLARATIONS1
              | mcDIMENSION paraO INTEGER virgule INTEGER paraF DECLARATIONS1
              ;

VALEURS_entier : INTEGER 
               | INTEGERPOSITIF
               | INTEGERNEGATIF
               ;

VALEURS_real : REAL
             | REALPOSITIF
             | REALNEGATIF
             ;


type : mcINTEGER | mcLOGICAL | mcREAL | mcCHARACTER;

INST_S: INST_S INSTR point_virgule | INST_S if_statment
      | ;

INSTR : Affectation
      | ES
      | Boucle
      | Equivalence
      | /*vide*/
      ;

Affectation : identificateur eq EXPR;


EXPR : CHAINE_STRING
     | MATH_VAR
     | APPEL_FONC
     | LOGICAL
     ;

APPEL_FONC : mcCALL identificateur paraO { sprintf(listeSource ,"%s",sauvPlace); } Liste paraF ;


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

Equivalence : PartageMemoire paraO { sprintf(listeSource ,"%s",sauvPlace); } identificateur Liste paraF virgule paraO identificateur Liste paraF ;

Liste :
      | Liste virgule identificateur { addVariable($3,"pas de type",1,"NULL",listeSource);}
      | Liste virgule identificateur paraO INTEGER paraF { addVariable($3,"pas de type",1,"NULL",listeSource);}
      | Liste virgule identificateur paraO INTEGER virgule INTEGER paraF { addVariable($3,"pas de type",1,"NULL",listeSource);}
      | identificateur paraO INTEGER virgule INTEGER paraF { addVariable($1,"pas de type",1,"NULL",listeSource);}
      | identificateur paraO INTEGER paraF { addVariable($1,"pas de type",1,"NULL",listeSource);}
      ;

Boucle : mcDOWHILE paraO condition paraF INST_S mcENDDO 
       ;


if_statment : mcIF paraO condition paraF mcTHEN INST_S mcELSE INST_S mcENDIF
          | mcIF paraO condition paraF mcTHEN INST_S mcENDIF
          ;

condition : expression 
          | expression2
          ; 

expression2 : MATH_VAR point AND point expression2
            | MATH_VAR point OR point expression2
            | MATH_VAR
            | LOGICAL point AND point expression2
            | LOGICAL point OR point expression2
            | LOGICAL
            ;

expression : paraO expression paraF
           | expression point AND point expression
           | expression point OR point expression
           | expression point AND point MATH_VAR
           | expression point OR point MATH_VAR
           | expression point AND point LOGICAL
           | expression point OR point LOGICAL
           | MATH_VAR point AND point expression
           | MATH_VAR point OR point expression
           | LOGICAL point AND point expression
           | LOGICAL point OR point expression
           | comparision
           ;
           
comparision : MATH_VAR point EQ point MATH_VAR
            | LOGICAL point EQ point LOGICAL
            | MATH_VAR point EQ point LOGICAL
            | LOGICAL point EQ point MATH_VAR
            | MATH_VAR point GT point MATH_VAR
            | MATH_VAR point GE point MATH_VAR
            | MATH_VAR point NE point MATH_VAR
            | MATH_VAR point LE point MATH_VAR
            | MATH_VAR point LT point MATH_VAR
            ;

LOGICAL: mcTRUE
       | mcFALSE
       ;

OPER : plus
     | mpins
     | etoile
     | division
     ;

%%

// Fonction main

void yyerror(const char *s) {
    fprintf(stderr, "\n Syntax error at line %d, column %d: %s\n", nbligne, col, s);
      exit(EXIT_FAILURE);
}

int main() {
    yyparse();
    afficher();
    return 0;
}
