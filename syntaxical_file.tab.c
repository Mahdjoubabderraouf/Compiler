/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxical_file.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern char* yytext;
int nbligne = 1;
int col = 1;

void yyerror(const char *s);

// Structure de la table des symboles
void addType(char *name, char *type);

void addVarPlace(char *name, char *varPlace);


void afficher();
int addVariable(char *name, char *type, char* code, int state, char* val, char varPlace[]);
int addSize(char *name,char * varPlace, int size);
int addRowCol(char *name,char* varPlace ,int row, int col);
void* RechercherVar_et_sa_Place (char *name,char *place);

// Vérifie si une variable est déclarée
int variableisDeclared(char *name, char *place);

// Vérifie si un tableau est déclaré
int tableisDeclared(char *name, char *place);

// Vérifie si une matrice est déclarée
int matrixisDeclared(char *name, char *place);

// Retourne le type d'une variable, tableau ou matrice
char* getVariableType(char *name, char *place,char code[100]);
int getSize(char *name, char *place);
int getRowCol(char *name, char *place, int *row, int *col);
int functionisDeclared(char *name);
char* getVal(char *name, char *place);


char sauvType[25];
char sauvPlace[25];
char IDFValeur[25];
char IDF[25];
char listeSource [500];
char errorMsg[500];
char IDFCode[25] ="Var Simple";
int isString =0;
int val_entier;
float val_real;
char* string;
int size,column,row;
char function_return[100] = ""; 
int condition = 0;
int Nombre_de_paramètres = 0 ;
char oper=' ';

