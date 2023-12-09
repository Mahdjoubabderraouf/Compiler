#include <stdio.h>
#include <stdlib.h>
#include "symbolsTable.h"

// Function declaration

int main(int argc, char *argv[])
{
    float val = 1.2;
    addMotCle("FALSE" , "mcFALSE" ,1);
    addVariable("yey","y", 1 , val, "Pr");
    addSep("y", "y", 1);
    addConstant("BD" ,"INT", 0 ,val);
    afficher();
    return 0;
}
