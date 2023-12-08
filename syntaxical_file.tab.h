/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAXICAL_FILE_TAB_H_INCLUDED
# define YY_YY_SYNTAXICAL_FILE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    mcTRUE = 258,                  /* mcTRUE  */
    mcFALSE = 259,                 /* mcFALSE  */
    mcINTEGER = 260,               /* mcINTEGER  */
    mcREAL = 261,                  /* mcREAL  */
    mcCHARACTER = 262,             /* mcCHARACTER  */
    mcLOGICAL = 263,               /* mcLOGICAL  */
    mcREAD = 264,                  /* mcREAD  */
    mcWRITE = 265,                 /* mcWRITE  */
    mcDIMENSION = 266,             /* mcDIMENSION  */
    mcPROGRAM = 267,               /* mcPROGRAM  */
    mcEND = 268,                   /* mcEND  */
    mcROUTINE = 269,               /* mcROUTINE  */
    mcENDR = 270,                  /* mcENDR  */
    mcCALL = 271,                  /* mcCALL  */
    mcIF = 272,                    /* mcIF  */
    mcTHEN = 273,                  /* mcTHEN  */
    mcELSE = 274,                  /* mcELSE  */
    mcENDIF = 275,                 /* mcENDIF  */
    mcDOWHILE = 276,               /* mcDOWHILE  */
    mcENDO = 277,                  /* mcENDO  */
    PartageMemoire = 278,          /* PartageMemoire  */
    OR = 279,                      /* OR  */
    AND = 280,                     /* AND  */
    GT = 281,                      /* GT  */
    EQ = 282,                      /* EQ  */
    GE = 283,                      /* GE  */
    NE = 284,                      /* NE  */
    LE = 285,                      /* LE  */
    LT = 286,                      /* LT  */
    Fonction_i = 287,              /* Fonction_i  */
    eq = 288,                      /* eq  */
    point_virgule = 289,           /* point_virgule  */
    plus = 290,                    /* plus  */
    mpins = 291,                   /* mpins  */
    division = 292,                /* division  */
    or = 293,                      /* or  */
    aro = 294,                     /* aro  */
    etoile = 295,                  /* etoile  */
    virgule = 296,                 /* virgule  */
    paraO = 297,                   /* paraO  */
    paraF = 298,                   /* paraF  */
    DIMENSIONTAB = 299,            /* DIMENSIONTAB  */
    DIMENSIONMAT = 300,            /* DIMENSIONMAT  */
    identificateur = 301,          /* identificateur  */
    INTEGER = 302,                 /* INTEGER  */
    INTEGERPOSITIF = 303,          /* INTEGERPOSITIF  */
    INTEGERNEGATIF = 304,          /* INTEGERNEGATIF  */
    REAL = 305,                    /* REAL  */
    caracter = 306,                /* caracter  */
    chaine = 307,                  /* chaine  */
    commantaire = 308,             /* commantaire  */
    REALNEGATIF = 309,             /* REALNEGATIF  */
    REALPOSITIF = 310,             /* REALPOSITIF  */
    UNARY_OPERATOR = 311           /* UNARY_OPERATOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAXICAL_FILE_TAB_H_INCLUDED  */