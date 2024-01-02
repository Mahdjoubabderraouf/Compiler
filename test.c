#include <stdio.h>
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
