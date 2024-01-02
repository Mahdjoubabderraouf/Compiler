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
#line 3 "syntaxical_file.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern char* yytext;
int nbligne = 1;
int col = 1;

void yyerror(const char *s);

void addType(char *name, char *type);
void addVarPlace(char *name, char *varPlace);
void afficher();
int addVariable(char *name, char *type, char* code, int state, char* val, char varPlace[]);int addSize(char *name,char * varPlace, int size);
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



#line 122 "syntaxical_file.tab.c"

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
  YYSYMBOL_DECLARATIONS = 60,              /* DECLARATIONS  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_caractere1 = 62,                /* caractere1  */
  YYSYMBOL_DECLARATIONS1 = 63,             /* DECLARATIONS1  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_66_8 = 66,                      /* $@8  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_DECLARATIONS2 = 68,             /* DECLARATIONS2  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_72_13 = 72,                     /* $@13  */
  YYSYMBOL_DECLARATIONS3 = 73,             /* DECLARATIONS3  */
  YYSYMBOL_74_14 = 74,                     /* $@14  */
  YYSYMBOL_75_15 = 75,                     /* $@15  */
  YYSYMBOL_type = 76,                      /* type  */
  YYSYMBOL_INST_S = 77,                    /* INST_S  */
  YYSYMBOL_INSTR = 78,                     /* INSTR  */
  YYSYMBOL_Affectation = 79,               /* Affectation  */
  YYSYMBOL_80_16 = 80,                     /* $@16  */
  YYSYMBOL_81_17 = 81,                     /* $@17  */
  YYSYMBOL_82_18 = 82,                     /* $@18  */
  YYSYMBOL_EXPR = 83,                      /* EXPR  */
  YYSYMBOL_APPEL_FONC = 84,                /* APPEL_FONC  */
  YYSYMBOL_85_19 = 85,                     /* $@19  */
  YYSYMBOL_MATH_VAR = 86,                  /* MATH_VAR  */
  YYSYMBOL_87_20 = 87,                     /* $@20  */
  YYSYMBOL_88_21 = 88,                     /* $@21  */
  YYSYMBOL_89_22 = 89,                     /* $@22  */
  YYSYMBOL_90_23 = 90,                     /* $@23  */
  YYSYMBOL_91_24 = 91,                     /* $@24  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_93_26 = 93,                     /* $@26  */
  YYSYMBOL_94_27 = 94,                     /* $@27  */
  YYSYMBOL_95_28 = 95,                     /* $@28  */
  YYSYMBOL_MATH_VAR1 = 96,                 /* MATH_VAR1  */
  YYSYMBOL_97_29 = 97,                     /* $@29  */
  YYSYMBOL_98_30 = 98,                     /* $@30  */
  YYSYMBOL_99_31 = 99,                     /* $@31  */
  YYSYMBOL_100_32 = 100,                   /* $@32  */
  YYSYMBOL_CHAINE_STRING = 101,            /* CHAINE_STRING  */
  YYSYMBOL_ES = 102,                       /* ES  */
  YYSYMBOL_ES_WRITE_OPTIONAL = 103,        /* ES_WRITE_OPTIONAL  */
  YYSYMBOL_Equivalence = 104,              /* Equivalence  */
  YYSYMBOL_105_33 = 105,                   /* $@33  */
  YYSYMBOL_Liste = 106,                    /* Liste  */
  YYSYMBOL_Liste1 = 107,                   /* Liste1  */
  YYSYMBOL_Boucle = 108,                   /* Boucle  */
  YYSYMBOL_if_statment = 109,              /* if_statment  */
  YYSYMBOL_110_34 = 110,                   /* $@34  */
  YYSYMBOL_if_reste = 111,                 /* if_reste  */
  YYSYMBOL_condition = 112,                /* condition  */
  YYSYMBOL_expression2 = 113,              /* expression2  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_comparision = 115,              /* comparision  */
  YYSYMBOL_LOGICAL = 116,                  /* LOGICAL  */
  YYSYMBOL_OPER = 117                      /* OPER  */
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
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

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
       0,    85,    85,    93,    97,    84,   108,   107,   124,   123,
     128,   132,   143,   149,   148,   158,   157,   166,   165,   177,
     176,   188,   194,   193,   211,   210,   229,   228,   240,   239,
     255,   254,   262,   261,   272,   274,   276,   278,   283,   285,
     286,   292,   294,   296,   298,   299,   306,   305,   326,   325,
     348,   347,   370,   373,   376,   378,   381,   390,   389,   405,
     404,   434,   433,   472,   471,   507,   506,   524,   523,   540,
     539,   556,   555,   573,   572,   590,   589,   606,   611,   615,
     614,   632,   631,   649,   648,   668,   667,   682,   697,   714,
     728,   742,   748,   753,   761,   763,   765,   770,   772,   779,
     777,   787,   788,   794,   800,   806,   812,   818,   825,   832,
     837,   837,   841,   843,   847,   849,   854,   856,   858,   863,
     865,   867,   869,   871,   873,   875,   877,   882,   884,   886,
     888,   890,   892,   898,   900,   904,   906,   908,   910
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
  "$@1", "$@2", "$@3", "$@4", "DECLARATIONS", "$@5", "caractere1",
  "DECLARATIONS1", "$@6", "$@7", "$@8", "$@9", "DECLARATIONS2", "$@10",
  "$@11", "$@12", "$@13", "DECLARATIONS3", "$@14", "$@15", "type",
  "INST_S", "INSTR", "Affectation", "$@16", "$@17", "$@18", "EXPR",
  "APPEL_FONC", "$@19", "MATH_VAR", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "MATH_VAR1", "$@29", "$@30", "$@31",
  "$@32", "CHAINE_STRING", "ES", "ES_WRITE_OPTIONAL", "Equivalence",
  "$@33", "Liste", "Liste1", "Boucle", "if_statment", "$@34", "if_reste",
  "condition", "expression2", "expression", "comparision", "LOGICAL",
  "OPER", YY_NULLPTR
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

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     172,  -187,  -187,  -187,  -187,   -28,    21,    19,  -187,  -187,
      -4,   252,  -187,  -187,    -1,    35,    62,  -187,  -187,    36,
      45,  -187,  -187,    49,    56,    63,    18,  -187,  -187,  -187,
    -187,  -187,    14,    22,    60,    71,    86,    11,  -187,    65,
     106,  -187,    73,     6,    93,    99,   102,   105,   -15,    11,
    -187,  -187,   121,    11,   107,  -187,  -187,  -187,  -187,  -187,
     100,  -187,  -187,   133,  -187,  -187,  -187,   127,  -187,   138,
    -187,  -187,    22,     9,   155,  -187,   131,   155,  -187,   132,
    -187,   136,   252,   141,  -187,   143,  -187,   149,   150,   153,
     164,   163,   -14,   168,   175,   175,   175,   175,   175,  -187,
     175,   175,   205,  -187,    12,    24,   169,  -187,    55,  -187,
     171,   -10,   252,  -187,    43,  -187,   182,   167,  -187,   207,
    -187,   213,   175,  -187,    68,  -187,  -187,  -187,  -187,   120,
     154,   183,   210,  -187,    55,  -187,  -187,  -187,  -187,  -187,
    -187,   192,   214,   215,   220,   231,   232,   233,   234,    72,
     235,   236,   230,   229,   241,   163,    76,  -187,   237,  -187,
    -187,    14,   238,  -187,   165,   239,  -187,  -187,    22,   240,
     242,  -187,   243,  -187,   216,   216,   216,   216,  -187,    11,
      11,   155,   155,   155,   155,   155,   155,  -187,    11,    11,
     244,  -187,   155,   245,  -187,   252,  -187,     6,   246,   247,
      84,    25,   248,    11,    11,   249,   175,    55,    55,    55,
      55,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,    22,   250,  -187,   251,     8,
    -187,    14,  -187,  -187,   260,   253,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,   254,   155,  -187,
     257,  -187,   256,  -187,     6,   172,   258,   103,   175,  -187,
    -187,     8,   259,   252,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,    98,  -187,    14,   261,  -187,     6,   262,     6,  -187,
    -187,  -187,     6,  -187
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    34,    36,    37,    35,     0,     0,     0,     6,     1,
       0,    10,     2,    40,     0,     0,    45,     8,     3,     0,
       0,     7,   110,     0,     0,    46,     0,    41,    42,    44,
      43,    39,    12,   102,     0,     0,     0,     0,    99,     0,
       0,    38,     0,     0,   108,     0,   101,     0,     0,     0,
     133,   134,     0,     0,    59,    65,    67,    69,    71,    56,
      93,    75,    73,   118,    54,    53,    52,     0,   115,   114,
     126,    55,     0,     0,     0,    11,     0,     0,    13,     0,
       9,     0,    10,     0,    94,     0,    95,     0,     0,     0,
       0,    53,     0,     0,    91,    91,    91,    91,    91,    92,
      91,    91,     0,    40,     0,     0,     0,    48,     0,    47,
       0,     0,    10,    15,     0,    40,   103,    97,    96,     0,
      57,     0,    91,   119,     0,   135,   136,   138,   137,    88,
      87,    89,    90,    60,     0,    66,    68,    70,    72,    76,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    21,
      14,    12,     0,   107,    45,     0,    98,    40,   102,     0,
       0,    77,     0,    61,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,    50,     0,     0,    17,    10,    32,     0,     0,     4,
       0,    45,     0,     0,     0,     0,    91,     0,     0,     0,
       0,   117,   125,   116,   124,   128,   127,   129,   130,   131,
     132,   123,   121,   122,   120,   102,     0,    49,     0,     0,
      31,    12,    16,   106,     0,     0,   104,    40,   113,   111,
      58,    63,    62,    82,    80,    84,    86,     0,     0,    19,
       0,    22,     0,    18,     0,     0,     0,    45,    91,   100,
      51,     0,     0,    10,    24,    33,     5,   105,   112,    64,
      20,     0,    23,    12,     0,    26,     0,     0,     0,    25,
      28,    27,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,    23,  -187,  -187,  -187,  -187,   -80,  -187,  -151,  -186,
    -187,  -187,  -187,  -187,    16,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,     0,   -91,  -187,   115,  -187,  -187,  -187,   -52,
    -187,  -187,   -46,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,   -92,  -187,  -187,  -187,  -187,   225,  -187,  -187,
    -187,  -187,  -155,   221,  -187,  -187,  -187,  -187,   263,  -106,
     -35,  -187,  -187,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,    15,    33,   234,    11,    13,    32,    43,    80,
     112,   161,   229,   261,   253,   263,   273,   278,   282,   159,
     195,   231,    14,    16,    26,    27,    40,   154,   226,    63,
      64,   168,    65,    94,   206,   258,    95,    96,    97,    98,
     101,   100,   133,   175,   174,   176,   177,    66,    28,    87,
      29,    72,    45,    46,    30,    31,    36,   239,    67,    68,
      69,    70,    71,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    90,   115,   135,   136,   137,   138,    91,   139,   140,
     197,   232,   149,   202,    50,    51,     8,    76,    92,   250,
     104,     9,   109,   157,   164,   111,    85,    52,    86,   123,
     171,   158,   160,    10,    19,    20,   150,   151,    77,    78,
      12,   251,    22,    17,   237,   238,    23,    79,    24,   252,
     106,    41,   107,    53,    42,    54,    55,    56,    57,    58,
      59,    60,   155,    61,    62,    83,    44,   152,   265,    25,
     247,    19,    20,   211,   213,    21,   201,    18,    34,    22,
     254,    19,    20,    23,   162,    24,   163,    35,   178,    22,
     279,    37,   281,    23,   187,    24,   283,   108,    38,    54,
      55,    56,    57,    58,    47,    39,    25,    61,    62,   172,
      73,   173,    19,    20,   242,   230,    25,   193,    75,   194,
      22,    48,   276,   268,    23,   235,    24,   236,    49,   215,
     216,   217,   218,   219,   220,    81,   221,   223,    74,   274,
     227,   275,    82,    83,   212,   214,   257,    25,    84,    93,
      60,    90,    90,   222,   224,   -81,   -81,   -81,    50,    51,
     -81,   243,   244,   245,   246,    89,   269,   102,   212,   214,
     103,    52,   104,   110,    19,    20,   113,     1,     2,     3,
       4,   114,    22,   272,     5,   116,    23,   117,    24,   -79,
     -79,   -79,   118,   119,   -79,   120,   260,   108,   121,    54,
      55,    56,    57,    58,    59,    60,   122,    61,    62,    25,
     125,   126,   127,   124,   153,   128,   156,   166,   -83,   -83,
     -83,   129,   130,   -83,   165,   167,   179,   131,   132,   141,
     142,   143,   144,   145,   146,   147,   148,   169,   170,   143,
     144,   145,   146,   147,   148,   -85,   -85,   -85,   180,   181,
     -85,   125,   126,   127,   182,     7,   128,     1,     2,     3,
       4,   207,   208,   209,   210,   183,   184,   185,   186,   188,
     189,   190,   191,   192,   203,   255,   204,   270,   266,   199,
     -41,   196,   248,   198,   200,    99,   225,     0,   205,   233,
     228,   240,   241,   105,   249,     0,     0,   259,   256,   262,
     264,   267,     0,     0,   271,   280,   277,     0,     0,     0,
       0,     0,    88
};

