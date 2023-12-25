%{
#include "syntaxical_file.tab.h"
extern int nbligne;
extern int col;
#include "symbolsTable.h"
extern YYSTYPE yylval;
%}
lettre         [a-zA-Z]
chiffre        [0-9]
NATUREL        {chiffre}+
INTEGERPOSITIF (\+)[ ]*{NATUREL}
INTEGERNEGATIF (\-)[ ]*{NATUREL}
INTEGER        {NATUREL}
REALNEGATIF    \-{INTEGER}\.{NATUREL}
REALPOSITIF    \+{INTEGER}\.{NATUREL}
REAL           {INTEGER}\.{NATUREL}
identificateur {lettre}({lettre}|{chiffre}|\_){0,9}
caracter \".\"
chaine 	\".+\"
commantaire %.*;
%%
"TRUE"              { addMotCle(yytext, "mcTRUE" ,1); col = col + yyleng; return mcTRUE; }
"FALSE"             { addMotCle(yytext, "mcFALSE" ,1); col = col + yyleng; return mcFALSE; }
"INTEGER"           { addMotCle(yytext, "mcINTEGER",1); col = col + yyleng; return mcINTEGER; }
"REAL"              { addMotCle(yytext, "mcREAL", 1); col = col + yyleng; return mcREAL; }
"CHARACTER"         { addMotCle(yytext, "mcCHARACTER", 1); col = col + yyleng; return mcCHARACTER; }
"LOGICAL"           { addMotCle(yytext, "mcLOGICAL", 1); col = col + yyleng; return mcLOGICAL; }
"READ"              { addMotCle(yytext, "mcREAD", 1); col = col + yyleng; return mcREAD; }
"WRITE"             { addMotCle(yytext, "mcWRITE", 1); col = col + yyleng; return mcWRITE; }
"DIMENSION"         { addMotCle(yytext, "mcDIMENSION", 1); col = col + yyleng; return mcDIMENSION; }
"PROGRAM"           { addMotCle(yytext, "mcPROGRAM", 1); col = col + yyleng; return mcPROGRAM; }
"END"               { addMotCle(yytext, "mcEND", 1); col = col + yyleng; afficher();  return mcEND;}
"ROUTINE"           { addMotCle(yytext, "mcROUTINE", 1); col = col + yyleng; return mcROUTINE; }
"ENDR"              { addMotCle(yytext, "mcENDR", 1); col = col + yyleng; return mcENDR; }
"CALL"              { addMotCle(yytext, "mcCALL", 1); col = col + yyleng; return mcCALL; }
"IF"                { addMotCle(yytext, "mcIF", 1); col = col + yyleng; return mcIF; }
"THEN"              { addMotCle(yytext, "mcTHEN", 1); col = col + yyleng; return mcTHEN; }
"ELSE"              { addMotCle(yytext, "mcELSE", 1); col = col + yyleng; return mcELSE; }
"ENDIF"             { addMotCle(yytext, "mcENDIF", 1); col = col + yyleng; return mcENDIF; }
"DOWHILE"           { addMotCle(yytext, "mcDOWHILE", 1); col = col + yyleng; return mcDOWHILE; }
"ENDO"              { addMotCle(yytext, "mcENDO", 1); col = col + yyleng; return mcENDO; }
"EQUIVALENCE"       { addMotCle(yytext, "PartageMemoire", 1); col = col + yyleng; return PartageMemoire; }
"OR"                { addMotCle(yytext, "OR", 1); col = col + yyleng; return OR; }
"AND"               { addMotCle(yytext, "AND", 1); col = col + yyleng; return AND; }
"GT"                { addMotCle(yytext, "GT", 1); col = col + yyleng; return GT; }
"EQ"                { addMotCle(yytext, "EQ", 1); col = col + yyleng; return EQ; }
"GE"                { addMotCle(yytext, "GE", 1); col = col + yyleng; return GE; }
"NE"                { addMotCle(yytext, "NE", 1); col = col + yyleng; return NE; }
"LE"                { addMotCle(yytext, "LE", 1); col = col + yyleng; return LE; }
"LT"                { addMotCle(yytext, "LT", 1); col = col + yyleng; return LT; }
"="                 { addSep(yytext, "eq", 1);col = col + yyleng; return eq; }
";"                 { addSep(yytext, "point_virgule", 1); col = col + yyleng; return point_virgule; }
"+"                 { addSep(yytext, "plus", 1); col = col + yyleng; return plus; }
"-"                 { addSep(yytext, "mpins", 1); col = col + yyleng; return mpins; }
"/"                 { addSep(yytext, "division", 1); col = col + yyleng; return division; }
"|"                 { addSep(yytext, "or", 1); col = col + yyleng; return or ; }
"@"                 { addSep(yytext, "aro", 1); col = col + yyleng; return aro; }
"*"                 { addSep(yytext, "etoile", 1); col = col + yyleng; return etoile; }
","                 { addSep(yytext, "virgule", 1); col = col + yyleng; return virgule; }
"("                 { addSep(yytext, "paraO", 1); col = col + yyleng; return paraO; }
")"                 { addSep(yytext, "paraF", 1); col = col + yyleng; return paraF; }
"."                 { addSep(yytext, "point", 1); col = col + yyleng; return point; }
"\""                 { addSep(yytext, "point", 1); col = col + yyleng; return gui; }
[ \t]               { col = col + strlen(yytext); }
\n {col =1; nbligne++;}
{INTEGER}        { addConstant(yytext, "mcINTEGER", 1, atof(yytext)); col = col + yyleng; return INTEGER; }
{REAL}           { addConstant(yytext, "mcREAL", 1, atof(yytext)); col = col + yyleng; return REAL; }
{identificateur} { addVariable(yytext,"TypeVariable", 1, 0.0, ""); col = col + yyleng; return identificateur; }
{INTEGERPOSITIF} { addConstant(yytext, "INTEGER", 1, atof(yytext)); col = col + yyleng; return INTEGERPOSITIF; }
{INTEGERNEGATIF} { addConstant(yytext, "INTEGER", 1, atof(yytext)); col = col + yyleng; return INTEGERNEGATIF; }
{caracter}       { addConstant(yytext, "CHARACTER", 1, (float)yytext[1]); col = col + yyleng; return caracter; }
{chaine}         { addConstant(yytext, "STRING", 1, 0.0); col = col + yyleng; return chaine; }
{commantaire} 
{REALNEGATIF}    { addConstant(yytext, "REAL", 1, atof(yytext)); col = col + yyleng; return REALNEGATIF; }
{REALPOSITIF}    { addConstant(yytext, "REAL", 1, atof(yytext)); col = col + yyleng; return REALPOSITIF; }
. {printf("erreur lexical a la ligne %d  la col %d entite %s \n",nbligne,col, yytext);}

%%
