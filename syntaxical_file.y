

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
int addVariable(char *name, char *type, char* code, int state, char* val, char varPlace[]);int addSize(char *name,char * varPlace, int size);
int addRowCol(char *name,char* varPlace ,int row, int col);
void* RechercherVar_et_sa_Place (char *name,char *place);
// Vérifie si une variable est déclarée
int variableisDeclared(char *name, char *place);

// Vérifie si un tableau est déclaré
int tableisDeclared(char *name, char *place);

// Vérifie si une matrice est déclarée
int matrixisDeclared(char *name, char *place);

// Retourne le type d'une variable, tableau ou matrice
char* getVariableType(char *name, char *place);

char sauvType[25];
char sauvPlace[25];
char IDFValeur[25];
char IDF[25];
char listeSource [500];
char errorMsg[500];
char IDFCode[25] ="Var Simple";
int isString =0;
int val_entier;
float val_real;
char oper;
int size,column,row;

%}

%union 
{ 
   int entier;
   float real; 
   char* string;
   char caracter;
}

%start Fonction

%token <string> mcTRUE mcFALSE mcINTEGER mcREAL mcCHARACTER mcLOGICAL mcREAD mcWRITE mcDIMENSION mcPROGRAM mcEND mcROUTINE mcENDR mcCALL mcIF mcTHEN mcELSE mcENDIF mcDOWHILE mcENDDO PartageMemoire
%token OR AND GT EQ GE NE LE LT eq point_virgule point plus mpins division or aro etoile virgule
%token paraO paraF <string> identificateur <entier> INTEGER <entier> INTEGERPOSITIF <entier> INTEGERNEGATIF <real> REAL <caracter> caracter <string> chaine commantaire <real> REALNEGATIF <real> REALPOSITIF

%left virgule
%left plus mpins
%left etoile division
%nonassoc EQ NE LT LE GT GE
%left AND OR
%left paraO paraF
%left point
%type <string> type
// %type <entier> VALEURS_entier
// %type <real> VALEURS_real
%type <string> LOGICAL
%type <real>MATH_VAR
%type <real>MATH_VAR1
%%


Fonction : 
    type mcROUTINE identificateur 
    { 
        // Add a variable when a function is declared
        if (addVariable($3, $1, "idf fonction", 1, "NULL", "PROGRAM")) {sprintf(errorMsg,"double declaration de %s",$3) ; yyerror(errorMsg);}
        strcpy(sauvType, $1);
        addType($3, sauvType);
        sprintf(sauvPlace, "FONCTION %s", $3);
    } 
    paraO 
    { 
        // Handle function parameters
        sprintf(listeSource, "para de Fun %s", $3);
    } 
    Liste paraF DECLARATIONS INST_S identificateur eq EXPR 
    { 
        // Check that the return value is assigned to the function name
        if (strcmp($3, $11) != 0)
        { 
            sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
        } 
    } 
    mcENDR Fonction 
| 
    mcPROGRAM identificateur 
    { 
        // Handle program declaration
        sprintf(sauvPlace, "PROGRAM");
    } 
    DECLARATIONS INST_S mcEND
    {  
        // Accept if the program is syntactically correct
        printf("Programme syntaxiquement correct.\n");  
        YYACCEPT; 
    }
;

DECLARATIONS : 

    type identificateur  
    { 
        strcpy(sauvType, $1); 
        strcpy(IDF, $2);
    } caractere1 DECLARATIONS1 
| 
;

caractere1: 
    etoile INTEGER 
    {
        if (strcmp(sauvType,"CHARACTER") !=0) 
        {
            sprintf(errorMsg,"Erreur de Type de la variable : \"%s\" ",IDF);
            yyerror(errorMsg);
        }
        strcpy(IDFCode,"Tableau"); 
        size = $2;
        isString =1;
    }
| 
    /*epsilon*/
    ;