#line 130 "syntaxical_file.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntaxical_file.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_mcTRUE = 3,                     /* mcTRUE  */
  YYSYMBOL_mcFALSE = 4,                    /* mcFALSE  */
  YYSYMBOL_mcINTEGER = 5,                  /* mcINTEGER  */
  YYSYMBOL_mcREAL = 6,                     /* mcREAL  */
  YYSYMBOL_mcCHARACTER = 7,                /* mcCHARACTER  */
  YYSYMBOL_mcLOGICAL = 8,                  /* mcLOGICAL  */
  YYSYMBOL_mcREAD = 9,                     /* mcREAD  */
  YYSYMBOL_mcWRITE = 10,                   /* mcWRITE  */
  YYSYMBOL_mcDIMENSION = 11,               /* mcDIMENSION  */
  YYSYMBOL_mcPROGRAM = 12,                 /* mcPROGRAM  */
  YYSYMBOL_mcEND = 13,                     /* mcEND  */
  YYSYMBOL_mcROUTINE = 14,                 /* mcROUTINE  */
  YYSYMBOL_mcENDR = 15,                    /* mcENDR  */
  YYSYMBOL_mcCALL = 16,                    /* mcCALL  */
  YYSYMBOL_mcIF = 17,                      /* mcIF  */
  YYSYMBOL_mcTHEN = 18,                    /* mcTHEN  */
  YYSYMBOL_mcELSE = 19,                    /* mcELSE  */
  YYSYMBOL_mcENDIF = 20,                   /* mcENDIF  */
  YYSYMBOL_mcDOWHILE = 21,                 /* mcDOWHILE  */
  YYSYMBOL_mcENDDO = 22,                   /* mcENDDO  */
  YYSYMBOL_PartageMemoire = 23,            /* PartageMemoire  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_GE = 28,                        /* GE  */
  YYSYMBOL_NE = 29,                        /* NE  */
  YYSYMBOL_LE = 30,                        /* LE  */
  YYSYMBOL_LT = 31,                        /* LT  */
  YYSYMBOL_eq = 32,                        /* eq  */
  YYSYMBOL_point_virgule = 33,             /* point_virgule  */
  YYSYMBOL_point = 34,                     /* point  */
  YYSYMBOL_plus = 35,                      /* plus  */
  YYSYMBOL_mpins = 36,                     /* mpins  */
  YYSYMBOL_division = 37,                  /* division  */
  YYSYMBOL_or = 38,                        /* or  */
  YYSYMBOL_aro = 39,                       /* aro  */
  YYSYMBOL_etoile = 40,                    /* etoile  */
  YYSYMBOL_virgule = 41,                   /* virgule  */
  YYSYMBOL_paraO = 42,                     /* paraO  */
  YYSYMBOL_paraF = 43,                     /* paraF  */
  YYSYMBOL_identificateur = 44,            /* identificateur  */
  YYSYMBOL_INTEGER = 45,                   /* INTEGER  */
  YYSYMBOL_INTEGERPOSITIF = 46,            /* INTEGERPOSITIF  */
  YYSYMBOL_INTEGERNEGATIF = 47,            /* INTEGERNEGATIF  */
  YYSYMBOL_REAL = 48,                      /* REAL  */
  YYSYMBOL_caracter = 49,                  /* caracter  */
  YYSYMBOL_chaine = 50,                    /* chaine  */
  YYSYMBOL_commantaire = 51,               /* commantaire  */
  YYSYMBOL_REALNEGATIF = 52,               /* REALNEGATIF  */
  YYSYMBOL_REALPOSITIF = 53,               /* REALPOSITIF  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_Fonction = 55,                  /* Fonction  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_DECLARATIONS = 61,              /* DECLARATIONS  */
  YYSYMBOL_62_6 = 62,                      /* $@6  */
  YYSYMBOL_caractere1 = 63,                /* caractere1  */
  YYSYMBOL_DECLARATIONS1 = 64,             /* DECLARATIONS1  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_66_8 = 66,                      /* $@8  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_68_10 = 68,                     /* $@10  */
  YYSYMBOL_DECLARATIONS2 = 69,             /* DECLARATIONS2  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_72_13 = 72,                     /* $@13  */
  YYSYMBOL_73_14 = 73,                     /* $@14  */
  YYSYMBOL_DECLARATIONS3 = 74,             /* DECLARATIONS3  */
  YYSYMBOL_75_15 = 75,                     /* $@15  */
  YYSYMBOL_76_16 = 76,                     /* $@16  */
  YYSYMBOL_type = 77,                      /* type  */
  YYSYMBOL_INST_S = 78,                    /* INST_S  */
  YYSYMBOL_INSTR = 79,                     /* INSTR  */
  YYSYMBOL_Affectation = 80,               /* Affectation  */
  YYSYMBOL_81_17 = 81,                     /* $@17  */
  YYSYMBOL_82_18 = 82,                     /* $@18  */
  YYSYMBOL_83_19 = 83,                     /* $@19  */
  YYSYMBOL_EXPR = 84,                      /* EXPR  */
  YYSYMBOL_APPEL_FONC = 85,                /* APPEL_FONC  */
  YYSYMBOL_86_20 = 86,                     /* $@20  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_MATH_VAR = 88,                  /* MATH_VAR  */
  YYSYMBOL_89_22 = 89,                     /* $@22  */
  YYSYMBOL_90_23 = 90,                     /* $@23  */
  YYSYMBOL_91_24 = 91,                     /* $@24  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_93_26 = 93,                     /* $@26  */
  YYSYMBOL_94_27 = 94,                     /* $@27  */
  YYSYMBOL_95_28 = 95,                     /* $@28  */
  YYSYMBOL_96_29 = 96,                     /* $@29  */
  YYSYMBOL_97_30 = 97,                     /* $@30  */
  YYSYMBOL_MATH_VAR1 = 98,                 /* MATH_VAR1  */
  YYSYMBOL_99_31 = 99,                     /* $@31  */
  YYSYMBOL_100_32 = 100,                   /* $@32  */
  YYSYMBOL_101_33 = 101,                   /* $@33  */
  YYSYMBOL_102_34 = 102,                   /* $@34  */
  YYSYMBOL_CHAINE_STRING = 103,            /* CHAINE_STRING  */
  YYSYMBOL_ES = 104,                       /* ES  */
  YYSYMBOL_ES_WRITE_OPTIONAL = 105,        /* ES_WRITE_OPTIONAL  */
  YYSYMBOL_Equivalence = 106,              /* Equivalence  */
  YYSYMBOL_107_35 = 107,                   /* $@35  */
  YYSYMBOL_Liste = 108,                    /* Liste  */
  YYSYMBOL_Liste1 = 109,                   /* Liste1  */
  YYSYMBOL_Boucle = 110,                   /* Boucle  */
  YYSYMBOL_if_statment = 111,              /* if_statment  */
  YYSYMBOL_112_36 = 112,                   /* $@36  */
  YYSYMBOL_if_reste = 113,                 /* if_reste  */
  YYSYMBOL_condition = 114,                /* condition  */
  YYSYMBOL_expression2 = 115,              /* expression2  */
  YYSYMBOL_expression = 116,               /* expression  */
  YYSYMBOL_comparision = 117,              /* comparision  */
  YYSYMBOL_LOGICAL = 118,                  /* LOGICAL  */
  YYSYMBOL_OPER = 119                      /* OPER  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  286

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    98,   103,   107,    86,   118,   117,   133,
     132,   137,   142,   153,   159,   158,   168,   167,   176,   175,
     187,   186,   198,   204,   203,   221,   220,   239,   238,   250,
     249,   265,   264,   272,   271,   282,   284,   286,   288,   293,
     295,   296,   302,   304,   306,   308,   309,   316,   315,   339,
     338,   365,   364,   392,   395,   398,   401,   404,   413,   434,
     412,   449,   448,   479,   478,   517,   516,   552,   551,   576,
     575,   599,   598,   622,   621,   646,   645,   670,   669,   693,
     698,   702,   701,   719,   718,   736,   735,   755,   754,   769,
     784,   801,   815,   829,   835,   840,   848,   850,   852,   857,
     859,   866,   864,   874,   875,   881,   887,   893,   899,   905,
     912,   920,   925,   925,   929,   931,   935,   937,   942,   944,
     946,   951,   953,   955,   957,   959,   961,   963,   965,   970,
     972,   974,   976,   978,   980,   985,   987,   991,   993,   995,
     997
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "mcTRUE", "mcFALSE",
  "mcINTEGER", "mcREAL", "mcCHARACTER", "mcLOGICAL", "mcREAD", "mcWRITE",
  "mcDIMENSION", "mcPROGRAM", "mcEND", "mcROUTINE", "mcENDR", "mcCALL",
  "mcIF", "mcTHEN", "mcELSE", "mcENDIF", "mcDOWHILE", "mcENDDO",
  "PartageMemoire", "OR", "AND", "GT", "EQ", "GE", "NE", "LE", "LT", "eq",
  "point_virgule", "point", "plus", "mpins", "division", "or", "aro",
  "etoile", "virgule", "paraO", "paraF", "identificateur", "INTEGER",
  "INTEGERPOSITIF", "INTEGERNEGATIF", "REAL", "caracter", "chaine",
  "commantaire", "REALNEGATIF", "REALPOSITIF", "$accept", "Fonction",
  "$@1", "$@2", "$@3", "$@4", "$@5", "DECLARATIONS", "$@6", "caractere1",
  "DECLARATIONS1", "$@7", "$@8", "$@9", "$@10", "DECLARATIONS2", "$@11",
  "$@12", "$@13", "$@14", "DECLARATIONS3", "$@15", "$@16", "type",
  "INST_S", "INSTR", "Affectation", "$@17", "$@18", "$@19", "EXPR",
  "APPEL_FONC", "$@20", "$@21", "MATH_VAR", "$@22", "$@23", "$@24", "$@25",
  "$@26", "$@27", "$@28", "$@29", "$@30", "MATH_VAR1", "$@31", "$@32",
  "$@33", "$@34", "CHAINE_STRING", "ES", "ES_WRITE_OPTIONAL",
  "Equivalence", "$@35", "Liste", "Liste1", "Boucle", "if_statment",
  "$@36", "if_reste", "condition", "expression2", "expression",
  "comparision", "LOGICAL", "OPER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     186,  -187,  -187,  -187,  -187,   -21,    33,    34,  -187,  -187,
      -8,    83,  -187,  -187,    -4,    15,    22,  -187,  -187,    18,
      27,  -187,  -187,    58,    60,    68,    51,  -187,  -187,  -187,
    -187,  -187,    25,    75,    80,    85,    96,    59,  -187,    97,
     124,  -187,   120,    26,   125,   127,   144,   132,     3,    59,
    -187,  -187,   151,    59,   146,  -187,  -187,  -187,  -187,  -187,
     156,  -187,  -187,   194,  -187,  -187,  -187,   191,  -187,   195,
    -187,  -187,    75,     9,   155,  -187,   198,   155,  -187,   197,
    -187,   203,  -187,   205,  -187,   206,  -187,   192,   204,   209,
     218,   210,     4,   211,   137,   137,   137,   137,   137,  -187,
     137,   137,   185,  -187,    -5,    31,   212,  -187,   134,  -187,
     213,   -20,    83,  -187,    40,    83,   217,   214,  -187,   236,
    -187,   193,   137,  -187,    84,  -187,  -187,  -187,  -187,    42,
      81,   190,   196,  -187,   134,  -187,  -187,  -187,  -187,  -187,
    -187,   221,   226,   227,   228,   229,   231,   232,   234,    32,
     235,   237,   233,   230,   238,   210,    98,  -187,   239,  -187,
    -187,    25,   240,  -187,  -187,   241,  -187,  -187,    75,   242,
     243,  -187,   244,  -187,   202,   202,   202,   202,  -187,    59,
      59,   155,   155,   155,   155,   155,   155,  -187,    59,    59,
     245,  -187,   155,   246,  -187,    83,  -187,    26,   247,   105,
     107,     7,  -187,    59,    59,   249,   137,   134,   134,   134,
     134,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,    75,   248,  -187,   250,    23,
    -187,    25,  -187,  -187,   251,   252,  -187,  -187,  -187,  -187,
     253,  -187,  -187,  -187,  -187,  -187,  -187,   255,   155,  -187,
     257,  -187,   256,  -187,    26,   260,   258,    76,  -187,   137,
    -187,  -187,    23,   259,    83,  -187,  -187,   186,  -187,  -187,
    -187,  -187,   114,  -187,    25,  -187,   261,  -187,    26,   262,
      26,  -187,  -187,  -187,    26,  -187
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    35,    37,    38,    36,     0,     0,     0,     7,     1,
       0,    11,     2,    41,     0,     0,    46,     9,     3,     0,
       0,     8,   112,     0,     0,    47,     0,    42,    43,    45,
      44,    40,    13,   104,     0,     0,     0,     0,   101,     0,
       0,    39,     0,     0,   110,     0,   103,     0,     0,     0,
     135,   136,     0,     0,    61,    67,    69,    71,    73,    57,
      95,    77,    75,   120,    55,    54,    53,     0,   117,   116,
     128,    56,     0,     0,     0,    12,     0,     0,    14,     0,
      10,     0,     4,     0,    96,     0,    97,     0,     0,     0,
       0,    54,     0,     0,    93,    93,    93,    93,    93,    94,
      93,    93,     0,    41,     0,     0,     0,    49,     0,    48,
       0,     0,    11,    16,     0,    11,   105,    99,    98,     0,
      58,     0,    93,   121,     0,   137,   138,   140,   139,    90,
      89,    91,    92,    62,     0,    68,    70,    72,    74,    78,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    22,
      15,    13,     0,   109,    41,     0,   100,    41,   104,     0,
       0,    79,     0,    63,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,    51,     0,     0,    18,    11,    33,     0,     0,    46,
       0,    46,    59,     0,     0,     0,    93,     0,     0,     0,
       0,   119,   127,   118,   126,   130,   129,   131,   132,   133,
     134,   125,   123,   124,   122,   104,     0,    50,     0,     0,
      32,    13,    17,   108,     5,     0,   106,    41,   115,   113,
       0,    65,    64,    84,    82,    86,    88,     0,     0,    20,
       0,    23,     0,    19,     0,     0,     0,    46,    60,    93,
     102,    52,     0,     0,    11,    25,    34,     0,   107,   114,
      66,    21,     0,    24,    13,     6,     0,    27,     0,     0,
       0,    26,    29,    28,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,     5,  -187,  -187,  -187,  -187,  -187,  -100,  -187,  -151,
    -186,  -187,  -187,  -187,  -187,    16,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,     0,   -94,  -187,    82,  -187,  -187,  -187,
     -52,  -187,  -187,  -187,   -47,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,   -93,  -187,  -187,  -187,  -187,   219,
    -187,  -187,  -187,  -187,  -154,   216,  -187,  -187,  -187,  -187,
     254,   -33,   -35,  -187,  -187,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,    15,    33,   115,   255,    11,    13,    32,    43,
      80,   112,   161,   229,   262,   253,   264,   274,   280,   284,
     159,   195,   231,    14,    16,    26,    27,    40,   154,   226,
      63,    64,   168,   240,    65,    94,   206,   259,    95,    96,
      97,    98,   101,   100,   133,   175,   174,   176,   177,    66,
      28,    87,    29,    72,    45,    46,    30,    31,    36,   239,
      67,    68,    69,    70,    71,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    90,   135,   136,   137,   138,    91,   139,   140,   149,
     197,   232,   160,   157,   202,   164,    19,    20,    92,   150,
     151,   158,   109,     8,    22,   111,   237,   238,    23,   171,
      24,    19,    20,     9,   250,    21,    12,    76,   104,    22,
      17,    19,    20,    23,    85,    24,    86,   123,    10,    22,
     106,    25,   107,    23,   187,    24,   251,    18,    77,    78,
      34,   155,    50,    51,   252,    42,    25,    79,   266,    35,
     199,   247,    83,   201,   152,    52,    25,   -83,   -83,   -83,
     254,   162,   -83,   163,    41,    19,    20,   178,     1,     2,
       3,     4,   281,    22,   283,   230,   269,    23,   285,    24,
      37,    53,    38,    54,    55,    56,    57,    58,    59,    60,
      39,    61,    62,   242,    19,    20,   -81,   -81,   -81,    44,
      25,   -81,    22,   278,    47,   172,    23,   173,    24,   215,
     216,   217,   218,   219,   220,    48,   221,   223,    49,   193,
     227,   194,    73,   257,   212,   214,   211,   213,   235,    25,
     236,    90,    90,   222,   224,   276,    74,   277,    50,    51,
     243,   244,   245,   246,   273,    75,   270,    81,   212,   214,
      82,    52,   125,   126,   127,    84,   108,   128,    54,    55,
      56,    57,    58,   129,   130,    83,    61,    62,    93,   131,
     132,     1,     2,     3,     4,    89,   261,   108,     5,    54,
      55,    56,    57,    58,    59,    60,    60,    61,    62,   141,
     142,   143,   144,   145,   146,   147,   148,   169,   170,   143,
     144,   145,   146,   147,   148,   -85,   -85,   -85,   102,   104,
     -85,   -87,   -87,   -87,   103,   118,   -87,   125,   126,   127,
     110,   113,   128,   207,   208,   209,   210,   119,   114,   116,
     117,   120,   121,   122,   167,   179,   124,   153,   156,   165,
     180,   181,   182,   183,   166,   184,   185,     7,   186,   188,
     192,   189,   275,   191,   190,   267,   203,   204,   271,    99,
     248,   234,     0,   196,   -42,   198,   200,   225,   105,   205,
     233,   228,   241,   249,     0,     0,   258,   256,   260,   263,
     265,   268,     0,    88,   272,   282,   279
};

static const yytype_int16 yycheck[] =
{
       0,    53,    95,    96,    97,    98,    53,   100,   101,   103,
     161,   197,   112,    33,   168,   115,     9,    10,    53,    24,
      25,    41,    74,    44,    17,    77,    19,    20,    21,   122,
      23,     9,    10,     0,    11,    13,    44,    11,    34,    17,
      44,     9,    10,    21,    41,    23,    43,    43,    14,    17,
      41,    44,    43,    21,    22,    23,    33,    42,    32,    33,
      42,   108,     3,     4,    41,    40,    44,    41,   254,    42,
     164,   225,    41,   167,    43,    16,    44,    35,    36,    37,
     231,    41,    40,    43,    33,     9,    10,   134,     5,     6,
       7,     8,   278,    17,   280,   195,    20,    21,   284,    23,
      42,    42,    42,    44,    45,    46,    47,    48,    49,    50,
      42,    52,    53,   206,     9,    10,    35,    36,    37,    44,
      44,    40,    17,   274,    44,    41,    21,    43,    23,   181,
     182,   183,   184,   185,   186,    50,   188,   189,    42,    41,
     192,    43,    45,   237,   179,   180,   179,   180,    41,    44,
      43,   203,   204,   188,   189,    41,    32,    43,     3,     4,
     207,   208,   209,   210,   264,    45,   259,    42,   203,   204,
      43,    16,    35,    36,    37,    43,    42,    40,    44,    45,
      46,    47,    48,    46,    47,    41,    52,    53,    42,    52,
      53,     5,     6,     7,     8,    44,   248,    42,    12,    44,
      45,    46,    47,    48,    49,    50,    50,    52,    53,    24,
      25,    26,    27,    28,    29,    30,    31,    24,    25,    26,
      27,    28,    29,    30,    31,    35,    36,    37,    34,    34,
      40,    35,    36,    37,    43,    43,    40,    35,    36,    37,
      42,    44,    40,   174,   175,   176,   177,    43,    45,    44,
      44,    42,    34,    43,    18,    34,    45,    45,    45,    42,
      34,    34,    34,    34,    50,    34,    34,   267,    34,    34,
      32,    34,   267,    43,    41,    15,    34,    34,   262,    60,
      32,   199,    -1,    44,    33,    45,    45,    42,    72,    45,
      43,    45,    43,    43,    -1,    -1,    43,    45,    43,    42,
      44,    43,    -1,    49,    45,    43,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    12,    55,    77,    44,     0,
      14,    60,    44,    61,    77,    56,    78,    44,    42,     9,
      10,    13,    17,    21,    23,    44,    79,    80,   104,   106,
     110,   111,    62,    57,    42,    42,   112,    42,    42,    42,
      81,    33,    40,    63,    44,   108,   109,    44,    50,    42,
       3,     4,    16,    42,    44,    45,    46,    47,    48,    49,
      50,    52,    53,    84,    85,    88,   103,   114,   115,   116,
     117,   118,   107,    45,    32,    45,    11,    32,    33,    41,
      64,    42,    43,    41,    43,    41,    43,   105,   114,    44,
      84,    88,   116,    42,    89,    92,    93,    94,    95,   103,
      97,    96,    34,    43,    34,   109,    41,    43,    42,    84,
      42,    84,    65,    44,    45,    58,    44,    44,    43,    43,
      42,    34,    43,    43,    45,    35,    36,    37,    40,    46,
      47,    52,    53,    98,   119,    98,    98,    98,    98,    98,
      98,    24,    25,    26,    27,    28,    29,    30,    31,    78,
      24,    25,    43,    45,    82,    88,    45,    33,    41,    74,
      61,    66,    41,    43,    61,    42,    50,    18,    86,    24,
      25,    98,    41,    43,   100,    99,   101,   102,    88,    34,
      34,    34,    34,    34,    34,    34,    34,    22,    34,    34,
      41,    43,    32,    41,    43,    75,    44,    63,    45,    78,
      45,    78,   108,    34,    34,    45,    90,   119,   119,   119,
     119,   115,   116,   115,   116,    84,    84,    84,    84,    84,
      84,    84,   116,    84,   116,    42,    83,    84,    45,    67,
      61,    76,    64,    43,    80,    41,    43,    19,    20,   113,
      87,    43,    98,    88,    88,    88,    88,   108,    32,    43,
      11,    33,    41,    69,    63,    59,    45,    78,    43,    91,
      43,    84,    68,    42,    70,    44,    64,    15,    43,    20,
      98,    69,    45,    61,    71,    55,    41,    43,    63,    45,
      72,    64,    43,    64,    73,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    56,    57,    58,    59,    55,    60,    55,    62,
      61,    61,    63,    63,    65,    64,    66,    64,    67,    64,
      68,    64,    64,    70,    69,    71,    69,    72,    69,    73,
      69,    75,    74,    76,    74,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    79,    79,    81,    80,    82,
      80,    83,    80,    84,    84,    84,    84,    84,    86,    87,
      85,    89,    88,    90,    88,    91,    88,    92,    88,    93,
      88,    94,    88,    95,    88,    96,    88,    97,    88,    88,
      98,    99,    98,   100,    98,   101,    98,   102,    98,    98,
      98,    98,    98,    98,   103,   103,   104,   104,   104,   105,
     105,   107,   106,   108,   108,   109,   109,   109,   109,   109,
     109,   110,   112,   111,   113,   113,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   117,   118,   118,   119,   119,   119,
     119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,    15,     0,     6,     0,
       5,     0,     2,     0,     0,     3,     0,     5,     0,     6,
       0,     8,     3,     0,     3,     0,     5,     0,     6,     0,
       8,     0,     3,     0,     5,     1,     1,     1,     1,     3,
       2,     0,     1,     1,     1,     1,     0,     0,     4,     0,
       7,     0,     9,     1,     1,     1,     1,     1,     0,     0,
       7,     0,     3,     0,     6,     0,     8,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     4,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     1,
       1,     1,     1,     0,     2,     1,     4,     4,     5,     2,
       3,     0,     9,     1,     0,     3,     6,     8,     6,     4,
       1,     6,     0,     8,     3,     1,     1,     1,     5,     5,
       1,     3,     5,     5,     5,     5,     5,     5,     1,     5,
       5,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 87 "syntaxical_file.y"
    { 
        // Add a variable when a function is declared
        // Nous avons suposer la fonction comme un tableau et son taille est le nombre de paramètres 
        // parce que quand on apelle une fonction on doit viréfier son nbr de paramètres    
        if (addVariable((yyvsp[0].string), (yyvsp[-2].string), "idf fonction", 1, "NULL", "PROGRAM")) {sprintf(errorMsg,"double declaration de %s",(yyvsp[0].string)) ; yyerror(errorMsg);}
        strcpy(sauvType, (yyvsp[-2].string));
        addType((yyvsp[0].string), sauvType);
        sprintf(sauvPlace, "FONCTION %s", (yyvsp[0].string));
    
    }
#line 1451 "syntaxical_file.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 98 "syntaxical_file.y"
    { 
        // Handle function parameters
        sprintf(listeSource, "para de Fun %s", (yyvsp[-2].string));
    }
#line 1460 "syntaxical_file.tab.c"
    break;

  case 4: /* $@3: %empty  */
