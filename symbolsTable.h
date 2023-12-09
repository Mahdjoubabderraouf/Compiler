/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct variable variable; // Forward declaration

typedef struct variable {  
 
    int state;
    char name[20];
    char code[20];
    char type[20];
    float val;
    char *varPlace; /* la place de la variable  */
    struct variable* suiv;
}variable;
      

typedef struct constant {
    int state;
    char name[20];
    char code[20];
    char type[20];
    float val;
    struct constant* suiv;
} constant;

typedef struct elt {
    int state;
    char name[20];
    char type[20];
    struct elt* suiv;
} elt; // séparateurs & des mots clés


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


void addVariable(char *name, char *type, int state, float val, char varPlace[])
{   if (RechercherVar(name) == 0 )
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
else
{
    printf("La variable %s existe déjà\n", name);
}

void addConstant(char *name, char *type, int state, float val)
{
    if (RechercherVar(name) == 0)
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
    else
    {
        printf("The constant %s already exists\n", name);
    }
}
}

void addMotCle(char *name, char *type, int state)
{ 
    if (RechercherMotCle(name) == 0) // Element does not exist
    {
        if (listMotCle==NULL)
        {
            listMotCle = (elt*)malloc(sizeof(elt));
            listMotCle->state = state;
            strcpy(listMotCle->name, name);
            strcpy(listMotCle->type, type);
            listMotCle->suiv = NULL;
            dernierMotCle = listMotCle;
        }
        else
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
    else
    {
        printf("Le MotCle %s existe déjà\n", name);
    }
}

void addSep(char *name, char *type, int state)
{
    if (RechercherSep(name) == 0) // L'élément n'existe pas
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
    else
    {
        printf("Le séparateur %s existe déjà\n", name);
    }
}

void afficher()
{
    printf("/***************Table des symboles IDF*************/\n");
    printf("____________________________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite | Var_Place\n");
    printf("____________________________________________________________________________________\n");

    variable *tempVar = listVar;
    while(tempVar != NULL)
    {
        if(tempVar->state == 1)
        {
            printf("\t|%10s |%15s | %12s | %12lf | %10s\n", tempVar->name, tempVar->type, tempVar->val, tempVar->varPlace);
        }
        tempVar = tempVar->suiv;
    }
    printf("\n/***************Table des symboles constants*************/\n");
    printf("____________________________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite | Const_Place\n");
    printf("____________________________________________________________________________________\n");

    constant *tempConst = listConst;
    while(tempConst != NULL)
    {
        if(tempConst->state == 1)
        {
            printf("\t|%10s |%15s | %12s | %12f | %10s\n", tempConst->name, tempConst->type, tempConst->val, tempConst->constPlace);
        }
        tempConst = tempConst->suiv;
    }
    printf("\n/***************Table des symboles mots clés*************/\n");
    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    elt *tempMotCle = listMotCle;
    while(tempMotCle != NULL)
    {
        if(tempMotCle->state == 1)
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
    while(tempSep != NULL)
    {
        if(tempSep->state == 1)
        {
            printf("\t|%10s |%12s | \n", tempSep->name, tempSep->type);
        }
        tempSep = tempSep->suiv;
    }
}