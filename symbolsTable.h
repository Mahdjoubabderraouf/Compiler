/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct variable
{

    int state;
    char name[20];
    char code[20];
    char type[20];
    float val;
    char varPlace[20]; /* la place de la variable  */
    struct variable *suiv;

} variable;

/******les siganatures des fonctions *********/
variable* RechercherVar(char *name);
int RechercherVarPlace (char *name,char *place);
int RechercherConst(char *name);
int RechercherSep(char *name);
int RechercherMotCle(char *name);
void addVariable(char *name, char *type, int state, float val, char varPlace[]);
void addConstant(char *name, char *type, int state, float val);
void addMotCle(char *name, char *type, int state);
void addSep(char *name, char *type, int state);
void afficher();

/******************************************/


typedef struct constant
{
    int state;
    char name[20];
    char code[20];
    char type[20];
    float val;
    struct constant *suiv;
} constant;

typedef struct elt
{
    int state;
    char name[20];
    char type[20];
    struct elt *suiv;
} elt; // séparateurs & des mots clés

/***Step 2: Déclaration des variables globales ***/

variable *listVar = NULL;
variable *dernierVar = NULL;
constant *listConst = NULL;
constant *dernierConst = NULL;
elt *listSep = NULL;
elt *dernierSep = NULL;
elt *listMotCle = NULL;
elt *dernierMotCle = NULL;

/***Step 3: Définition des fonctions ***/

variable* RechercherVar(char *name)
{
    variable *tempVar = listVar;
    
    while (tempVar != NULL)
    {
        if (strcmp(tempVar->name, name) == 0 )
            
            return tempVar; // Element found in listVar
        
        tempVar = tempVar->suiv;

    }
    return NULL ; // Element not found
}

int RechercherVarPlace (char *name,char *place)
{
    variable *tempVar = RechercherVar(name);
    
    if (tempVar != NULL)
        
    {
        if (strcmp(place,tempVar->varPlace) == 0)  return 1; // variable existe dans la fonction place
        return 0 ; // variable n'est pas déclarée dans la fonction place tu peux le déclarée 
    }

}

int RechercherConst(char *name)
{
    constant *tempConst = listConst;
    while (tempConst != NULL)
    {
        if (strcmp(tempConst->name, name) == 0)
            return 1; // Element found in listConst
        tempConst = tempConst->suiv;
    }
    return 0; // Element not found
}

int RechercherSep(char *name)
{
    elt *tempSep = listSep;
    while (tempSep != NULL)
    {
        if (strcmp(tempSep->name, name) == 0)
            return 1; // Element found in listSep
        tempSep = tempSep->suiv;
    }
    return 0; // Element not found
}

int RechercherMotCle(char *name)
{
    elt *tempMotCle = listMotCle;
    while (tempMotCle != NULL)
    {
        if (strcmp(tempMotCle->name, name) == 0)
            return 1; // Element found in listMotCle
        tempMotCle = tempMotCle->suiv;
    }
    return 0; // Element not found
}
void addVariable(char *name, char *type, int state, float val,char varPlace[])
{
    if (RechercherVar(name) == NULL )
    {
        if (listVar == NULL)
        {
            listVar = (variable *)malloc(sizeof(variable));
            listVar->state = state;
            strcpy(listVar->name, name);
            strcpy(listVar->type, type);
            strcpy(listVar->code, "identificateur");
            listVar->val = val;
            listVar->suiv = NULL;
            dernierVar = listVar;
        }
        else
        {   if (RechercherVarPlace(name,varPlace) == 0)
        {
            variable *newVar = (variable *)malloc(sizeof(variable));

            newVar->state = state;
            strcpy(newVar->name, name);
            strcpy(newVar->type, type);
            strcpy(newVar->code, "identificateur");
            newVar->val = val;
            newVar->suiv = NULL;
            dernierVar->suiv = newVar;
            dernierVar = newVar;
        } 
        }
    }
}