static const yytype_int16 yycheck[] =
{
       0,    53,    82,    95,    96,    97,    98,    53,   100,   101,
     161,   197,   103,   168,     3,     4,    44,    11,    53,    11,
      34,     0,    74,    33,   115,    77,    41,    16,    43,    43,
     122,    41,   112,    14,     9,    10,    24,    25,    32,    33,
      44,    33,    17,    44,    19,    20,    21,    41,    23,    41,
      41,    33,    43,    42,    40,    44,    45,    46,    47,    48,
      49,    50,   108,    52,    53,    41,    44,    43,   254,    44,
     225,     9,    10,   179,   180,    13,   167,    42,    42,    17,
     231,     9,    10,    21,    41,    23,    43,    42,   134,    17,
     276,    42,   278,    21,    22,    23,   282,    42,    42,    44,
      45,    46,    47,    48,    44,    42,    44,    52,    53,    41,
      45,    43,     9,    10,   206,   195,    44,    41,    45,    43,
      17,    50,   273,    20,    21,    41,    23,    43,    42,   181,
     182,   183,   184,   185,   186,    42,   188,   189,    32,    41,
     192,    43,    43,    41,   179,   180,   237,    44,    43,    42,
      50,   203,   204,   188,   189,    35,    36,    37,     3,     4,
      40,   207,   208,   209,   210,    44,   258,    34,   203,   204,
      43,    16,    34,    42,     9,    10,    44,     5,     6,     7,
       8,    45,    17,   263,    12,    44,    21,    44,    23,    35,
      36,    37,    43,    43,    40,    42,   248,    42,    34,    44,
      45,    46,    47,    48,    49,    50,    43,    52,    53,    44,
      35,    36,    37,    45,    45,    40,    45,    50,    35,    36,
      37,    46,    47,    40,    42,    18,    34,    52,    53,    24,
      25,    26,    27,    28,    29,    30,    31,    24,    25,    26,
      27,    28,    29,    30,    31,    35,    36,    37,    34,    34,
      40,    35,    36,    37,    34,   255,    40,     5,     6,     7,
       8,   174,   175,   176,   177,    34,    34,    34,    34,    34,
      34,    41,    43,    32,    34,    15,    34,   261,   255,   164,
      33,    44,    32,    45,    45,    60,    42,    -1,    45,    43,
      45,    43,    43,    72,    43,    -1,    -1,    43,    45,    42,
      44,    43,    -1,    -1,    45,    43,    45,    -1,    -1,    -1,
      -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    12,    55,    76,    44,     0,
      14,    59,    44,    60,    76,    56,    77,    44,    42,     9,
      10,    13,    17,    21,    23,    44,    78,    79,   102,   104,
     108,   109,    61,    57,    42,    42,   110,    42,    42,    42,
      80,    33,    40,    62,    44,   106,   107,    44,    50,    42,
       3,     4,    16,    42,    44,    45,    46,    47,    48,    49,
      50,    52,    53,    83,    84,    86,   101,   112,   113,   114,
     115,   116,   105,    45,    32,    45,    11,    32,    33,    41,
      63,    42,    43,    41,    43,    41,    43,   103,   112,    44,
      83,    86,   114,    42,    87,    90,    91,    92,    93,   101,
      95,    94,    34,    43,    34,   107,    41,    43,    42,    83,
      42,    83,    64,    44,    45,    60,    44,    44,    43,    43,
      42,    34,    43,    43,    45,    35,    36,    37,    40,    46,
      47,    52,    53,    96,   117,    96,    96,    96,    96,    96,
      96,    24,    25,    26,    27,    28,    29,    30,    31,    77,
      24,    25,    43,    45,    81,    86,    45,    33,    41,    73,
      60,    65,    41,    43,    77,    42,    50,    18,    85,    24,
      25,    96,    41,    43,    98,    97,    99,   100,    86,    34,
      34,    34,    34,    34,    34,    34,    34,    22,    34,    34,
      41,    43,    32,    41,    43,    74,    44,    62,    45,    79,
      45,    77,   106,    34,    34,    45,    88,   117,   117,   117,
     117,   113,   114,   113,   114,    83,    83,    83,    83,    83,
      83,    83,   114,    83,   114,    42,    82,    83,    45,    66,
      60,    75,    63,    43,    58,    41,    43,    19,    20,   111,
      43,    43,    96,    86,    86,    86,    86,   106,    32,    43,
      11,    33,    41,    68,    62,    15,    45,    77,    89,    43,
      83,    67,    42,    69,    44,    63,    55,    43,    20,    96,
      68,    45,    60,    70,    41,    43,    62,    45,    71,    63,
      43,    63,    72,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    56,    57,    58,    55,    59,    55,    61,    60,
      60,    62,    62,    64,    63,    65,    63,    66,    63,    67,
      63,    63,    69,    68,    70,    68,    71,    68,    72,    68,
      74,    73,    75,    73,    76,    76,    76,    76,    77,    77,
      77,    78,    78,    78,    78,    78,    80,    79,    81,    79,
      82,    79,    83,    83,    83,    83,    83,    85,    84,    87,
      86,    88,    86,    89,    86,    90,    86,    91,    86,    92,
      86,    93,    86,    94,    86,    95,    86,    86,    96,    97,
      96,    98,    96,    99,    96,   100,    96,    96,    96,    96,
      96,    96,   101,   101,   102,   102,   102,   103,   103,   105,
     104,   106,   106,   107,   107,   107,   107,   107,   107,   108,
     110,   109,   111,   111,   112,   112,   113,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   117,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,    14,     0,     6,     0,     5,
       0,     2,     0,     0,     3,     0,     5,     0,     6,     0,
       8,     3,     0,     3,     0,     5,     0,     6,     0,     8,
       0,     3,     0,     5,     1,     1,     1,     1,     3,     2,
       0,     1,     1,     1,     1,     0,     0,     4,     0,     7,
       0,     9,     1,     1,     1,     1,     1,     0,     6,     0,
       3,     0,     6,     0,     8,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     4,     2,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     1,     1,
       1,     0,     2,     1,     4,     4,     5,     2,     3,     0,
       9,     1,     0,     3,     6,     8,     6,     4,     1,     6,
       0,     8,     3,     1,     1,     1,     5,     5,     1,     3,
       5,     5,     5,     5,     5,     5,     1,     5,     5,     5,
       5,     5,     5,     1,     1,     1,     1,     1,     1
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
#line 85 "syntaxical_file.y"
    { 
        // Add a variable when a function is declared
        if (addVariable((yyvsp[0].string), (yyvsp[-2].string), "idf fonction", 1, "NULL", "PROGRAM")) {sprintf(errorMsg,"double declaration de %s",(yyvsp[0].string)) ; yyerror(errorMsg);}
        strcpy(sauvType, (yyvsp[-2].string));
        addType((yyvsp[0].string), sauvType);
        sprintf(sauvPlace, "FONCTION %s", (yyvsp[0].string));
    }
#line 1437 "syntaxical_file.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 93 "syntaxical_file.y"
    { 
        // Handle function parameters
        sprintf(listeSource, "para de Fun %s", (yyvsp[-2].string));
    }
#line 1446 "syntaxical_file.tab.c"
    break;

  case 4: /* $@3: %empty  */
#line 97 "syntaxical_file.y"
                                                { 
        // Check that the return value is assigned to the function name
        if (strcmp((yyvsp[-8].string), function_return) != 0)
        { 
            sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
        } 
    }
#line 1459 "syntaxical_file.tab.c"
    break;

  case 6: /* $@4: %empty  */
#line 108 "syntaxical_file.y"
    { 
        // Handle program declaration
        sprintf(sauvPlace, "PROGRAM");
    }
#line 1468 "syntaxical_file.tab.c"
    break;

  case 7: /* Fonction: mcPROGRAM identificateur $@4 DECLARATIONS INST_S mcEND  */
#line 113 "syntaxical_file.y"
    {  
        // Accept if the program is syntactically correct
        printf("Programme syntaxiquement correct.\n");  
        YYACCEPT; 
    }
#line 1478 "syntaxical_file.tab.c"
    break;

  case 8: /* $@5: %empty  */
#line 124 "syntaxical_file.y"
    { 
        strcpy(sauvType, (yyvsp[-1].string)); 
        strcpy(IDF, (yyvsp[0].string));
    }
#line 1487 "syntaxical_file.tab.c"
    break;

  case 11: /* caractere1: etoile INTEGER  */
#line 133 "syntaxical_file.y"
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
#line 1502 "syntaxical_file.tab.c"
    break;

  case 13: /* $@6: %empty  */
#line 149 "syntaxical_file.y"
    {  
        // Add a variable to the list of declared variables
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) 
        { sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg); }
        strcpy(IDFCode, "Var Simple");
    }
