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
int addVariable(char *name, char *type, char* code, int state, char* val, char varPlace[]);
int addSize(char *name,char * varPlace, int size);
int addRowCol(char *name,char* varPlace ,int row, int col);
void* RechercherVar_et_sa_Place (char *name,char *place);

// Vérifie si une variable est déclarée
int variableisDeclared(char *name, char *place);

// Vérifie si un tableau est déclaré
int tableisDeclared(char *name, char *place);

// Vérifie si une matrice est déclarée
int matrixisDeclared(char *name, char *place);

// Retourne le type d'une variable, tableau ou matrice
char* getVariableType(char *name, char *place,char code[100]);
int getSize(char *name, char *place);
int getRowCol(char *name, char *place, int *row, int *col);
int functionisDeclared(char *name);

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
char* string;
int size,column,row;
char function_return[100] = ""; 
int condition = 0;
int Nombre_de_paramètres=0;
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
%left eq
%left AND OR
%left paraO paraF
%left point
%type <string> type
// %type <entier> VALEURS_entier
// %type <real> VALEURS_real
%type <string> LOGICAL
%%
Fonction : 
    type mcROUTINE identificateur 
    { 
        // Add a variable when a function is declared
        // Nous avons suposer la fonction comme un tableau et son taille est le nombre de paramètres 
        // parce que quand on apelle une fonction on doit viréfier son nbr de paramètres    
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
    Liste paraF 
    {
        addSize($3,"PROGRAM", Nombre_de_paramètres);
        Nombre_de_paramètres=0;
    }    
    DECLARATIONS INST_S Affectation { 
        // Check that the return value is assigned to the function name
        if (strcmp($3, function_return) != 0)
        { 
            sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
        } 
    } mcENDR 
    Fonction 
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
        if($3==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = $3;
    } DECLARATIONS2
| 
    mcDIMENSION paraO INTEGER virgule INTEGER paraF 
    {   
        if($3==0 || $5==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Matrice");
        row = $3;
        column = $5;
    } DECLARATIONS2   
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
        if($3==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = $3;
    } DECLARATIONS1
| 
    mcDIMENSION paraO INTEGER virgule INTEGER paraF 
    {
        if($3==0 || $5==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
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
    {
        char* temp = getVariableType($1,sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg,"la variable  \"%s\" n'est pas declarer", $1);
            yyerror(errorMsg);
        }
        else
        { 
            if (strcmp(function_return,"idf fonction")== 0)
             // ici la fonction getVariableType modifie le function_return si la variable est une fonction 
             // donc en mete le nom de cette variable dans function_return pour virifier si le nome de la fonction et 
             // la nome que nous avons affecter le retour sont equvalant  
            {                                              
                strcpy(function_return,$1);
            }
            strcpy(IDF,$1);
            strcpy(sauvType,temp);
        }
    }
    eq EXPR 
|
    identificateur paraO INTEGER paraF 
    {

        char* temp = getVariableType($1,sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme tableau ", $1);
            yyerror(errorMsg);
        }
        else
        {
        int tempSize = getSize(IDF,sauvPlace);

        if (tempSize)
        {
            if (tempSize < $3){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille ", $1);
                yyerror(errorMsg);
            }
            strcpy(IDF,$1);
            strcpy(sauvType,temp);
        }
        }
    }
    eq EXPR
|
    identificateur paraO INTEGER virgule INTEGER paraF 
    {
        
        char* temp = getVariableType($1,sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme matrice", $1);
            yyerror(errorMsg);
        }
        else
        {
        int tempRow ,tempCol;
        if(getRowCol(IDF,sauvPlace,&tempRow,&tempCol)==0)
        {
            if (tempRow < $3 || tempCol < $5){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille  ", $1);
                yyerror(errorMsg);
            }
            strcpy(IDF,$1);
            strcpy(sauvType,temp);
        }
        }
    }
    eq EXPR
;

EXPR : 

    CHAINE_STRING

| 
    MATH_VAR

| 
    APPEL_FONC
    
| 
    LOGICAL

|   
    caracter
    {
        // Semantic code for caracter
    }
;

APPEL_FONC :

    mcCALL identificateur paraO 
    { 
        if(functionisDeclared($2))
        {
            sprintf(errorMsg, "la fonction \"%s\" n'est pas declarer ", $2);
            yyerror(errorMsg);
        }

        char* temp = getVariableType($2,"PROGRAM",function_return);

        strcpy(function_return ,"");
        if (strcmp(temp,"INTEGER") == 0 && strcmp("REAL",sauvType)!= 0 )
        {
            if (strcmp(temp,sauvType)!= 0)
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
        }
        sprintf(listeSource, "%s", sauvPlace); 
    } 
    Liste
    {   int tempSize = getSize($2,"PROGRAM");
        if(tempSize!= Nombre_de_paramètres)
        {
            sprintf(errorMsg, "le nombre de paramètres de la fonction \"%s\" est incorrect le nombre correcte est %d", $2,tempSize);
            yyerror(errorMsg);   
        }
        Nombre_de_paramètres=0;
    }
    paraF
;


MATH_VAR : 

    identificateur
    {
        if(variableisDeclared($1, sauvPlace) && tableisDeclared($1, sauvPlace) && matrixisDeclared ($1, sauvPlace))//return 1 si le idf n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme variable simple", $1);
            yyerror(errorMsg);
        }
        else
        { 
            char* temp = getVariableType($1,sauvPlace,function_return);

            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0 )
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", $1);
                yyerror(errorMsg);
                }
            }

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
        else
        {
            // check the type 
            char* temp = getVariableType($1,sauvPlace,function_return);
            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0 )
            {  
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", $1);
                yyerror(errorMsg);
                }
            }
        }
        int tempSize = getSize(IDF,sauvPlace);

        if (tempSize)
        {
            if (tempSize < $3){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille  ", $1);
                yyerror(errorMsg);
            }
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
        else
        {
            char* temp = getVariableType($1,sauvPlace,function_return);
            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0)
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", $1);
                yyerror(errorMsg);
                }
            }
        } 
        int tempRow ,tempCol;
        if(getRowCol(IDF,sauvPlace,&tempRow,&tempCol)==0)
        {
            if (tempRow < $3 || tempCol < $5){
                sprintf(errorMsg, "lla variable \"%s\" a une erreur dans la taille  ", $1);
                yyerror(errorMsg);
            }
        }

    } MATH_VAR1
