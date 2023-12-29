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
#line 21 "syntaxical_file.y"

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

char sauvType[25];
char sauvPlace[25];
char IDFValeur[25];
char IDF[25];
char listeSource [500];
char errorMsg[500];
char IDFCode[25] ="Var Simple";

int size,column,row;


#line 102 "syntaxical_file.tab.c"

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
  YYSYMBOL_68_10 = 68,                     /* $@10  */
  YYSYMBOL_69_11 = 69,                     /* $@11  */
  YYSYMBOL_70_12 = 70,                     /* $@12  */
  YYSYMBOL_71_13 = 71,                     /* $@13  */
  YYSYMBOL_72_14 = 72,                     /* $@14  */
  YYSYMBOL_DECLARATIONS2 = 73,             /* DECLARATIONS2  */
  YYSYMBOL_74_15 = 74,                     /* $@15  */
  YYSYMBOL_75_16 = 75,                     /* $@16  */
  YYSYMBOL_76_17 = 76,                     /* $@17  */
  YYSYMBOL_77_18 = 77,                     /* $@18  */
  YYSYMBOL_DECLARATIONS3 = 78,             /* DECLARATIONS3  */
  YYSYMBOL_79_19 = 79,                     /* $@19  */
  YYSYMBOL_80_20 = 80,                     /* $@20  */
  YYSYMBOL_VALEURS_entier = 81,            /* VALEURS_entier  */
  YYSYMBOL_VALEURS_real = 82,              /* VALEURS_real  */
  YYSYMBOL_type = 83,                      /* type  */
  YYSYMBOL_INST_S = 84,                    /* INST_S  */
  YYSYMBOL_INSTR = 85,                     /* INSTR  */
  YYSYMBOL_Affectation = 86,               /* Affectation  */
  YYSYMBOL_EXPR = 87,                      /* EXPR  */
  YYSYMBOL_APPEL_FONC = 88,                /* APPEL_FONC  */
  YYSYMBOL_89_21 = 89,                     /* $@21  */
  YYSYMBOL_MATH_VAR = 90,                  /* MATH_VAR  */
  YYSYMBOL_MATH_VAR1 = 91,                 /* MATH_VAR1  */
  YYSYMBOL_CHAINE_STRING = 92,             /* CHAINE_STRING  */
  YYSYMBOL_CHAINE_STRING1 = 93,            /* CHAINE_STRING1  */
  YYSYMBOL_IDFI_CHAR = 94,                 /* IDFI_CHAR  */
  YYSYMBOL_ES = 95,                        /* ES  */
  YYSYMBOL_ES_WRITE_OPTIONAL = 96,         /* ES_WRITE_OPTIONAL  */
  YYSYMBOL_Equivalence = 97,               /* Equivalence  */
  YYSYMBOL_98_22 = 98,                     /* $@22  */
  YYSYMBOL_Liste = 99,                     /* Liste  */
  YYSYMBOL_Liste1 = 100,                   /* Liste1  */
  YYSYMBOL_Boucle = 101,                   /* Boucle  */
  YYSYMBOL_if_statment = 102,              /* if_statment  */
  YYSYMBOL_condition = 103,                /* condition  */
  YYSYMBOL_expression2 = 104,              /* expression2  */
  YYSYMBOL_expression = 105,               /* expression  */
  YYSYMBOL_comparision = 106,              /* comparision  */
  YYSYMBOL_LOGICAL = 107,                  /* LOGICAL  */
  YYSYMBOL_OPER = 108                      /* OPER  */
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
#define YYLAST   350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  307

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
       0,    81,    81,    89,    94,    80,   105,   104,   119,   118,
     123,   128,   133,   139,   138,   147,   146,   155,   154,   161,
     160,   168,   167,   174,   173,   180,   179,   186,   185,   192,
     191,   201,   200,   218,   217,   236,   235,   242,   241,   252,
     251,   259,   258,   270,   272,   274,   279,   281,   283,   288,
     290,   292,   294,   299,   301,   302,   308,   310,   312,   314,
     315,   321,   326,   328,   330,   332,   338,   337,   347,   349,
     351,   353,   355,   357,   359,   361,   363,   365,   370,   372,
     374,   376,   378,   380,   382,   384,   386,   387,   393,   398,
     400,   401,   407,   409,   414,   416,   418,   423,   425,   432,
     430,   440,   441,   447,   453,   459,   465,   471,   478,   485,
     490,   492,   497,   499,   504,   506,   508,   510,   512,   514,
     519,   521,   523,   525,   527,   529,   531,   533,   535,   537,
     539,   541,   546,   548,   550,   552,   554,   556,   558,   560,
     562,   567,   569,   573,   575,   577,   579
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
  "DECLARATIONS1", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "$@13", "$@14", "DECLARATIONS2", "$@15", "$@16", "$@17", "$@18",
  "DECLARATIONS3", "$@19", "$@20", "VALEURS_entier", "VALEURS_real",
  "type", "INST_S", "INSTR", "Affectation", "EXPR", "APPEL_FONC", "$@21",
  "MATH_VAR", "MATH_VAR1", "CHAINE_STRING", "CHAINE_STRING1", "IDFI_CHAR",
  "ES", "ES_WRITE_OPTIONAL", "Equivalence", "$@22", "Liste", "Liste1",
  "Boucle", "if_statment", "condition", "expression2", "expression",
  "comparision", "LOGICAL", "OPER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-217)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     189,  -217,  -217,  -217,  -217,   -30,    26,    28,  -217,  -217,
      34,    95,  -217,  -217,    60,    55,   202,     8,  -217,    82,
     112,  -217,   127,   147,   158,   110,   114,  -217,  -217,  -217,
    -217,  -217,   138,  -217,   162,   169,   167,    46,    46,  -217,
      20,  -217,  -217,    42,   186,   192,   195,   194,    15,  -217,
    -217,    46,   231,   251,   251,   251,   251,   251,   251,   209,
     204,  -217,   211,  -217,   214,   213,   162,   210,   128,  -217,
    -217,  -217,  -217,  -217,  -217,   -25,  -217,   215,    73,  -217,
     216,  -217,   218,    95,   221,  -217,   225,  -217,   227,    12,
      18,   238,  -217,  -217,  -217,  -217,   229,    44,    44,    44,
      44,  -217,   128,  -217,  -217,  -217,  -217,  -217,  -217,    85,
     257,    16,   108,  -217,   100,   237,   239,    10,    10,  -217,
     235,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,    95,     8,   105,  -217,   247,   240,  -217,   281,
     251,  -217,   178,   136,   128,   128,   128,   128,  -217,   258,
     259,   260,   262,   265,   266,   267,   268,  -217,   279,   280,
     282,   283,   284,   217,   274,  -217,   -25,   -25,   141,   -20,
     -20,   -20,   -20,   -20,  -217,  -217,   236,  -217,   241,   275,
    -217,   285,   287,  -217,   288,   289,   286,   251,  -217,  -217,
    -217,  -217,    46,    46,   128,    92,   128,   128,   128,   128,
      -1,    46,    46,    46,    46,    92,  -217,   290,   162,  -217,
    -217,   291,  -217,  -217,   293,  -217,  -217,  -217,  -217,  -217,
      42,   292,   294,   173,    46,    46,    46,    46,   295,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,   162,   296,   297,     4,    95,
    -217,  -217,  -217,    20,   298,  -217,   299,   251,   232,   301,
    -217,  -217,   300,  -217,   302,  -217,  -217,     8,   226,   304,
    -217,  -217,  -217,     4,   303,    95,  -217,    42,   309,  -217,
    -217,   177,  -217,     8,  -217,   189,   305,  -217,    42,  -217,
     306,    42,  -217,  -217,  -217,    42,  -217
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    49,    51,    52,    50,     0,     0,     0,     6,     1,
       0,    10,     2,    55,     0,     0,    60,    12,     3,     0,
       0,     7,     0,     0,     0,     0,     0,    56,    57,    59,
      58,    54,     0,     8,   102,     0,     0,     0,     0,    99,
       0,    53,    11,     0,   108,     0,   101,     0,     0,   141,
     142,     0,    87,    87,    87,    87,    87,    87,    87,   116,
       0,   113,   112,   131,   119,     0,     0,     0,     0,    93,
      92,    61,    64,    63,    62,    91,    65,     0,     0,    13,
       0,     9,     0,    10,     0,    94,     0,    95,     0,     0,
       0,     0,   143,   144,   146,   145,     0,    84,    83,    85,
      86,    68,     0,    71,    72,    73,    74,    76,    75,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,    88,
       0,    43,    44,    45,    46,    27,    25,    48,    47,    21,
      23,    29,    10,    12,     0,    55,   103,    97,    96,     0,
      87,   120,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,    60,     0,    66,    91,    91,     0,     0,
       0,     0,     0,     0,    14,    15,     0,   107,    60,     0,
      98,     0,     0,    77,     0,     0,     0,    87,    80,    79,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,   109,     0,   102,    89,
      90,     0,    17,    39,     0,    28,    26,    22,    24,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
     115,   128,   114,   127,   136,   132,   134,   137,   138,   139,
     140,    55,   111,   124,   122,   126,   123,   121,   125,   118,
     130,   117,   129,   135,   133,   102,     0,     0,     0,    10,
      41,    16,   106,     0,     0,   104,     0,    87,    60,     0,
      67,    19,     0,    31,     0,    18,    40,    12,     4,     0,
      70,   110,   100,     0,     0,    10,    33,     0,     0,   105,
      20,     0,    32,    12,    42,     0,     0,    35,     0,     5,
       0,     0,    34,    37,    36,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,    30,  -217,  -217,  -217,  -217,   -81,  -217,  -128,  -216,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,    45,
    -217,  -217,  -217,  -217,   -43,  -217,  -217,  -217,  -217,     0,
    -110,  -217,  -217,    64,  -217,  -217,   -39,   -23,  -217,   -80,
     104,  -217,  -217,  -217,  -217,  -201,   263,  -217,  -217,   307,
    -165,     6,  -217,   -34,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,    15,    34,   288,    11,    13,    43,    33,    81,
     132,   220,   258,   283,   171,   172,   170,   169,   173,   275,
     285,   293,   301,   305,   215,   259,   277,   129,   130,    14,
      16,    26,    27,    71,    72,   208,    59,   101,    74,   119,
      75,    28,    88,    29,    66,    45,    46,    30,    31,    60,
      61,    62,    63,    64,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    73,   135,   163,   261,   175,    76,   256,    19,    20,
     117,   118,    89,   213,     8,   272,    22,    91,   241,   242,
      23,   214,    24,    49,    50,   178,     9,   230,   232,   116,
     103,   104,   105,   106,   107,   108,    67,   273,   249,   251,
     158,   159,    10,    25,   131,   274,   139,   200,    32,    49,
      50,   174,   111,    77,   269,   140,    86,    90,    87,    69,
      70,   141,    68,   148,    52,    53,    54,    55,    56,    69,
      70,   294,    57,    58,    78,    79,    49,    50,    12,    92,
      93,    94,   302,    80,    95,   304,   209,   210,    51,   306,
      52,    53,    54,    55,    56,    49,    50,    18,    57,    58,
       1,     2,     3,     4,    17,   188,   189,   190,   191,   149,
     150,   151,   152,   153,   154,   155,   156,   183,   121,   122,
     123,   124,   125,   126,    35,   127,   128,   216,   217,   218,
     219,   268,   160,   161,    68,   162,    52,    53,    54,    55,
      56,    84,    40,   164,    57,    58,   176,    41,   177,   287,
     144,   145,   146,   147,    36,   234,   235,   237,   238,   239,
     240,   236,   243,   246,   229,   298,   253,   245,   248,    37,
      68,   254,    52,    53,    54,    55,    56,   186,   276,   187,
      57,    58,   211,    42,   212,   266,   266,   266,   266,    38,
      91,    91,    91,    91,     1,     2,     3,     4,   231,   233,
      39,     5,   184,   185,   292,   162,    44,   244,   247,   250,
     252,    19,    20,    47,   264,    21,   265,    48,   296,    22,
     297,   166,   167,    23,    73,    24,    19,    20,    82,    76,
     231,   233,   250,   252,    22,    83,    84,    85,    23,   206,
      24,    19,    20,   109,   280,   111,    25,   110,   112,    22,
      19,    20,   281,    23,   115,    24,   113,   120,    22,   -61,
     133,    25,    23,   134,    24,   136,    92,    93,    94,   137,
     138,    95,   142,    96,   143,   157,    25,    97,    98,   165,
     168,   221,   140,    99,   100,   222,    92,    93,    94,   179,
     180,    95,   192,   193,   194,     7,   195,    97,    98,   196,
     197,   198,   199,    99,   100,   181,   182,   151,   152,   153,
     154,   155,   156,   201,   202,   207,   203,   204,   205,   224,
     223,   225,   226,   227,   295,   299,   263,   278,   290,   114,
       0,   228,   255,   139,     0,   262,   257,   260,   267,   270,
     271,     0,   284,   279,   282,    65,   286,   289,   291,   303,
     300
};