#line 1513 "syntaxical_file.tab.c"
    break;

  case 15: /* $@7: %empty  */
#line 158 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[0].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1523 "syntaxical_file.tab.c"
    break;

  case 17: /* $@8: %empty  */
#line 166 "syntaxical_file.y"
    {    
        if((yyvsp[-1].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[-1].entier);
    }
#line 1537 "syntaxical_file.tab.c"
    break;

  case 19: /* $@9: %empty  */
#line 177 "syntaxical_file.y"
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
#line 1552 "syntaxical_file.tab.c"
    break;

  case 22: /* $@10: %empty  */
#line 194 "syntaxical_file.y"
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
#line 1571 "syntaxical_file.tab.c"
    break;

  case 24: /* $@11: %empty  */
#line 211 "syntaxical_file.y"
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
#line 1591 "syntaxical_file.tab.c"
    break;

  case 26: /* $@12: %empty  */
#line 229 "syntaxical_file.y"
    {   
        if((yyvsp[-1].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[-1].entier);
    }
#line 1605 "syntaxical_file.tab.c"
    break;

  case 28: /* $@13: %empty  */
#line 240 "syntaxical_file.y"
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
#line 1620 "syntaxical_file.tab.c"
    break;

  case 30: /* $@14: %empty  */
#line 255 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)){sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDFCode, "Var Simple");
    }
#line 1629 "syntaxical_file.tab.c"
    break;

  case 32: /* $@15: %empty  */
#line 262 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[0].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1639 "syntaxical_file.tab.c"
    break;

  case 46: /* $@16: %empty  */
#line 306 "syntaxical_file.y"
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
            {
                strcpy(function_return,(yyvsp[0].string));
            }
            strcpy(IDF,(yyvsp[0].string));
            strcpy(sauvType,temp);
        }
    }
