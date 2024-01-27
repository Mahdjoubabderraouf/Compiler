
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mcTRUE = 258,
     mcFALSE = 259,
     mcINTEGER = 260,
     mcREAL = 261,
     mcCHARACTER = 262,
     mcLOGICAL = 263,
     mcREAD = 264,
     mcWRITE = 265,
     mcDIMENSION = 266,
     mcPROGRAM = 267,
     mcEND = 268,
     mcROUTINE = 269,
     mcENDR = 270,
     mcCALL = 271,
     mcIF = 272,
     mcTHEN = 273,
     mcELSE = 274,
     mcENDIF = 275,
     mcDOWHILE = 276,
     mcENDDO = 277,
     PartageMemoire = 278,
     OR = 279,
     AND = 280,
     GT = 281,
     EQ = 282,
     GE = 283,
     NE = 284,
     LE = 285,
     LT = 286,
     eq = 287,
     point_virgule = 288,
     point = 289,
     plus = 290,
     mpins = 291,
     division = 292,
     or = 293,
     aro = 294,
     etoile = 295,
     virgule = 296,
     paraO = 297,
     paraF = 298,
     identificateur = 299,
     INTEGER = 300,
     INTEGERPOSITIF = 301,
     INTEGERNEGATIF = 302,
     REAL = 303,
     caracter = 304,
     chaine = 305,
     commantaire = 306,
     REALNEGATIF = 307,
     REALPOSITIF = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 60 ".\\syntaxical_file.y"
 
   int entier;
   float real; 
   char* string;
   char caracter;



/* Line 1676 of yacc.c  */
#line 114 "syntaxical_file.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