DECLARATIONS1 : 
    point_virgule 
    {  
        // Add a variable to the list of declared variables
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) 
        { sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg); }
        strcpy(IDFCode, "Var Simple");
    } 
    DECLARATIONS 
| 
    virgule identificateur  
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, $2);
        strcpy(IDFCode, "Var Simple");
    } 
    caractere1 DECLARATIONS1
| 
    mcDIMENSION paraO INTEGER paraF 
    {
        strcpy(IDFCode, "Tableau");
        size = $3;
    } DECLARATIONS2
| 
    mcDIMENSION paraO INTEGER virgule INTEGER paraF 
    {
        strcpy(IDFCode, "Matrice");
        row = $3;
        column = $5;
    } DECLARATIONS2   
// | 
//     eq VALEURS_entier 
//     {    
//         if (strcmp(sauvType,"INTEGER") !=0 && strcmp(sauvType,"REAL") ) 
//         {
//             sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
//             yyerror(errorMsg);
//         }
//         sprintf(IDFValeur, "%d", $2);
//     } 
//     DECLARATIONS3                   
// | 
//     eq VALEURS_real 
//     {   
//         if (strcmp(sauvType,"REAL") !=0 ) 
//         {
//              sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
//             yyerror(errorMsg);
//         }
//         sprintf(IDFValeur, "%f", $2);
//     } 
//     DECLARATIONS3
// | 
//     eq chaine 
//     { 
//         if (strcmp(sauvType,"CHARACTER") !=0 ) 
//         {   
//             sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type chaine de \"%s\"",IDF,sauvType);
//             yyerror(errorMsg);
//         }else if ( isString == 0)
//         {
//             sprintf(errorMsg," \"%s\" est de Type \"%s\" et n' est pas une chaine ",IDF,sauvType);
//             yyerror(errorMsg);
//         }
//         sprintf(IDFValeur, "%s", $2);
//         isString=0;

//     } 
//     DECLARATIONS3                   
// | 
//     eq caracter 
//     {  
//         if (strcmp(sauvType,"CHARACTER") !=0 ) 
//         {
//              sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
//             yyerror(errorMsg);

//         }else if ( isString == 1)
//         {
//             sprintf(errorMsg," \"%s\" est une chaine de \" %s\"",IDF,sauvType);
//             yyerror(errorMsg);
//         }
        
//         sprintf(IDFValeur, "%c", $2);
//     }
//     DECLARATIONS3
// | 
//     eq LOGICAL 
//     { 
//         if (strcmp(sauvType,"LOGICAL") !=0) 
//         {
//             sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
//             yyerror(errorMsg);
//         }
//         sprintf(IDFValeur, "%s", $2);
//     } 
//     DECLARATIONS3
// |
//     eq identificateur
//     { 
//        if(variableisDeclared($2, sauvPlace))//return 1 si le idf n'est pas déclaré 
//         {
//             sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme variable simple", $2);
//             yyerror(errorMsg);
//         }
//         if (strcmp(sauvType,getVariableType($2, sauvPlace)) !=0 )
//         {
//             sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
//             yyerror(errorMsg);
//         }

//         sprintf(IDFValeur, "%s", $2);
//     } 
//     DECLARATIONS3
|
    eq EXPR DECLARATIONS3
;

DECLARATIONS2 : 

    point_virgule
    { 
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        if (strcmp(IDFCode, "Tableau") == 0) 
        { 
            if (addSize(IDF, sauvPlace, size))   
                yyerror("var n'est pas declarer");
        }   
        if (strcmp(IDFCode, "Matrice") == 0) 
        {   
            if (addRowCol(IDF, sauvPlace, row, column))  
                yyerror("var n'est pas declarer");              
        }
        strcpy(IDFCode, "Var Simple");
    } 
    DECLARATIONS