#line 1661 "syntaxical_file.tab.c"
    break;

  case 48: /* $@17: %empty  */
#line 326 "syntaxical_file.y"
    {
        if(tableisDeclared((yyvsp[-3].string), sauvPlace))//return 1 si le tableau n'est pas déclaré 
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
        }
        }
    }
#line 1685 "syntaxical_file.tab.c"
    break;

  case 50: /* $@18: %empty  */
#line 348 "syntaxical_file.y"
    {
        if(matrixisDeclared((yyvsp[-5].string), sauvPlace))//return 1 si le tableau n'est pas déclaré 
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
        }
        }
    }
#line 1708 "syntaxical_file.tab.c"
    break;

  case 56: /* EXPR: caracter  */
#line 382 "syntaxical_file.y"
    {
        // Semantic code for caracter
    }
#line 1716 "syntaxical_file.tab.c"
    break;

  case 57: /* $@19: %empty  */
#line 390 "syntaxical_file.y"
    { 
        if(functionisDeclared((yyvsp[-1].string)))
        {
            sprintf(errorMsg, "la fonction \"%s\" n'est pas declarer ", (yyvsp[-1].string));
            yyerror(errorMsg);
        }
        sprintf(listeSource, "%s", sauvPlace); 
    }
#line 1729 "syntaxical_file.tab.c"
    break;

  case 59: /* $@20: %empty  */