#line 103 "syntaxical_file.y"
    {
        addSize((yyvsp[-5].string),"PROGRAM", Nombre_de_paramètres);
        Nombre_de_paramètres=0;
    }
#line 1469 "syntaxical_file.tab.c"
    break;

  case 5: /* $@4: %empty  */
#line 107 "syntaxical_file.y"
                                    { 
        // Check that the return value is assigned to the function name
        if (strcmp((yyvsp[-9].string), function_return) != 0)
        { 
            sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
        } 
    }
#line 1482 "syntaxical_file.tab.c"
    break;

  case 7: /* $@5: %empty  */
#line 118 "syntaxical_file.y"
    { 
        // Handle program declaration
        sprintf(sauvPlace, "PROGRAM");
    }
#line 1491 "syntaxical_file.tab.c"
    break;

  case 8: /* Fonction: mcPROGRAM identificateur $@5 DECLARATIONS INST_S mcEND  */
#line 123 "syntaxical_file.y"
    {  
        // Accept if the program is syntactically correct
        printf("Programme syntaxiquement correct.\n");  
        YYACCEPT; 
    }
#line 1501 "syntaxical_file.tab.c"
    break;

  case 9: /* $@6: %empty  */
#line 133 "syntaxical_file.y"
    { 
        strcpy(sauvType, (yyvsp[-1].string)); 
        strcpy(IDF, (yyvsp[0].string));
    }
