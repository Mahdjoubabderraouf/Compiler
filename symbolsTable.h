/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/******les siganatures des fonctions *********/

void* RechercherVar_et_sa_Place (char *name,char *place);
int   RechercherConst(char *name);
int   RechercherSep(char *name);
int   RechercherMotCle(char *name);
void addVariable(char *name, char *type,char* code, int state, char* val, char varPlace[]);
void addConstant(char *name, char *type, int state, float val);
void addMotCle(char *name, char *type, int state);
void addSep(char *name, char *type, int state);
void afficher();
void addType(char *name, char *type);
void addVal(char *name, char * val);
void addVarPlace(char *name, char *varPlace);


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

typedef struct variable
{
    int state;
    char name[20];
    char code[20];
    char type[20];
    char val [20];
    char varPlace[20]; /* la place de la variable  */
    void *suiv;

} variable;

typedef struct tableau {

    int state;
    char name[20];
    char code[20];
    char type[20];
    char val [20];
    char varPlace[20]; /* la place de la variable  */
    void *suiv;

    int size; 

} tableau;

typedef struct matrice {
    
    int state;
    char name[20];
    char code[20];
    char type[20];
    char val [20];
    char varPlace[20]; /* la place de la variable  */
    void *suiv;
    
    int col,row; 

} matrice;

/***Step 2: Déclaration des variables globales ***/

void *listVar = NULL;
void *dernierVar = NULL;
constant *listConst = NULL;
constant *dernierConst = NULL;
elt *listSep = NULL;
elt *dernierSep = NULL;
elt *listMotCle = NULL;
elt *dernierMotCle = NULL;

/***Step 3: Définition des fonctions ***/

void* RechercherVar_et_sa_Place (char *name,char *place)
{
    void *tempVar = listVar;
    
    while (tempVar != NULL)
    {
        if (strcmp(place,((variable *)tempVar)->varPlace) == 0 && strcmp(name,((variable *)tempVar)->name)==0 )
            return tempVar;
        else if (strcmp(place,((tableau *)tempVar)->varPlace) == 0 && strcmp(name,((tableau *)tempVar)->name)==0 )
            return tempVar;
        else if (strcmp(place,((matrice *)tempVar)->varPlace) == 0 && strcmp(name,((matrice *)tempVar)->name)==0 )
            return tempVar;
        tempVar = ((variable *)tempVar)->suiv; // move to the next variable
    }
    return NULL ; // variable is not declared in the function place, you can declare it
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

void addVariable(char *name, char *type, char* code, int state, char* val, char varPlace[]) {
    if (listVar == NULL) {
        if (strcmp(code, "Matrice") == 0) {
            listVar = malloc(sizeof(matrice));
            ((matrice *)listVar)->state = state;
            strcpy(((matrice *)listVar)->name, name);
            strcpy(((matrice *)listVar)->type, type);
            strcpy(((matrice *)listVar)->code, code);
            strcpy(((matrice *)listVar)->val, val);
            strcpy(((matrice *)listVar)->varPlace, varPlace);
            ((matrice *)listVar)->suiv = NULL;
            dernierVar = listVar;
        } else if (strcmp(code, "Tableau") == 0) {
            listVar = malloc(sizeof(tableau));
            ((tableau *)listVar)->state = state;
            strcpy(((tableau *)listVar)->name, name);
            strcpy(((tableau *)listVar)->type, type);
            strcpy(((tableau *)listVar)->code, code);
            strcpy(((tableau *)listVar)->val, val);
            strcpy(((tableau *)listVar)->varPlace, varPlace);
            ((tableau *)listVar)->suiv = NULL;
            dernierVar = listVar;
        } else {
            listVar = malloc(sizeof(variable));
            ((variable *)listVar)->state = state;
            strcpy(((variable *)listVar)->name, name);
            strcpy(((variable *)listVar)->type, type);
            strcpy(((variable *)listVar)->code, code);
            strcpy(((variable *)listVar)->val, val);
            strcpy(((variable *)listVar)->varPlace, varPlace);
            ((variable *)listVar)->suiv = NULL;
            dernierVar = listVar;
        }
    } else {
        if (RechercherVar_et_sa_Place(name, varPlace) == NULL) {
            void *newVar;
            if (strcmp(code, "Matrice") == 0) {
                newVar = malloc(sizeof(matrice));
            } else if (strcmp(code, "Tableau") == 0) {
                newVar = malloc(sizeof(tableau));
            } else {
                newVar = malloc(sizeof(variable));
            }
            ((variable *)newVar)->state = state;
            strcpy(((variable *)newVar)->name, name);
            strcpy(((variable *)newVar)->type, type);
            strcpy(((variable *)newVar)->code, code);
            strcpy(((variable *)newVar)->val, val);
            strcpy(((variable *)newVar)->varPlace, varPlace);
            ((variable *)newVar)->suiv = NULL;
            ((variable *)dernierVar)->suiv = newVar;
            dernierVar = newVar;
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
    printf("_________________________________________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite | Var_Place | Demension 1 | Demension 2| \n");
    printf("_________________________________________________________________________________________________\n");

    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (tempVar->state == 1)
        {
            printf("\t|%11s |%13s |%12s | %10s | %s | ", tempVar->name, tempVar->code, tempVar->type, tempVar->val,tempVar->varPlace);
            if (strcmp (tempVar->code,"Tableau" ) == 0) { printf ("%10d |",((tableau*) tempVar)->size);}
            else if (strcmp (tempVar->code,"Matrice" ) == 0) { printf ("%10d |%10d |",((matrice*) tempVar)->row,((matrice*) tempVar)->col);}
            printf("\n");
        }
        tempVar = tempVar->suiv;
    }

    constant *tempConst = listConst;
    printf("\n/***************Table des symboles constants*************/\n");
    printf("____________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite |\n");
    printf("____________________________________________________________________\n");

    while (tempConst != NULL)
    {
        printf("\t|%11s |%13s |%12s | %10f \n", tempConst->name, tempConst->code, tempConst->type, tempConst->val);
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
void addVal(char *name, char * val)
{
    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(tempVar->name, name) == 0)
        {
            strcpy (tempVar->val ,val);
            break;
        }
        tempVar = tempVar->suiv;
    }
}
// the function addVarplace for the variable.
void addVarPlace(char *name, char *varPlace)
{
    void *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(((variable *)tempVar)->name, name) == 0)
        {
            strcpy(((variable *)tempVar)->varPlace, varPlace);
            break;
        }
        else if (strcmp(((tableau *)tempVar)->name, name) == 0)
        {
            strcpy(((tableau *)tempVar)->varPlace, varPlace);
            break;
        }
        else if (strcmp(((matrice *)tempVar)->name, name) == 0)
        {
            strcpy(((matrice *)tempVar)->varPlace, varPlace);
            break;
        }
        tempVar = ((variable *)tempVar)->suiv;
    }
}
// the function addSize for the table
int addSize(char *name,char * varPlace, int size)
{

    tableau *tempVar =(tableau*) RechercherVar_et_sa_Place (name,varPlace);
    
        if (tempVar != NULL)
        {
            tempVar->size = size;
           return 1;
        }
    return 0 ;
    
}
// the function addSize for the matrix
int addRowCol(char *name,char* varPlace ,int row, int col)
{
    matrice *tempVar =(matrice*) RechercherVar_et_sa_Place (name,varPlace);

        if (tempVar != NULL)
        {
            tempVar->row = row;
            tempVar->col = col;
            return 1;
        }
    return 0; 
}