static const yytype_int16 yycheck[] =
{
       0,    40,    83,   113,   220,   133,    40,   208,     9,    10,
      35,    36,    51,    33,    44,    11,    17,    51,    19,    20,
      21,    41,    23,     3,     4,   135,     0,   192,   193,    68,
      53,    54,    55,    56,    57,    58,    16,    33,   203,   204,
      24,    25,    14,    44,    78,    41,    34,   157,    40,     3,
       4,   132,    34,    11,   255,    43,    41,    51,    43,    49,
      50,    43,    42,   102,    44,    45,    46,    47,    48,    49,
      50,   287,    52,    53,    32,    33,     3,     4,    44,    35,
      36,    37,   298,    41,    40,   301,   166,   167,    42,   305,
      44,    45,    46,    47,    48,     3,     4,    42,    52,    53,
       5,     6,     7,     8,    44,   144,   145,   146,   147,    24,
      25,    26,    27,    28,    29,    30,    31,   140,    45,    46,
      47,    48,    49,    50,    42,    52,    53,   170,   171,   172,
     173,   241,    24,    25,    42,    27,    44,    45,    46,    47,
      48,    41,    32,    43,    52,    53,    41,    33,    43,   277,
      97,    98,    99,   100,    42,   194,   195,   196,   197,   198,
     199,   195,   201,   202,   187,   293,   205,   201,   202,    42,
      42,   205,    44,    45,    46,    47,    48,    41,   259,    43,
      52,    53,    41,    45,    43,   224,   225,   226,   227,    42,
     224,   225,   226,   227,     5,     6,     7,     8,   192,   193,
      42,    12,    24,    25,   285,    27,    44,   201,   202,   203,
     204,     9,    10,    44,    41,    13,    43,    50,    41,    17,
      43,   117,   118,    21,   263,    23,     9,    10,    42,   263,
     224,   225,   226,   227,    17,    43,    41,    43,    21,    22,
      23,     9,    10,    34,   267,    34,    44,    43,    34,    17,
       9,    10,    20,    21,    44,    23,    43,    42,    17,    33,
      44,    44,    21,    45,    23,    44,    35,    36,    37,    44,
      43,    40,    34,    42,    45,    18,    44,    46,    47,    42,
      45,    45,    43,    52,    53,    44,    35,    36,    37,    42,
      50,    40,    34,    34,    34,   295,    34,    46,    47,    34,
      34,    34,    34,    52,    53,    24,    25,    26,    27,    28,
      29,    30,    31,    34,    34,    41,    34,    34,    34,    34,
      45,    34,    34,    34,    15,   295,    32,   263,   283,    66,
      -1,    45,    42,    34,    -1,    43,    45,    44,    43,    43,
      43,    -1,    42,    45,    43,    38,    44,    43,    45,    43,
      45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    12,    55,    83,    44,     0,
      14,    59,    44,    60,    83,    56,    84,    44,    42,     9,
      10,    13,    17,    21,    23,    44,    85,    86,    95,    97,
     101,   102,    40,    62,    57,    42,    42,    42,    42,    42,
      32,    33,    45,    61,    44,    99,   100,    44,    50,     3,
       4,    42,    44,    45,    46,    47,    48,    52,    53,    90,
     103,   104,   105,   106,   107,   103,    98,    16,    42,    49,
      50,    87,    88,    90,    92,    94,   107,    11,    32,    33,
      41,    63,    42,    43,    41,    43,    41,    43,    96,    90,
     105,   107,    35,    36,    37,    40,    42,    46,    47,    52,
      53,    91,   108,    91,    91,    91,    91,    91,    91,    34,
      43,    34,    34,    43,   100,    44,    90,    35,    36,    93,
      42,    45,    46,    47,    48,    49,    50,    52,    53,    81,
      82,   107,    64,    44,    45,    60,    44,    44,    43,    34,
      43,    43,    34,    45,   108,   108,   108,   108,    90,    24,
      25,    26,    27,    28,    29,    30,    31,    18,    24,    25,
      24,    25,    27,    84,    43,    42,    94,    94,    45,    71,
      70,    68,    69,    72,    60,    62,    41,    43,    84,    42,
      50,    24,    25,    91,    24,    25,    41,    43,    90,    90,
      90,    90,    34,    34,    34,    34,    34,    34,    34,    34,
      84,    34,    34,    34,    34,    34,    22,    41,    89,    93,
      93,    41,    43,    33,    41,    78,    78,    78,    78,    78,
      65,    45,    44,    45,    34,    34,    34,    34,    45,    91,
     104,   105,   104,   105,    90,    90,   107,    90,    90,    90,
      90,    19,    20,    90,   105,   107,    90,   105,   107,   104,
     105,   104,   105,    90,   107,    42,    99,    45,    66,    79,
      44,    63,    43,    32,    41,    43,    90,    43,    84,    99,
      43,    43,    11,    33,    41,    73,    60,    80,    87,    45,
      91,    20,    43,    67,    42,    74,    44,    62,    58,    43,
      73,    45,    60,    75,    63,    15,    41,    43,    62,    55,
      45,    76,    63,    43,    63,    77,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    56,    57,    58,    55,    59,    55,    61,    60,
      60,    62,    62,    64,    63,    65,    63,    66,    63,    67,
      63,    68,    63,    69,    63,    70,    63,    71,    63,    72,
      63,    74,    73,    75,    73,    76,    73,    77,    73,    79,
      78,    80,    78,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    84,    85,    85,    85,    85,
      85,    86,    87,    87,    87,    87,    89,    88,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    93,
      93,    93,    94,    94,    95,    95,    95,    96,    96,    98,
      97,    99,    99,   100,   100,   100,   100,   100,   100,   101,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   108,   108,   108,   108
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,    16,     0,     6,     0,     5,
       0,     2,     0,     0,     3,     0,     5,     0,     6,     0,
       8,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     3,     0,     5,     0,     6,     0,     8,     0,
       3,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     0,     1,     1,     1,     1,
       0,     3,     1,     1,     1,     1,     0,     6,     2,     5,
       7,     2,     2,     2,     2,     2,     2,     4,     2,     3,
       3,     3,     3,     1,     1,     1,     1,     0,     2,     3,
       3,     0,     1,     1,     4,     4,     5,     2,     3,     0,
       9,     1,     0,     3,     6,     8,     6,     4,     1,     6,
       9,     7,     1,     1,     5,     5,     1,     5,     5,     1,
       3,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     1,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     1,     1
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
#line 81 "syntaxical_file.y"
    { 
        // Add a variable when a function is declared
        if (addVariable((yyvsp[0].string), (yyvsp[-2].string), "idf fonction", 1, "NULL", "PROGRAM")) {sprintf(errorMsg,"double declaration de %s",(yyvsp[0].string)) ; yyerror(errorMsg);}
        strcpy(sauvType, (yyvsp[-2].string));
        addType((yyvsp[0].string), sauvType);
        sprintf(sauvPlace, "FONCTION %s", (yyvsp[0].string));
    }
#line 1422 "syntaxical_file.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 89 "syntaxical_file.y"
    { 
        // Handle function parameters
        sprintf(listeSource, "para de Fun %s", (yyvsp[-2].string));
    }
#line 1431 "syntaxical_file.tab.c"
    break;

  case 4: /* $@3: %empty  */
#line 94 "syntaxical_file.y"
    { 
        // Check that the return value is assigned to the function name
        if (strcmp((yyvsp[-10].string), (yyvsp[-2].string)) != 0)
        { 
            sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
        } 
    }
#line 1444 "syntaxical_file.tab.c"
    break;

  case 6: /* $@4: %empty  */
#line 105 "syntaxical_file.y"
    { 
        // Handle program declaration
        sprintf(sauvPlace, "PROGRAM");
    }
#line 1453 "syntaxical_file.tab.c"
    break;

  case 7: /* Fonction: mcPROGRAM identificateur $@4 DECLARATIONS INST_S mcEND  */
#line 110 "syntaxical_file.y"
    {  
        // Accept if the program is syntactically correct
        printf("Programme syntaxiquement correct.\n");  
        YYACCEPT; 
    }
#line 1463 "syntaxical_file.tab.c"
    break;

  case 8: /* $@5: %empty  */
#line 119 "syntaxical_file.y"
    { 
        strcpy(sauvType, (yyvsp[-2].string)); 
        strcpy(IDF, (yyvsp[-1].string));
    }
#line 1472 "syntaxical_file.tab.c"
    break;

  case 11: /* caractere1: etoile INTEGER  */
#line 129 "syntaxical_file.y"
    {
        strcpy(IDFCode, "Tableau"); 
        size = (yyvsp[0].entier);
    }
#line 1481 "syntaxical_file.tab.c"
    break;

  case 13: /* $@6: %empty  */
#line 139 "syntaxical_file.y"
    {  
        // Add a variable to the list of declared variables
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDFCode, "Var Simple");
    }