| 
    virgule identificateur 
    { 
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        if (strcmp(IDFCode, "Tableau") == 0) 
        { 
            if (addSize(IDF, sauvPlace, size))   
                yyerror("var n'est pas declarer");
        }   
        if (strcmp(IDFCode, "Matrice") == 0) 
        {
            if (addRowCol(IDF, sauvPlace, row, column))  
                yyerror("var n'est pas declarer");              
        }
        strcpy(IDF, $2);
        strcpy(IDFCode, "Var Simple");
    } 
    caractere1 DECLARATIONS1
| 
    mcDIMENSION paraO INTEGER paraF 
    {
        strcpy(IDFCode, "Tableau");
        size = $3;
    } DECLARATIONS1
| 
    mcDIMENSION paraO INTEGER virgule INTEGER paraF 
    {
        strcpy(IDFCode, "Matrice");
        row =$3;
        column =$5;
    } DECLARATIONS1
;

DECLARATIONS3 : 

    point_virgule
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)){sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDFCode, "Var Simple");
    } 
    DECLARATIONS
| 
    virgule identificateur 
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, $2);
        strcpy(IDFCode, "Var Simple");
    } 
    caractere1 DECLARATIONS1
    ;


// VALEURS_entier :

//     INTEGER 
// | 
//     INTEGERPOSITIF
// | 
//     INTEGERNEGATIF
// ;

// VALEURS_real : 

//     REAL
// | 
//     REALPOSITIF
// | 
//     REALNEGATIF
// ;

type :

    mcINTEGER 
| 
    mcLOGICAL 
| 
    mcREAL 
| 
    mcCHARACTER
;

INST_S: 

    INST_S INSTR point_virgule 
| 
    INST_S if_statment
| 
    /*empty*/
;

INSTR : 

    Affectation
| 
    ES
| 
    Boucle
| 
    Equivalence
| 
    /*empty*/
;

Affectation : 

    identificateur
     eq EXPR
    {
        if (RechercherVar_et_sa_Place($1,sauvPlace)== NULL )
        {
            sprintf(errorMsg,"la variable \"%s\" n'est pas declarer", $1);
            yyerror(errorMsg);
        }
    }
;

EXPR : 
    CHAINE_STRING
    {
        // Semantic code for CHAINE_STRING
    }
| 
    MATH_VAR
    {
        // Semantic code for MATH_VAR
    }
| 
    APPEL_FONC
    {
        // Semantic code for APPEL_FONC
    }
| 
    LOGICAL 
    {
        // Semantic code for LOGICAL
    }
|   
    caracter
    {
        // Semantic code for caracter
    }
;

APPEL_FONC :

    mcCALL identificateur paraO 
    { 
        sprintf(listeSource, "%s", sauvPlace); 
    } 
    Liste paraF
;


MATH_VAR : 

    identificateur
    {
        if(variableisDeclared($1, sauvPlace))//return 1 si le idf n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme variable simple", $1);
            yyerror(errorMsg);
        }
    }
    MATH_VAR1
| 
    identificateur paraO INTEGER paraF 
    {
        if(tableisDeclared($1, sauvPlace))//return 1 si le tableau n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme tableau ", $1);
            yyerror(errorMsg);
        }
    }
    MATH_VAR1
| 
    identificateur paraO INTEGER virgule INTEGER paraF 
    {
        if(matrixisDeclared($1, sauvPlace))//return 1 si le tableau n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme matrice", $1);
            yyerror(errorMsg);
        }
    } MATH_VAR1