| 
    INTEGER 
    {   
        // check if depasse intervale 0 32767
        if ($1 > 32767 || $1 < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
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
    {   // check if depasse intervale 0 32767
        if ($1 > 32767 || $1 < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
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
    {   // check if depasse intervale -32768 0
        if ($1 > 0 || $1 < -32768 ){
           sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
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
        // check if depasse intervale 0 32767.32767 
        if ($1 > 32767.32767 || $1 < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
    MATH_VAR1
| 
    REALPOSITIF 
    {   
        // check if depasse intervale  -32768.32768 0
        if ($1 > 32767.32767 || $1 < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
    MATH_VAR1
| 
    REALNEGATIF 
    {   
        if ($1 > 0|| $1 < -32768.32768 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
    MATH_VAR1
| 
    paraO MATH_VAR paraF MATH_VAR1
;

MATH_VAR1 : 

    OPER 
    MATH_VAR
| 
    INTEGERNEGATIF 
    {   
        if ($1 > 0 || $1 < -32768 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        val_entier += $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    OPER MATH_VAR
| 
    INTEGERPOSITIF
    {
        if ($1 > 32767 || $1 < 0 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
       val_entier += $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
    OPER MATH_VAR
| 
    REALNEGATIF 
    {   
        if ($1 > 0|| $1 < -32768.32768 )
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
    OPER 
    
    MATH_VAR
| 
    REALPOSITIF 
    {   if ($1 > 32767.32767 || $1 < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
    OPER MATH_VAR
| 
    INTEGERNEGATIF
    {   if ($1 > 0 || $1 < -32768 )
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
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
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
         if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = $1 ; 
        val_entier = $1 ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
| 
    REALNEGATIF
    {   if ($1 > 32767.32767 || $1 < 0 ){
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
| 
    REALPOSITIF
    {
        if ($1 > 32767.32767 || $1 < 0 ){
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = $1 ;
        sprintf(IDFValeur, "%f", val_real);
    }
| 
    /*empty*/
;

CHAINE_STRING : 

    chaine CHAINE_STRING
    {
        sprintf(string,"%s%s",string,$1);
    }#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "symbolsTable.h"
int test (){ return 5; }

int main() {
    char * code ; 
    addVariable("Comp", "INTEGER", "idf fonction", 1, "NULL", "PROGRAM");
    printf("%s\n", getVariableType("Comp", "PROGRAM", &code));
    printf("%s\n",code);
}
| 
    chaine
    {
        string = $1; 
    }
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

    {    Nombre_de_paramètres++;
        addVariable($3,"pas de type","Var Simple",1,"NULL",listeSource);
    }
| 
    Liste1 virgule identificateur paraO INTEGER paraF
    
    {    Nombre_de_paramètres++;
        addVariable($3,"pas de type","Tableau",1,"NULL",listeSource);
    }
| 
    Liste1 virgule identificateur paraO INTEGER virgule INTEGER paraF 
    
    {    Nombre_de_paramètres++;
        addVariable($3,"pas de type","Matrice",1,"NULL",listeSource);
    }
| 
    identificateur paraO INTEGER virgule INTEGER paraF 
    
    {    Nombre_de_paramètres++;
        addVariable($1,"pas de type","Matrice",1,"NULL",listeSource);
    }
| 
    identificateur paraO INTEGER paraF
    
    {    Nombre_de_paramètres++;
        addVariable($1,"pas de type","Tableau",1,"NULL",listeSource);
    }

|
        identificateur 
    {   
        Nombre_de_paramètres++;
        addVariable($1,"pas de type","Var Simple",1,"NULL",listeSource);
    }
;
Boucle : 

    mcDOWHILE paraO condition paraF INST_S mcENDDO
;

if_statment :

    mcIF {condition = 1;} paraO  condition paraF mcTHEN INST_S if_reste {condition = 0;}
;

if_reste : 
    mcELSE INST_S mcENDIF
| 
    mcENDIF

condition : 
    
    expression 
| 
    expression2
; 

expression2 :

    EXPR point AND point expression2
| 
    EXPR point OR point expression2
| 
    EXPR
;

expression : 

    paraO expression paraF
| 
    expression point AND point expression
| 
    expression point OR point expression
| 
    expression point AND point EXPR
| 
    expression point OR point EXPR
| 
    EXPR point AND point expression
| 
    EXPR point OR point expression
| 
    comparision
;

comparision :  
    
    EXPR point EQ point EXPR
| 
    EXPR point GT point EXPR
| 
    EXPR point GE point EXPR
| 
    EXPR point NE point EXPR
| 
    EXPR point LE point EXPR
| 
    EXPR point LT point EXPR
;


LOGICAL: 

    mcTRUE
| 
    mcFALSE
;

OPER : 
    plus
| 
    mpins
| 
    etoile 
| 
    division
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