#line 1491 "syntaxical_file.tab.c"
    break;

  case 15: /* $@7: %empty  */
#line 147 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[-1].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1501 "syntaxical_file.tab.c"
    break;

  case 17: /* $@8: %empty  */
#line 155 "syntaxical_file.y"
    {
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[-1].entier);
    }
#line 1510 "syntaxical_file.tab.c"
    break;

  case 19: /* $@9: %empty  */
#line 161 "syntaxical_file.y"
    {
        strcpy(IDFCode, "Matrice");
        row = (yyvsp[-3].entier);
        column = (yyvsp[-1].entier);
    }
#line 1520 "syntaxical_file.tab.c"
    break;

  case 21: /* $@10: %empty  */
#line 168 "syntaxical_file.y"
    { 
        sprintf(IDFValeur, "%d", (yyvsp[0].entier));
    }
#line 1528 "syntaxical_file.tab.c"
    break;

  case 23: /* $@11: %empty  */
#line 174 "syntaxical_file.y"
    { 
        sprintf(IDFValeur, "%f", (yyvsp[0].real));
    }
#line 1536 "syntaxical_file.tab.c"
    break;

  case 25: /* $@12: %empty  */
#line 180 "syntaxical_file.y"
    { 
        sprintf(IDFValeur, "%s", (yyvsp[0].string));
    }
