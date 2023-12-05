/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
typedef struct   
{
  int state; 
  char name[20];
  char code[20];
  char type[20];
  float val;
  int globale; /* si la variable est globale --> globle = 1 
                                 sinon (local --> globale = 0)*/
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

void addVariable(variable **tabVar, char *name, char *type, int state, float val, int globale)
{   
    variable *newVar = (variable*)malloc(sizeof(variable));
    newVar->state = state;
    strcpy(newVar->name, name);
    strcpy(newVar->type, type);
    newVar->val = val;
    newVar->globale = globale;
    newVar->suiv = *tabVar;
    *tabVar = newVar;
}

void addConstant(constant **tabConst, char *name, char *type, int state, float val)
{
    constant *newConst = (constant*)malloc(sizeof(constant));
    newConst->state = state;
    strcpy(newConst->name, name);
    strcpy(newConst->type, type);
    newConst->val = val;
    newConst->suiv = *tabConst;
    *tabConst = newConst;
}

void addElt(elt **tab, char *name, char *type, int state)
{
    elt *newElt = (elt*)malloc(sizeof(elt));
    newElt->state = state;
    strcpy(newElt->name, name);
    strcpy(newElt->type, type);
    newElt->suiv = *tab;
    *tab = newElt;
}
// elt tabs[40],tabm[40];
elt *tabs;
elt *tabm;
// extern char sav[20];
// char chaine [] = "";
