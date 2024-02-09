/****************CRÉATION DE LA TABLE DES SYMBOLES ******************/
/*** Étape 1 : Définition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/****** Les signatures des fonctions *********/

// Recherche une variable et sa place dans la table des symboles
void* RechercherVar_et_sa_Place(char *name, char *place);

// Recherche une constante dans la table des symboles
int RechercherConst(char *name);

// Recherche un séparateur dans la table des symboles
int RechercherSep(char *name);

// Recherche un mot-clé dans la table des symboles
int RechercherMotCle(char *name);

// Ajoute une variable à la table des symboles
int addVariable(char *name, char *type, char *code, int state, char *val, char varPlace[]);

// Ajoute une constante à la table des symboles
void addConstant(char *name, char *type, int state, float val);

// Ajoute un mot-clé à la table des symboles
void addMotCle(char *name, char *type, int state);

// Ajoute un séparateur à la table des symboles
void addSep(char *name, char *type, int state);

// Affiche le contenu de la table des symboles
void afficher();

// Ajoute le type d'une variable, tableau ou matrice
void addType(char *name, char *type);

// Ajoute une valeur à une variable, tableau ou matrice
void addVal(char *name, char *val);

// Ajoute la place d'une variable dans la table des symboles
void addVarPlace(char *name, char *varPlace);

// Ajoute la taille d'un tableau
int addSize(char *name, char *varPlace, int size);

// Ajoute le nombre de lignes et de colonnes d'une matrice
int addRowCol(char *name, char* varPlace, int row, int col);

// Vérifie si une variable est déclarée
int variableisDeclared(char *name, char *place);

// Vérifie si un tableau est déclaré
int tableisDeclared(char *name, char *place);

// Vérifie si une matrice est déclarée
int matrixisDeclared(char *name, char *place);

// Retourne le type d'une variable, tableau ou matrice
char* getVariableType(char *name, char *place,char code[100]);

// Retourne la taille d'un tableau
int getSize(char *name, char *place);

// Retourne le nombre de lignes d'une matrice
int getRowCol(char *name, char *place, int *row, int *col);

// Vérifie si une fonction est déclarée
int functionisDeclared(char *name);

// Retourne la valeur d'une variable, tableau ou matrice
char* getVal(char *name, char *place);




/******************************************/

// Définition des structures de données
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
    char val[20];
    char varPlace[20]; /* la place de la variable  */
    void *suiv;
} variable;

typedef struct tableau
{
    int state;
    char name[20];
    char code[20];
    char type[20];
    char val[20];
    char varPlace[20]; /* la place de la variable  */
    void *suiv;
    int size;
} tableau;

typedef struct matrice
{
    int state;
    char name[20];
    char code[20];
    char type[20];
    char val[20];
    char varPlace[20]; /* la place de la variable  */
    void *suiv;
    int col, row;
} matrice;

/*** Étape 2 : Déclaration des variables globales ***/
void *listVar = NULL;
void *dernierVar = NULL;
constant *listConst = NULL;
constant *dernierConst = NULL;
elt *listSep = NULL;
elt *dernierSep = NULL;
elt *listMotCle = NULL;
elt *dernierMotCle = NULL;

/*** Étape 3 : Définition des fonctions ***/
void* RechercherVar_et_sa_Place(char *name, char *place)
{
    void *tempVar = listVar;// tete de la file 

    while (tempVar != NULL)
    {
        // Recherche de la variable dans la table des symboles
        if (strcmp(place, ((variable *)tempVar)->varPlace) == 0 && strcmp(name, ((variable *)tempVar)->name) == 0) 
        return tempVar;

        if (strcmp(place, ((tableau *)tempVar)->varPlace) == 0 && strcmp(name, ((tableau *)tempVar)->name) == 0) 
        return tempVar;
        
        if (strcmp(place, ((matrice *)tempVar)->varPlace) == 0 && strcmp(name, ((matrice *)tempVar)->name) == 0) 
        return tempVar;

        
        tempVar = ((variable *)tempVar)->suiv; // passer à la variable suivante
    }
    tempVar = listVar;
    while (tempVar != NULL)
    {

        if (strcmp("PROGRAM", ((variable *)tempVar)->varPlace) == 0 && strcmp(name, ((variable *)tempVar)->name) == 0)
        {
            if (strcmp("idf fonction", ((variable *)tempVar)->code)==0)
            {
                return tempVar;
            }
        }
        tempVar = ((variable *)tempVar)->suiv; // passer à la variable suivante
    }
    
    return NULL; // la variable n'est pas déclarée à l'endroit spécifié, vous pouvez la déclarer
}

int RechercherConst(char *name)
{
    constant *tempConst = listConst;
    while (tempConst != NULL)
    {
        // Recherche de la constante dans la table des symboles
        if (strcmp(tempConst->name, name) == 0)
            return 1; // Élément trouvé dans listConst
        tempConst = tempConst->suiv;
    }
    return 0; // Élément non trouvé
}