#line 1544 "syntaxical_file.tab.c"
    break;

  case 27: /* $@13: %empty  */
#line 186 "syntaxical_file.y"
    {  
        sprintf(IDFValeur, "%c", (yyvsp[0].caracter));
    }
#line 1552 "syntaxical_file.tab.c"
    break;

  case 29: /* $@14: %empty  */
#line 192 "syntaxical_file.y"
    { 
        sprintf(IDFValeur, "%s", (yyvsp[0].string));
    }
#line 1560 "syntaxical_file.tab.c"
    break;

  case 31: /* $@15: %empty  */
#line 201 "syntaxical_file.y"
    { 
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        if (strcmp(IDFCode, "Tableau") == 0) 
        { 
            if (addSize(IDF, sauvPlace, size))   
                yyerror("var n'est pas declarer");
        }   
        if (strcmp(IDFCode, "Matrice") == 0) 
        {   printf("matrice");
            if (addRowCol(IDF, sauvPlace, row, column))  
                yyerror("var n'est pas declarer");              
        }
        strcpy(IDFCode, "Var Simple");
    }
#line 1579 "syntaxical_file.tab.c"
    break;

  case 33: /* $@16: %empty  */
#line 218 "syntaxical_file.y"
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
#line 1599 "syntaxical_file.tab.c"
    break;

  case 35: /* $@17: %empty  */