#line 1510 "syntaxical_file.tab.c"
    break;

  case 12: /* caractere1: etoile INTEGER  */
#line 143 "syntaxical_file.y"
    {
        if (strcmp(sauvType,"CHARACTER") !=0) 
        {
            sprintf(errorMsg,"Erreur de Type de la variable : \"%s\" ",IDF);
            yyerror(errorMsg);
        }
        strcpy(IDFCode,"Tableau"); 
        size = (yyvsp[0].entier);
        isString =1;
    }
#line 1525 "syntaxical_file.tab.c"
    break;

  case 14: /* $@7: %empty  */
#line 159 "syntaxical_file.y"
    {  
        // Add a variable to the list of declared variables
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) 
        { sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg); }
        strcpy(IDFCode, "Var Simple");
    }
#line 1536 "syntaxical_file.tab.c"
    break;

  case 16: /* $@8: %empty  */
#line 168 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[0].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1546 "syntaxical_file.tab.c"
    break;

  case 18: /* $@9: %empty  */
#line 176 "syntaxical_file.y"
    {    
        if((yyvsp[-1].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[-1].entier);
    }
#line 1560 "syntaxical_file.tab.c"
    break;

  case 20: /* $@10: %empty  */
#line 187 "syntaxical_file.y"
    {   
        if((yyvsp[-3].entier)==0 || (yyvsp[-1].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Matrice");
        row = (yyvsp[-3].entier);
        column = (yyvsp[-1].entier);
    }
#line 1575 "syntaxical_file.tab.c"
    break;

  case 23: /* $@11: %empty  */
#line 204 "syntaxical_file.y"
    { 
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        if (strcmp(IDFCode, "Tableau") == 0) 
        { 
            if (addSize(IDF, sauvPlace, size))   
                yyerror("var n'est pas declarer");
        }   
        if (strcmp(IDFCode, "Matrice") == 0) 
        {   
            if (addRowCol(IDF, sauvPlace, row, column))  
                yyerror("var n'est pas declarer");              
        }
        strcpy(IDFCode, "Var Simple");
    }
#line 1594 "syntaxical_file.tab.c"
    break;

  case 25: /* $@12: %empty  */
#line 221 "syntaxical_file.y"
    { 
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        if (strcmp(IDFCode, "Tableau") == 0) 
        { 
            if (addSize(IDF, sauvPlace, size))   
                yyerror("var n'est pas declarer");
        }   
        if (strcmp(IDFCode, "Matrice") == 0) 
        {
            if (addRowCol(IDF, sauvPlace, row, column))  
                yyerror("var n'est pas declarer");              
        }
        strcpy(IDF, (yyvsp[0].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1614 "syntaxical_file.tab.c"
    break;

  case 27: /* $@13: %empty  */
#line 239 "syntaxical_file.y"
    {   
        if((yyvsp[-1].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[-1].entier);
    }
#line 1628 "syntaxical_file.tab.c"
    break;

  case 29: /* $@14: %empty  */
#line 250 "syntaxical_file.y"
    {
        if((yyvsp[-3].entier)==0 || (yyvsp[-1].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Matrice");
        row =(yyvsp[-3].entier);
        column =(yyvsp[-1].entier);
    }
#line 1643 "syntaxical_file.tab.c"
    break;

  case 31: /* $@15: %empty  */
#line 265 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)){sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDFCode, "Var Simple");
    }
#line 1652 "syntaxical_file.tab.c"
    break;

  case 33: /* $@16: %empty  */
#line 272 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[0].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1662 "syntaxical_file.tab.c"
    break;

  case 47: /* $@17: %empty  */
#line 316 "syntaxical_file.y"
    {
        char* temp = getVariableType((yyvsp[0].string),sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg,"la variable  \"%s\" n'est pas declarer", (yyvsp[0].string));
            yyerror(errorMsg);
        }
        else
        { 
            if (strcmp(function_return,"idf fonction")== 0)
             // ici la fonction getVariableType modifie le function_return si la variable est une fonction 
             // donc en mete le nom de cette variable dans function_return pour virifier si le nome de la fonction et 
             // la nome que nous avons affecter le retour sont equvalant  
            {                                              
                strcpy(function_return,(yyvsp[0].string));
            }
            strcpy(IDF,(yyvsp[0].string));
            strcpy(sauvType,temp);
        }
    }
#line 1687 "syntaxical_file.tab.c"
    break;

  case 49: /* $@18: %empty  */
#line 339 "syntaxical_file.y"
    {

        char* temp = getVariableType((yyvsp[-3].string),sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme tableau ", (yyvsp[-3].string));
            yyerror(errorMsg);
        }
        else
        {
        int tempSize = getSize(IDF,sauvPlace);

        if (tempSize)
        {
            if (tempSize < (yyvsp[-1].entier)){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille ", (yyvsp[-3].string));
                yyerror(errorMsg);
            }
            strcpy(IDF,(yyvsp[-3].string));
            strcpy(sauvType,temp);
        }
        }
    }
#line 1715 "syntaxical_file.tab.c"
    break;

  case 51: /* $@19: %empty  */
#line 365 "syntaxical_file.y"
    {
        
        char* temp = getVariableType((yyvsp[-5].string),sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme matrice", (yyvsp[-5].string));
            yyerror(errorMsg);
        }
        else
        {
        int tempRow ,tempCol;
        if(getRowCol(IDF,sauvPlace,&tempRow,&tempCol)==0)
        {
            if (tempRow < (yyvsp[-3].entier) || tempCol < (yyvsp[-1].entier)){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille  ", (yyvsp[-5].string));
                yyerror(errorMsg);
            }
            strcpy(IDF,(yyvsp[-5].string));
            strcpy(sauvType,temp);
        }
        }
    }
#line 1742 "syntaxical_file.tab.c"
    break;

  case 57: /* EXPR: caracter  */
#line 405 "syntaxical_file.y"
    {
        // Semantic code for caracter
    }
#line 1750 "syntaxical_file.tab.c"
    break;

  case 58: /* $@20: %empty  */
#line 413 "syntaxical_file.y"
    { 
        if(functionisDeclared((yyvsp[-1].string)))
        {
            sprintf(errorMsg, "la fonction \"%s\" n'est pas declarer ", (yyvsp[-1].string));
            yyerror(errorMsg);
        }

        char* temp = getVariableType((yyvsp[-1].string),"PROGRAM",function_return);

        strcpy(function_return ,"");
        if (strcmp(temp,"INTEGER") == 0 && strcmp("REAL",sauvType)!= 0 )
        {
            if (strcmp(temp,sauvType)!= 0)
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
        }
        sprintf(listeSource, "%s", sauvPlace); 
    }
#line 1775 "syntaxical_file.tab.c"
    break;

  case 59: /* $@21: %empty  */
#line 434 "syntaxical_file.y"
    {   int tempSize = getSize((yyvsp[-3].string),"PROGRAM");
        if(tempSize!= Nombre_de_paramètres)
        {
            sprintf(errorMsg, "le nombre de paramètres de la fonction \"%s\" est incorrect le nombre correcte est %d", (yyvsp[-3].string),tempSize);
            yyerror(errorMsg);   
        }
        Nombre_de_paramètres=0;
    }
#line 1788 "syntaxical_file.tab.c"
    break;

  case 61: /* $@22: %empty  */
#line 449 "syntaxical_file.y"
    {
        if(variableisDeclared((yyvsp[0].string), sauvPlace) && tableisDeclared((yyvsp[0].string), sauvPlace) && matrixisDeclared ((yyvsp[0].string), sauvPlace))//return 1 si le idf n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme variable simple", (yyvsp[0].string));
            yyerror(errorMsg);
        }
        else
        { 
            char* temp = getVariableType((yyvsp[0].string),sauvPlace,function_return);

            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0 )
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", (yyvsp[0].string));
                yyerror(errorMsg);
                }

            }

        }
    }
#line 1820 "syntaxical_file.tab.c"
    break;

  case 63: /* $@23: %empty  */
#line 479 "syntaxical_file.y"
    {
        if(tableisDeclared((yyvsp[-3].string), sauvPlace))//return 1 si le tableau n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme tableau ", (yyvsp[-3].string));
            yyerror(errorMsg);
        }
        else
        {
            // check the type 
            char* temp = getVariableType((yyvsp[-3].string),sauvPlace,function_return);
            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0 )
            {  
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", (yyvsp[-3].string));
                yyerror(errorMsg);
                }
            }
        }
        int tempSize = getSize(IDF,sauvPlace);

        if (tempSize)
        {
            if (tempSize < (yyvsp[-1].entier)){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille  ", (yyvsp[-3].string));
                yyerror(errorMsg);
            }
        }
        
    }