int RechercherSep(char *name)
{
    elt *tempSep = listSep;
    while (tempSep != NULL)
    {
        // Recherche du séparateur dans la table des symboles
        if (strcmp(tempSep->name, name) == 0)
            return 1; // Élément trouvé dans listSep
        tempSep = tempSep->suiv;
    }
    return 0; // Élément non trouvé
}

int RechercherMotCle(char *name)
{
    elt *tempMotCle = listMotCle;
    while (tempMotCle != NULL)
    {
        // Recherche du mot-clé dans la table des symboles
        if (strcmp(tempMotCle->name, name) == 0)
            return 1; // Élément trouvé dans listMotCle
        tempMotCle = tempMotCle->suiv;
    }
    return 0; // Élément non trouvé
}  

int addVariable(char *name, char *type, char* code, int state, char* val, char varPlace[]) 
{
    if (listVar == NULL) {
        // Si la liste des variables est vide
        if (strcmp(code, "Matrice") == 0) 
        {
            // Si le code indique une matrice
            listVar = malloc(sizeof(matrice));
            ((matrice *)listVar)->state = state;
            strcpy(((matrice *)listVar)->name, name);
            strcpy(((matrice *)listVar)->type, type);
            strcpy(((matrice *)listVar)->code, code);
            strcpy(((matrice *)listVar)->val, val);
            strcpy(((matrice *)listVar)->varPlace, varPlace);
            ((matrice *)listVar)->suiv = NULL;
            dernierVar = listVar; 

            return 0;
        } 
        if (strcmp(code, "Tableau") == 0 || strcmp(code, "idf fonction") == 0 ) 
        {
            // Si le code indique un tableau
            listVar = malloc(sizeof(tableau));
            ((tableau *)listVar)->state = state;
            strcpy(((tableau *)listVar)->name, name);
            strcpy(((tableau *)listVar)->type, type);
            strcpy(((tableau *)listVar)->code, code);
            strcpy(((tableau *)listVar)->val, val);
            strcpy(((tableau *)listVar)->varPlace, varPlace);
            ((tableau *)listVar)->suiv = NULL;
            dernierVar = listVar;
            return 0;
        } 
        // Si le code n'indique ni une matrice ni un tableau
        listVar = malloc(sizeof(variable));
        ((variable *)listVar)->state = state;
        strcpy(((variable *)listVar)->name, name);
        strcpy(((variable *)listVar)->type, type);
        strcpy(((variable *)listVar)->code, code);
        strcpy(((variable *)listVar)->val, val);
        strcpy(((variable *)listVar)->varPlace, varPlace);
        ((variable *)listVar)->suiv = NULL;
        dernierVar = listVar;
        return 0;

    }

    // Si la liste des variables n'est pas vide
    if (RechercherVar_et_sa_Place(name, varPlace) == NULL)
    {   
        // Si la variable n'existe pas à l'endroit spécifié
        void *newVar;
        if (strcmp(code, "Matrice") == 0) {
            // Si le code indique une matrice
            newVar = malloc(sizeof(matrice));
        } else if (strcmp(code, "Tableau") == 0) {
            // Si le code indique un tableau
            newVar = malloc(sizeof(tableau));
        } else {
            // Si le code n'indique ni une matrice ni un tableau
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
        return 0;
    } 
    return 1;
}

// Ajoute une constante à la table des symboles
void addConstant(char *name, char *type, int state, float val)
{
    if (RechercherConst(name) == 0)
    {
        // Si la constante n'existe pas
        if (listConst == NULL)
        {
            // Si la liste des constantes est vide
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
            // Si la liste des constantes n'est pas vide
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

// Ajoute un mot-clé à la table des symboles
void addMotCle(char *name, char *type, int state)
{
    if (RechercherMotCle(name) == 0) // L'élément n'existe pas
    {
        if (listMotCle == NULL)
        {
            // Si la liste des mots-clés est vide
            listMotCle = (elt *)malloc(sizeof(elt));
            listMotCle->state = state;
            strcpy(listMotCle->name, name);
            strcpy(listMotCle->type, type);
            listMotCle->suiv = NULL;
            dernierMotCle = listMotCle;
        }
        else
        {
            // Si la liste des mots-clés n'est pas vide
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

// Ajoute un séparateur à la table des symboles
void addSep(char *name, char *type, int state)
{
    if (RechercherSep(name) == 0) // L'élément n'existe pas
    {
        if (listSep == NULL)
        {
            // Si la liste des séparateurs est vide
            listSep = (elt *)malloc(sizeof(elt));
            listSep->state = state;
            strcpy(listSep->name, name);
            strcpy(listSep->type, type);
            listSep->suiv = NULL;
            dernierSep = listSep;
        }
        else
        {
            // Si la liste des séparateurs n'est pas vide
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

// Fonction pour afficher la table des symboles
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
            if (strcmp(tempVar->code,"Tableau") == 0 || strcmp(tempVar->code, "idf fonction") == 0) { printf ("%10d |",((tableau*) tempVar)->size);}
            else if (strcmp(tempVar->code,"Matrice") == 0) { printf ("%10d |%10d |",((matrice*) tempVar)->row,((matrice*) tempVar)->col);}
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

// Fonction pour ajouter le type d'une variable, tableau ou matrice
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

// Fonction pour ajouter la valeur d'une variable
void addVal(char *name, char * val)
{
    variable *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(tempVar->name, name) == 0)
        {
            strcpy(tempVar->val ,val);
            break;
        }
        tempVar = tempVar->suiv;
    }
}

// Fonction pour ajouter la place d'une variable
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

// Fonction pour ajouter la taille d'un tableau
int addSize(char *name, char * varPlace, int size)
{
    tableau *tempVar =(tableau*) RechercherVar_et_sa_Place (name,varPlace);
    
    if (tempVar != NULL)
    {
        tempVar->size = size;
        return 0;
    }
    return 1;
}

// Fonction pour ajouter le nombre de lignes et de colonnes d'une matrice
int addRowCol(char *name, char* varPlace, int row, int col)
{
    matrice *tempVar =(matrice*) RechercherVar_et_sa_Place (name,varPlace);

    if (tempVar != NULL)
    {
        tempVar->row = row;
        tempVar->col = col;
        return 0;
    }
    return 1; 
}

// Fonction pour viréfier si un identificateur simple est déclaré
int variableisDeclared(char *name, char *place)
{
 
   void* cond = RechercherVar_et_sa_Place(name, place);
        if ( cond == NULL || strcmp(((variable*)cond)->code,"Var Simple")!=0 )
        {
            return 1; 
        }
    return 0;
}

// Fonction pour viréfier si un tableau est déclaré
int tableisDeclared(char *name, char *place)
{
   void* cond = RechercherVar_et_sa_Place(name, place);
        if ( cond == NULL || strcmp(((variable*)cond)->code,"Tableau")!=0 )
        {
            return 1; 
        }
    return 0;
}

// Fonction pour viréfier si une matrice est déclaré
int matrixisDeclared(char *name, char *place)
{
   void* cond = RechercherVar_et_sa_Place(name, place);
        if ( cond == NULL || strcmp(((variable*)cond)->code,"Matrice")!=0 )
        {
            return 1; 
        }
    return 0;
}

// Fonction reteurne le type de la variable, table, or matrix
char* getVariableType(char *name, char *place,char code[100])
{
    void *cond = RechercherVar_et_sa_Place(name, place);
    if (cond != NULL)
    {
        if (strcmp(((variable *)cond)->code, "Var Simple") == 0 )
        {
            return ((variable *)cond)->type;
        }
        else  if (strcmp(((tableau *)cond)->code, "idf fonction") == 0) 
        {   
            strcpy((code),((tableau *)cond)->code);
            return ((tableau *)cond)->type;
        }
        else if (strcmp(((tableau *)cond)->code, "Tableau") == 0)
        {
            return ((tableau *)cond)->type;
        }
        else if (strcmp(((matrice *)cond)->code, "Matrice") == 0)
        {
            return ((matrice *)cond)->type;
        }
    }
    return "Unknown";
}

// Fonction retourne la taille d'un tableau
int getSize(char *name, char *place)
{
    void *cond = RechercherVar_et_sa_Place(name, place);
    if (cond != NULL)
    {
        if (strcmp(((tableau *)cond)->code, "Tableau" )|| strcmp(((tableau *)cond)->code, "idf fonction" ) == 0)
        {
            return ((tableau *)cond)->size;
        }
    }
    return 0;
}
 
// Fonction retourner Row & Colmun
int getRowCol(char *name, char *place, int *row, int *col)
{
    void *cond = RechercherVar_et_sa_Place(name, place);
    if (cond != NULL)
    {
        if (strcmp(((matrice *)cond)->code, "Matrice") == 0)
        {
            *row = ((matrice *)cond)->row;
            *col = ((matrice *)cond)->col;
            return 0;
        }
    }
    return 1;
}

// check if function declared 
int functionisDeclared(char *name)
{
    void *tempVar = listVar;
    while (tempVar != NULL)
    {
        if (strcmp(((variable *)tempVar)->name, name) == 0)
        {
            if (strcmp(((variable *)tempVar)->code, "idf fonction") == 0)
            {
                return 0;
            }
        }
        tempVar = ((variable *)tempVar)->suiv;
    }
    return 1;
}
//Fonction retourner la valeur 
char* getVal(char *name, char *place)
{
    void *cond = RechercherVar_et_sa_Place(name, place);
    if (cond != NULL)
    {
        if (strcmp(((variable *)cond)->code, "Var Simple") == 0)
        {
            return ((variable *)cond)->val;
        }
        else if (strcmp(((tableau *)cond)->code, "Tableau")==0||strcmp(((tableau *)cond)->code, "idf fonction" )==0)
        {
            return ((tableau *)cond)->val;
        }
        else if (strcmp(((matrice *)cond)->code, "Matrice") == 0)
        {
            return ((matrice *)cond)->val;
        }
    }
    return "Unknown";
}