#line 236 "syntaxical_file.y"
    {
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[-1].entier);
    }
#line 1608 "syntaxical_file.tab.c"
    break;

  case 37: /* $@18: %empty  */
#line 242 "syntaxical_file.y"
    {
        strcpy(IDFCode, "Matrice");
        row =(yyvsp[-3].entier);
        column =(yyvsp[-1].entier);
    }
#line 1618 "syntaxical_file.tab.c"
    break;

  case 39: /* $@19: %empty  */
#line 252 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) yyerror("double declaration ");
        strcpy(IDFCode, "Var Simple");
    }
#line 1627 "syntaxical_file.tab.c"
    break;

  case 41: /* $@20: %empty  */
#line 259 "syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[0].string));
        strcpy(IDFCode, "Var Simple");
    }
#line 1637 "syntaxical_file.tab.c"
    break;

  case 66: /* $@21: %empty  */
#line 338 "syntaxical_file.y"
    { 
        sprintf(listeSource, "%s", sauvPlace); 
    }
#line 1645 "syntaxical_file.tab.c"
    break;

  case 99: /* $@22: %empty  */
#line 432 "syntaxical_file.y"
    {
       sprintf(listeSource ,"%s",sauvPlace); 
    }
#line 1653 "syntaxical_file.tab.c"
    break;

  case 103: /* Liste1: Liste1 virgule identificateur  */
