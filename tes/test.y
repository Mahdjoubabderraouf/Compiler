%{
#include <stdio.h>
#include <stdlib.h>
#include "sant.tab.h"
%   }
%start S 
%token eq 
%token virgule 
%token identificateur
%token INTEGER
%%
S : identificateur eq INTEGER virgule ; 
%%
main()
{
yyparse();
}
yywrap()
{}