#line 405 "syntaxical_file.y"
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
#line 1760 "syntaxical_file.tab.c"
    break;

  case 61: /* $@21: %empty  */
#line 434 "syntaxical_file.y"
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
#line 1800 "syntaxical_file.tab.c"
    break;

  case 63: /* $@22: %empty  */
#line 472 "syntaxical_file.y"
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
#line 1838 "syntaxical_file.tab.c"
    break;

  case 65: /* $@23: %empty  */
#line 507 "syntaxical_file.y"
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
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 1857 "syntaxical_file.tab.c"
    break;

  case 67: /* $@24: %empty  */
#line 524 "syntaxical_file.y"
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
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 1875 "syntaxical_file.tab.c"
    break;

  case 69: /* $@25: %empty  */
#line 540 "syntaxical_file.y"
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
        val_entier = (yyvsp[0].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    }
#line 1893 "syntaxical_file.tab.c"
    break;

  case 71: /* $@26: %empty  */
#line 556 "syntaxical_file.y"
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
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 1912 "syntaxical_file.tab.c"
    break;

  case 73: /* $@27: %empty  */
#line 573 "syntaxical_file.y"
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
        val_real = (yyvsp[0].real) ;
        sprintf(IDFValeur, "%f", val_real);
    }
#line 1931 "syntaxical_file.tab.c"
    break;

  case 75: /* $@28: %empty  */