#line 449 "syntaxical_file.y"
    { 
        addVariable((yyvsp[0].string),"pas de type","Var Simple",1,"NULL",listeSource);
    }
#line 1661 "syntaxical_file.tab.c"
    break;

  case 104: /* Liste1: Liste1 virgule identificateur paraO INTEGER paraF  */
#line 455 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-3].string),"pas de type","Tableau",1,"NULL",listeSource);
    }
#line 1669 "syntaxical_file.tab.c"
    break;

  case 105: /* Liste1: Liste1 virgule identificateur paraO INTEGER virgule INTEGER paraF  */
#line 461 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-5].string),"pas de type","Matrice",1,"NULL",listeSource);
    }
#line 1677 "syntaxical_file.tab.c"
    break;

  case 106: /* Liste1: identificateur paraO INTEGER virgule INTEGER paraF  */
#line 467 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-5].string),"pas de type","Matrice",1,"NULL",listeSource);
    }
#line 1685 "syntaxical_file.tab.c"
    break;

  case 107: /* Liste1: identificateur paraO INTEGER paraF  */
#line 473 "syntaxical_file.y"
    { 
        addVariable((yyvsp[-3].string),"pas de type","Tableau",1,"NULL",listeSource);
    }
#line 1693 "syntaxical_file.tab.c"
    break;

  case 108: /* Liste1: identificateur  */
#line 479 "syntaxical_file.y"
    { 
        addVariable((yyvsp[0].string),"pas de type","Var Simple",1,"NULL",listeSource);
    }
#line 1701 "syntaxical_file.tab.c"
    break;


#line 1705 "syntaxical_file.tab.c"

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

#line 582 "syntaxical_file.y"


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
