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
 } variable;// les variables        

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

// element tab[1000];
variable *tabVar;
constant *tabConst;
// elt tabs[40],tabm[40];
elt *tabs;
elt *tabm;
// extern char sav[20];
// char chaine [] = "";