void addConstant(char *name, char *type, int state, float val)
    {
        if (RechercherConst(name) == 0)
        {
            if (listConst == NULL)
            {
                listConst = (constant *)malloc(sizeof(constant));
                listConst->state = state;
                strcpy(listConst->name, name);
                strcpy(listConst->type, type);
                strcpy(listConst->code, "CONSTANT");
                listConst->val = val;
                listConst->suiv = NULL;
                dernierConst = listConst;
            }
            else
            {
                constant *newConst = (constant *)malloc(sizeof(constant));
                newConst->state = state;
                strcpy(newConst->name, name);
                strcpy(newConst->type, type);
                strcpy(newConst->code, "CONSTANT");
                newConst->val = val;
                newConst->suiv = NULL;
                dernierConst->suiv = newConst;
                dernierConst = newConst;
            }
        }
    }

void addMotCle(char *name, char *type, int state)
{
    if (RechercherMotCle(name) == 0) // Element does not exist
    {
        if (listMotCle == NULL)
        {
            listMotCle = (elt *)malloc(sizeof(elt));
            listMotCle->state = state;
            strcpy(listMotCle->name, name);
            strcpy(listMotCle->type, type);
            listMotCle->suiv = NULL;
            dernierMotCle = listMotCle;
        }
        else
        {
            elt *newMotCle = (elt *)malloc(sizeof(elt));
            newMotCle->state = state;
            strcpy(newMotCle->name, name);
            strcpy(newMotCle->type, type);
            newMotCle->suiv = NULL;
            dernierMotCle->suiv = newMotCle;
            dernierMotCle = newMotCle;
        }
    }
}

void addSep(char *name, char *type, int state)
{
    if (RechercherSep(name) == 0) // L'élément n'existe pas
    {
        if (listSep == NULL)
        {
            listSep = (elt *)malloc(sizeof(elt));
            listSep->state = state;
            strcpy(listSep->name, name);
            strcpy(listSep->type, type);
            listSep->suiv = NULL;
            dernierSep = listSep;
        }
        else
        {
            elt *newSep = (elt *)malloc(sizeof(elt));
            newSep->state = state;
            strcpy(newSep->name, name);
            strcpy(newSep->type, type);
            newSep->suiv = NULL;
            dernierSep->suiv = newSep;
            dernierSep = newSep;
        }
    }
}

void afficher()
{
    printf("/***************Table des symboles IDF*************/\n");
    printf("____________________________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite | Var_Place\n");
    printf("____________________________________________________________________________________\n");

    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (tempVar->state == 1)
        {
            printf("\t|%s |%s |%s | %f | %s\n", tempVar->name, tempVar->code, tempVar->type, tempVar->val,tempVar->varPlace);
        }
        tempVar = tempVar->suiv;
    }

    constant *tempConst = listConst;
    printf("\n/***************Table des symboles constants*************/\n");
    printf("____________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
    printf("____________________________________________________________________\n");

    while (tempConst != NULL)
    {
        printf("\t|%s |%s | %s | %f\n", tempConst->name, tempConst->code, tempConst->type, tempConst->val);
        tempConst = tempConst->suiv;
    }
    printf("\n");

    printf("\n/***************Table des symboles mots clés*************/\n");
    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    elt *tempMotCle = listMotCle;
    while (tempMotCle != NULL)
    {
        if (tempMotCle->state == 1)
        {
            printf("\t|%10s |%12s | \n", tempMotCle->name, tempMotCle->type);
        }
        tempMotCle = tempMotCle->suiv;
    }

    printf("\n/***************Table des symboles séparateurs*************/\n");
    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    elt *tempSep = listSep;
    while (tempSep != NULL)
    {
        if (tempSep->state == 1)
        {
            printf("\t|%10s |%12s | \n", tempSep->name, tempSep->type);
        }
        tempSep = tempSep->suiv;
    }
}
// the function addType for the variables 
void addType(char *name, char *type)
{
    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(tempVar->name, name) == 0)
        {
            strcpy(tempVar->type, type);
            break;
        }
        tempVar = tempVar->suiv;
    }
}
// the function addVal for the variables
void addVal(char *name, float val)
{
    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(tempVar->name, name) == 0)
        {
            tempVar->val = val;
            break;
        }
        tempVar = tempVar->suiv;
    }
}
// the function addVarplace for the constants
void addVarPlace(char *name, char *varPlace)
{
    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(tempVar->name, name) == 0)
        {
            strcpy(tempVar->varPlace, varPlace);
            break;
        }
        tempVar = tempVar->suiv;
    }
}

