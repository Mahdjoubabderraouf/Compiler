/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct   
{
   int state; 
   char name[20];
   char code[20];
   char type[20];
   float val;
   char varPlace[]; /* la place de la variable  */
  variable* suiv;
 }variable;// les variables        

typedef struct
{
   int state; 
   char name[20];
   char code[20];
   char type[20];
   float val;
   constant* suiv;
 } constant;

typedef struct
{ 
   int state; 
   char name[20];
   char type[20];
   elt* suiv;
} elt;// séparateurs & des mots clés 

/***Step 2: Déclaration des variables globales ***/

variable* listVar = NULL;
variable* dernierVar = NULL ;
constant* listConst = NULL ;
constant* dernierConst = NULL;
elt* listSep = NULL;
elt* dernierSep = NULL;
elt* listMotCle = NULL;
elt* dernierMotCle = NULL;
// extern char sav[20];
// char chaine [] = "";

// element tab[1000];

/***Step 3: Définition des fonctions ***/

void addVariable(char *name, char *type, int state, float val, char varPlace[])
{
    if (listVar == NULL)
    {
        listVar = (variable*)malloc(sizeof(variable));
        listVar->state = state;
        strcpy(listVar->name, name);
        strcpy(listVar->type, type);
        listVar->val = val;
        listVar->varPlace = varPlace;
        listVar->suiv = NULL;
        dernierVar = listVar;
    }
    else
    {
        variable *newVar = (variable*)malloc(sizeof(variable));
        newVar->state = state;
        strcpy(newVar->name, name);
        strcpy(newVar->type, type);
        newVar->val = val;
        newVar->varPlace = varPlace;  
        newVar->suiv = NULL;
        dernierVar->suiv = newVar;
        dernierVar = newVar;
    }
}

void addConstant(char *name, char *type, int state, float val)
{
    if (listConst == NULL)
    {
        listConst = (constant*)malloc(sizeof(constant));
        listConst->state = state;
        strcpy(listConst->name, name);
        strcpy(listConst->type, type);
        listConst->val = val;
        listConst->suiv = NULL;
        dernierConst = listConst;
    }
    else
    {
        constant *newConst = (constant*)malloc(sizeof(constant));
        newConst->state = state;
        strcpy(newConst->name, name);
        strcpy(newConst->type, type);
        newConst->val = val;
        newConst->suiv = NULL;
        dernierConst->suiv = newConst;
        dernierConst = newConst;
    }
}

void addSep(char *name, char *type, int state)
{ 
    if (listSep == NULL)
    {
        listSep = (elt*)malloc(sizeof(elt));
        listSep->state = state;
        strcpy(listSep->name, name);
        strcpy(listSep->type, type);
        listSep->suiv = NULL;
        dernierSep = listSep;
    }
    else
    {
        elt *newSep = (elt*)malloc(sizeof(elt));
        newSep->state = state;
        strcpy(newSep->name, name);
        strcpy(newSep->type, type);
        newSep->suiv = NULL;
        dernierSep->suiv = newSep;
        dernierSep = newSep;    
    }
}

void addMotCle(char *name, char *type, int state)
{ 
    if (listMotCle==NULL)
    {
        listMotCle = (elt*)malloc(sizeof(elt));
        listMotCle->state = state;
        strcpy(listMotCle->name, name);
        strcpy(listMotCle->type, type);
        listMotCle->suiv = NULL;
        dernierMotCle = listMotCle;

    }else
    {
        elt *newMotCle = (elt*)malloc(sizeof(elt));
        newMotCle->state = state;
        strcpy(newMotCle->name, name);
        strcpy(newMotCle->type, type);
        newMotCle->suiv = NULL;
        dernierMotCle->suiv = newMotCle;
        dernierMotCle = newMotCle;    
    }
}

int RechercherVar(char *name)
{
    variable *tempVar = listVar;
    while(tempVar != NULL)
    {
        if(strcmp(tempVar->name, name) == 0)
            return 1; // Element found in listVar
        tempVar = tempVar->suiv;
    }
    return 0; // Element not found
}

int RechercherConst(char *name)
{
    constant *tempConst = listConst;
    while(tempConst != NULL)
    {
        if(strcmp(tempConst->name, name) == 0)
            return 1; // Element found in listConst
        tempConst = tempConst->suiv;
    }
    return 0; // Element not found
}

int RechercherSep(char *name)
{
    elt *tempSep = listSep;
    while(tempSep != NULL)
    {
        if(strcmp(tempSep->name, name) == 0)
            return 1; // Element found in listSep
        tempSep = tempSep->suiv;
    }
    return 0; // Element not found
}

int RechercherMotCle(char *name)
{
    elt *tempMotCle = listMotCle;
    while(tempMotCle != NULL)
    {
        if(strcmp(tempMotCle->name, name) == 0)
            return 1; // Element found in listMotCle
        tempMotCle = tempMotCle->suiv;
    }
    return 0; // Element not found
}