#line 590 "syntaxical_file.y"
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
#line 1950 "syntaxical_file.tab.c"
    break;

  case 79: /* $@29: %empty  */
#line 615 "syntaxical_file.y"
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
#line 1969 "syntaxical_file.tab.c"
    break;

  case 81: /* $@30: %empty  */
#line 632 "syntaxical_file.y"
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
#line 1988 "syntaxical_file.tab.c"
    break;

  case 83: /* $@31: %empty  */
#line 649 "syntaxical_file.y"
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
#line 2007 "syntaxical_file.tab.c"
    break;

  case 85: /* $@32: %empty  */
#line 668 "syntaxical_file.y"
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
#line 2024 "syntaxical_file.tab.c"
    break;

  case 87: /* MATH_VAR1: INTEGERNEGATIF  */
#line 683 "syntaxical_file.y"
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
#line 2042 "syntaxical_file.tab.c"
    break;

  case 88: /* MATH_VAR1: INTEGERPOSITIF  */
#line 698 "syntaxical_file.y"
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
#line 2062 "syntaxical_file.tab.c"
    break;

  case 89: /* MATH_VAR1: REALNEGATIF  */
#line 715 "syntaxical_file.y"
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
#line 2079 "syntaxical_file.tab.c"
    break;

  case 90: /* MATH_VAR1: REALPOSITIF  */