#line 1860 "syntaxical_file.tab.c"
    break;

  case 65: /* $@24: %empty  */
#line 517 "syntaxical_file.y"
    {
        if(matrixisDeclared((yyvsp[-5].string), sauvPlace))//return 1 si le tableau n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme matrice", (yyvsp[-5].string));
            yyerror(errorMsg);
        }
        else
        {
            char* temp = getVariableType((yyvsp[-5].string),sauvPlace,function_return);
            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0)
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", (yyvsp[-5].string));
                yyerror(errorMsg);
                }
            }
        } 
        int tempRow ,tempCol;
        if(getRowCol(IDF,sauvPlace,&tempRow,&tempCol)==0)
        {
            if (tempRow < (yyvsp[-3].entier) || tempCol < (yyvsp[-1].entier)){
                sprintf(errorMsg, "lla variable \"%s\" a une erreur dans la taille  ", (yyvsp[-5].string));
                yyerror(errorMsg);
            }
        }

    }
#line 1898 "syntaxical_file.tab.c"
    break;

  case 67: /* $@25: %empty  */
#line 552 "syntaxical_file.y"
    {   
        // check if depasse intervale 0 32767
        if ((yyvsp[0].entier) > 32767 || (yyvsp[0].entier) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {  
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[0].entier)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 1924 "syntaxical_file.tab.c"
    break;

  case 69: /* $@26: %empty  */
#line 576 "syntaxical_file.y"
    {   // check if depasse intervale 0 32767
        if ((yyvsp[0].entier) > 32767 || (yyvsp[0].entier) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[0].entier)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 1949 "syntaxical_file.tab.c"
    break;

  case 71: /* $@27: %empty  */
#line 599 "syntaxical_file.y"
    {   // check if depasse intervale -32768 0
        if ((yyvsp[0].entier) > 0 || (yyvsp[0].entier) < -32768 ){
           sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") !=0 && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[0].entier)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 1974 "syntaxical_file.tab.c"
    break;

  case 73: /* $@28: %empty  */
#line 622 "syntaxical_file.y"
    {
        // check if depasse intervale 0 32767.32767 
        if ((yyvsp[0].real) > 32767.32767 || (yyvsp[0].real) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[0].real)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2000 "syntaxical_file.tab.c"
    break;

  case 75: /* $@29: %empty  */
#line 646 "syntaxical_file.y"
    {   
        // check if depasse intervale  -32768.32768 0
        if ((yyvsp[0].real) > 32767.32767 || (yyvsp[0].real) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[0].real)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2026 "syntaxical_file.tab.c"
    break;

  case 77: /* $@30: %empty  */
#line 670 "syntaxical_file.y"
    {   
        if ((yyvsp[0].real) > 0|| (yyvsp[0].real) < -32768.32768 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[0].real)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2052 "syntaxical_file.tab.c"
    break;

  case 81: /* $@31: %empty  */
#line 702 "syntaxical_file.y"
    {   
        if ((yyvsp[0].entier) > 0 || (yyvsp[0].entier) < -32768 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        val_entier += (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 2071 "syntaxical_file.tab.c"
    break;

  case 83: /* $@32: %empty  */
#line 719 "syntaxical_file.y"
    {
        if ((yyvsp[0].entier) > 32767 || (yyvsp[0].entier) < 0 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
       val_entier += (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 2090 "syntaxical_file.tab.c"
    break;

  case 85: /* $@33: %empty  */
#line 736 "syntaxical_file.y"
    {   
        if ((yyvsp[0].real) > 0|| (yyvsp[0].real) < -32768.32768 )
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2109 "syntaxical_file.tab.c"
    break;

  case 87: /* $@34: %empty  */
#line 755 "syntaxical_file.y"
    {   if ((yyvsp[0].real) > 32767.32767 || (yyvsp[0].real) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2126 "syntaxical_file.tab.c"
    break;

  case 89: /* MATH_VAR1: INTEGERNEGATIF  */
#line 770 "syntaxical_file.y"
    {   if ((yyvsp[0].entier) > 0 || (yyvsp[0].entier) < -32768 )
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 2144 "syntaxical_file.tab.c"
    break;

  case 90: /* MATH_VAR1: INTEGERPOSITIF  */
#line 785 "syntaxical_file.y"
    {
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
         if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = (yyvsp[0].entier) ; 
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 2164 "syntaxical_file.tab.c"
    break;

  case 91: /* MATH_VAR1: REALNEGATIF  */
#line 802 "syntaxical_file.y"
    {   if ((yyvsp[0].real) > 32767.32767 || (yyvsp[0].real) < 0 ){
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2181 "syntaxical_file.tab.c"
    break;

  case 92: /* MATH_VAR1: REALPOSITIF  */
#line 816 "syntaxical_file.y"
    {
        if ((yyvsp[0].real) > 32767.32767 || (yyvsp[0].real) < 0 ){
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 2199 "syntaxical_file.tab.c"
    break;

  case 94: /* CHAINE_STRING: chaine CHAINE_STRING  */
#line 836 "syntaxical_file.y"
    {
        sprintf(string,"%s%s",string,(yyvsp[-1].string));
    }
#line 2207 "syntaxical_file.tab.c"
    break;

  case 95: /* CHAINE_STRING: chaine  */
#line 841 "syntaxical_file.y"
    {
        string = (yyvsp[0].string); 
    }
#line 2215 "syntaxical_file.tab.c"
    break;

  case 101: /* $@35: %empty  */
#line 866 "syntaxical_file.y"
    {
       sprintf(listeSource ,"%s",sauvPlace); 
    }
#line 2223 "syntaxical_file.tab.c"
    break;

  case 105: /* Liste1: Liste1 virgule identificateur  */
#line 883 "syntaxical_file.y"
    {    Nombre_de_paramètres++;
        addVariable((yyvsp[0].string),"pas de type","Var Simple",1,"NULL",listeSource);
    }
#line 2231 "syntaxical_file.tab.c"
    break;

  case 106: /* Liste1: Liste1 virgule identificateur paraO INTEGER paraF  */
#line 889 "syntaxical_file.y"
    {    Nombre_de_paramètres++;
        addVariable((yyvsp[-3].string),"pas de type","Tableau",1,"NULL",listeSource);
    }
#line 2239 "syntaxical_file.tab.c"
    break;

  case 107: /* Liste1: Liste1 virgule identificateur paraO INTEGER virgule INTEGER paraF  */
#line 895 "syntaxical_file.y"
    {    Nombre_de_paramètres++;
        addVariable((yyvsp[-5].string),"pas de type","Matrice",1,"NULL",listeSource);
    }
#line 2247 "syntaxical_file.tab.c"
    break;

  case 108: /* Liste1: identificateur paraO INTEGER virgule INTEGER paraF  */
#line 901 "syntaxical_file.y"
    {    Nombre_de_paramètres++;
        addVariable((yyvsp[-5].string),"pas de type","Matrice",1,"NULL",listeSource);
    }
#line 2255 "syntaxical_file.tab.c"
    break;

  case 109: /* Liste1: identificateur paraO INTEGER paraF  */
#line 907 "syntaxical_file.y"
    {    Nombre_de_paramètres++;
        addVariable((yyvsp[-3].string),"pas de type","Tableau",1,"NULL",listeSource);
    }
#line 2263 "syntaxical_file.tab.c"
    break;

  case 110: /* Liste1: identificateur  */
#line 913 "syntaxical_file.y"
    {   
        Nombre_de_paramètres++;
        addVariable((yyvsp[0].string),"pas de type","Var Simple",1,"NULL",listeSource);
    }
#line 2272 "syntaxical_file.tab.c"
    break;

  case 112: /* $@36: %empty  */
#line 925 "syntaxical_file.y"
         {condition = 1;}
#line 2278 "syntaxical_file.tab.c"
    break;

  case 113: /* if_statment: mcIF $@36 paraO condition paraF mcTHEN INST_S if_reste  */
#line 925 "syntaxical_file.y"
                                                                        {condition = 0;}
#line 2284 "syntaxical_file.tab.c"
    break;

  case 140: /* OPER: division  */
#line 998 "syntaxical_file.y"
    {oper = '/';}
#line 2290 "syntaxical_file.tab.c"
    break;


#line 2294 "syntaxical_file.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1002 "syntaxical_file.y"


// Fonction main

void yyerror(const char *s) {
    fprintf(stderr, "\n Syntax error at line %d, column %d: %s\n", nbligne, col, s);
    exit(EXIT_FAILURE);
}

int main() {
    yyparse();
    afficher();
    return 0;
}