| 
    INTEGER 
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    MATH_VAR1
| 
    INTEGERPOSITIF 
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    MATH_VAR1
| 
    INTEGERNEGATIF 
    {
        if (strcmp(sauvType,"INTEGER") !=0 && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    MATH_VAR1
| 
    REAL 
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
    MATH_VAR1
| 
    REALPOSITIF 
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
    MATH_VAR1
| 
    REALNEGATIF 
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
    MATH_VAR1
| 
    paraO MATH_VAR paraF MATH_VAR1
;

MATH_VAR1 : 

    OPER 
    {
        if(oper == '+') 
    }
    MATH_VAR
| 
    INTEGERNEGATIF 
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        $$ = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    OPER MATH_VAR
| 
    INTEGERPOSITIF
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    OPER MATH_VAR
| 
    REALNEGATIF 
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
    OPER 
    
    MATH_VAR
| 
    REALPOSITIF 
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
    OPER MATH_VAR
| 
    INTEGERNEGATIF
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
| 
    INTEGERPOSITIF
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
| 
    REALNEGATIF
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
| 
    REALPOSITIF
    {
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%d", val_real);
    }
| 
    /*empty*/
;

CHAINE_STRING : 

    chaine CHAINE_STRING
| 
    chaine
;

ES : 

    mcREAD paraO identificateur paraF 
| 
    mcWRITE paraO chaine paraF 
| 
    mcWRITE paraO chaine ES_WRITE_OPTIONAL paraF 
;

ES_WRITE_OPTIONAL :  

    virgule identificateur 
| 
    virgule identificateur chaine 
;

Equivalence : 

    PartageMemoire paraO 

    {
       sprintf(listeSource ,"%s",sauvPlace); 
    } 

    Liste1 paraF virgule paraO Liste paraF 
;


Liste : Liste1
|
;

Liste1 :


  Liste1 virgule identificateur  

    { 
        addVariable($3,"pas de type","Var Simple",1,"NULL",listeSource);
    }
| 
    Liste1 virgule identificateur paraO INTEGER paraF
    
    { 
        addVariable($3,"pas de type","Tableau",1,"NULL",listeSource);
    }
| 
    Liste1 virgule identificateur paraO INTEGER virgule INTEGER paraF 
    
    { 
        addVariable($3,"pas de type","Matrice",1,"NULL",listeSource);
    }
| 
    identificateur paraO INTEGER virgule INTEGER paraF 
    
    { 
        addVariable($1,"pas de type","Matrice",1,"NULL",listeSource);
    }
| 
    identificateur paraO INTEGER paraF
    
    { 
        addVariable($1,"pas de type","Tableau",1,"NULL",listeSource);
    }

|
        identificateur 
    { 
        addVariable($1,"pas de type","Var Simple",1,"NULL",listeSource);
    }
;
Boucle : 

    mcDOWHILE paraO condition paraF INST_S mcENDDO
;

if_statment :

    mcIF paraO condition paraF mcTHEN INST_S mcELSE INST_S mcENDIF
| 
    mcIF paraO condition paraF mcTHEN INST_S mcENDIF
;

condition : 

    expression 
| 
    expression2
; 

expression2 :

    MATH_VAR point AND point expression2
| 
    MATH_VAR point OR point expression2
| 
    MATH_VAR
| 
    LOGICAL point AND point expression2
| 
    LOGICAL point OR point expression2
| 
    LOGICAL
;

expression : 

    paraO expression paraF
| 
    expression point AND point expression
| 
    expression point OR point expression
| 
    expression point AND point MATH_VAR
| 
    expression point OR point MATH_VAR
| 
    expression point AND point LOGICAL
| 
    expression point OR point LOGICAL
| 
    MATH_VAR point AND point expression
| 
    MATH_VAR point OR point expression
| 
    LOGICAL point AND point expression
| 
    LOGICAL point OR point expression
| 
    comparision
;

comparision : 

    MATH_VAR point EQ point MATH_VAR
| 
    LOGICAL point EQ point LOGICAL
| 
    MATH_VAR point EQ point LOGICAL
| 
    LOGICAL point EQ point MATH_VAR
| 
    MATH_VAR point GT point MATH_VAR
| 
    MATH_VAR point GE point MATH_VAR
| 
    MATH_VAR point NE point MATH_VAR
| 
    MATH_VAR point LE point MATH_VAR
| 
    MATH_VAR point LT point MATH_VAR
;

LOGICAL: 

    mcTRUE
| 
    mcFALSE
;

OPER : 
    plus
    {oper='+'}
| 
    mpins
    {oper='-'}
| 
    etoile 
    {oper='*'}
| 
    division
    {oper='/'}
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