#line 729 "syntaxical_file.y"
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
#line 2097 "syntaxical_file.tab.c"
    break;

  case 92: /* CHAINE_STRING: chaine CHAINE_STRING  */
#line 749 "syntaxical_file.y"
    {
        sprintf(string,"%s%s",string,(yyvsp[-1].string));
    }
#line 2105 "syntaxical_file.tab.c"
    break;

  case 93: /* CHAINE_STRING: chaine  */
#line 754 "syntaxical_file.y"
    {
        string = (yyvsp[0].string); 
    }
#line 2113 "syntaxical_file.tab.c"
    break;

  case 99: /* $@33: %empty  */
#line 779 "syntaxical_file.y"
    {
       sprintf(listeSource ,"%s",sauvPlace); 
    }
#line 2121 "syntaxical_file.tab.c"
    break;

  case 103: /* Liste1: Liste1 virgule identificateur  */
#line 796 "syntaxical_file.y"
    { 
        addVariable((yyvsp[0].string),"pas de type","Var Simple",1,"NULL",listeSource);
    }
#line 2129 "syntaxical_file.tab.c"
    break;

  case 104: /* Liste1: Liste1 virgule identificateur paraO INTEGER paraF  */
#line 802 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-3].string),"pas de type","Tableau",1,"NULL",listeSource);
    }
