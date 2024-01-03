typedef struct expression
{
    char type[100];
    char id[100];
} expression;

typedef struct qdr
{
    char oper[100];
    char op1[100];%{
#include "syntaxical_file.tab.h"
extern int nbligne;
extern int col;
#include "symbolsTable.h"
extern YYSTYPE yylval;
%}
lettre         [a-zA-Z]
chiffre        [0-9]
NATUREL        {chiffre}+
INTEGERPOSITIF (\+){NATUREL}
INTEGERNEGATIF (\-){NATUREL}
INTEGER        {NATUREL}
REALNEGATIF    \-{INTEGER}\.{NATUREL}
REALPOSITIF    \+{INTEGER}\.{NATUREL}
REAL           {INTEGER}\.{NATUREL}
identificateur {lettre}({lettre}|{chiffre}|\_){0,9}
caracter \'.\'
chaine 	\".+\"
commantaire %.*;
%%
"TRUE"              { yylval.string=strdup(yytext); addMotCle(yytext, "mcTRUE" ,1); col = col + yyleng; return mcTRUE; }
"FALSE"             { yylval.string=strdup(yytext); addMotCle(yytext, "mcFALSE" ,1); col = col + yyleng; return mcFALSE; }
"INTEGER"           { yylval.string=strdup(yytext); addMotCle(yytext, "mcINTEGER",1); col = col + yyleng; return mcINTEGER; }
"REAL"              { yylval.string=strdup(yytext); addMotCle(yytext, "mcREAL", 1); col = col + yyleng; return mcREAL; }
"CHARACTER"         { yylval.string=strdup(yytext); addMotCle(yytext, "mcCHARACTER", 1); col = col + yyleng; return mcCHARACTER; }
"LOGICAL"           { yylval.string=strdup(yytext); addMotCle(yytext, "mcLOGICAL", 1); col = col + yyleng; return mcLOGICAL; }
"READ"              { addMotCle(yytext, "mcREAD", 1); col = col + yyleng; return mcREAD; }
"WRITE"             { addMotCle(yytext, "mcWRITE", 1); col = col + yyleng; return mcWRITE; }
"DIMENSION"         { addMotCle(yytext, "mcDIMENSION", 1); col = col + yyleng; return mcDIMENSION; }
"PROGRAM"           { addMotCle(yytext, "mcPROGRAM", 1); col = col + yyleng; return mcPROGRAM; }
"END"               { addMotCle(yytext, "mcEND", 1); col = col + yyleng;  return mcEND;}
"ROUTINE"           { addMotCle(yytext, "mcROUTINE", 1); col = col + yyleng; return mcROUTINE; }
"ENDR"              { addMotCle(yytext, "mcENDR", 1); col = col + yyleng; return mcENDR; }
"CALL"              { addMotCle(yytext, "mcCALL", 1); col = col + yyleng; return mcCALL; }
"IF"                { addMotCle(yytext, "mcIF", 1); col = col + yyleng; return mcIF; }
"THEN"              { addMotCle(yytext, "mcTHEN", 1); col = col + yyleng; return mcTHEN; }
"ELSE"              { addMotCle(yytext, "mcELSE", 1); col = col + yyleng; return mcELSE; }
"ENDIF"             { addMotCle(yytext, "mcENDIF", 1); col = col + yyleng; return mcENDIF; }
"DOWHILE"           { addMotCle(yytext, "mcDOWHILE", 1); col = col + yyleng; return mcDOWHILE; }
"ENDDO"             { addMotCle(yytext, "mcENDDO", 1); col = col + yyleng; return mcENDDO; }
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
[ \t]               { col = col + strlen(yytext); }
\n                  { col =1; nbligne++;}
{INTEGER}           { yylval.entier=atoi(yytext); addConstant(yytext, "INTEGER", 1, atof(yytext)); col = col + yyleng; return INTEGER; }
{REAL}              { yylval.real=atof(yytext);   addConstant(yytext, "REAL", 1, atof(yytext)); col = col + yyleng; return REAL; }
{identificateur}    { yylval.string=strdup(yytext); col = col + yyleng; return identificateur; }
{INTEGERPOSITIF}    { yylval.entier=atoi(yytext);char str[20] ; sprintf(str,"%d",atoi(yytext)); addConstant(str, "INTEGER", 1, atoi(yytext)); col = col + yyleng; return INTEGERPOSITIF; }
{INTEGERNEGATIF}    { yylval.entier=atoi(yytext); addConstant(yytext, "INTEGER", 1, atoi(yytext)); col = col + yyleng; return INTEGERNEGATIF; }
{caracter}          { yylval.caracter=yytext[1]; addConstant(yytext, "CHARACTER", 1, (float)yytext[1]); col = col + yyleng; return caracter; }
{chaine}            { yylval.string=strdup(yytext); addConstant(yytext, "STRING", 1, 0.0); col = col + yyleng; return chaine; }
{commantaire} 
{REALNEGATIF}       { yylval.real=atof(yytext); char str[20] ; sprintf(str,"%f",atof(yytext)); addConstant(str, "REAL", 1, atof(yytext)); col = col + yyleng; return REALNEGATIF; }
{REALPOSITIF}       { yylval.real=atof(yytext); addConstant(yytext, "REAL", 1, atof(yytext)); col = col + yyleng; return REALPOSITIF; }
. {printf("erreur lexical a la ligne %d  la col %d entite %s \n",nbligne,col, yytext);}

%%

    char op2[100];
    char res[100];

} qdr;

qdr quad[1000];
extern int qc;

void quadr(char opr[], char op1[], char op2[], char res[])
{

    strcpy(quad[qc].oper, opr);
    strcpy(quad[qc].op1, op1);
    strcpy(quad[qc].op2, op2);
    strcpy(quad[qc].res, res);

    qc++;
}

void ajour_quad(int num_quad, int colon_quad, char val[])
{
    if (colon_quad == 0)
        strcpy(quad[num_quad].oper, val);
    else if (colon_quad == 1)
        strcpy(quad[num_quad].op1, val);
    else if (colon_quad == 2)
        strcpy(quad[num_quad].op2, val);
    else if (colon_quad == 3)
        strcpy(quad[num_quad].res, val);
}

void afficher_qdr()
{
    printf("*********************Les Quadruplets***********************\n");

    int i;

    for (i = 0; i < qc; i++)
    {

        printf("\n %d - ( %s  ,  %s  ,  %s  ,  %s )", i, quad[i].oper, quad[i].op1, quad[i].op2, quad[i].res);
        printf("\n--------------------------------------------------------\n");
    }
}