#line 2137 "syntaxical_file.tab.c"
    break;

  case 105: /* Liste1: Liste1 virgule identificateur paraO INTEGER virgule INTEGER paraF  */
#line 808 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-5].string),"pas de type","Matrice",1,"NULL",listeSource);
    }
#line 2145 "syntaxical_file.tab.c"
    break;

  case 106: /* Liste1: identificateur paraO INTEGER virgule INTEGER paraF  */
#line 814 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-5].string),"pas de type","Matrice",1,"NULL",listeSource);
    }
#line 2153 "syntaxical_file.tab.c"
    break;

  case 107: /* Liste1: identificateur paraO INTEGER paraF  */
#line 820 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-3].string),"pas de type","Tableau",1,"NULL",listeSource);
    }
#line 2161 "syntaxical_file.tab.c"
    break;

  case 108: /* Liste1: identificateur  */
#line 826 "syntaxical_file.y"
    { 
        addVariable((yyvsp[0].string),"pas de type","Var Simple",1,"NULL",listeSource);
    }
#line 2169 "syntaxical_file.tab.c"
    break;

  case 110: /* $@34: %empty  */
#line 837 "syntaxical_file.y"
         {condition = 1;}
#line 2175 "syntaxical_file.tab.c"
    break;

  case 111: /* if_statment: mcIF $@34 paraO condition paraF mcTHEN INST_S if_reste  */
#line 837 "syntaxical_file.y"
                                                                        {condition = 0;}
#line 2181 "syntaxical_file.tab.c"
    break;


#line 2185 "syntaxical_file.tab.c"

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

#line 913 "syntaxical_file.y"


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
