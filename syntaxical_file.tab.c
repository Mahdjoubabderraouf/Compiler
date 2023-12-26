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

void addType(char *name, char *type);
void addVarPlace(char *name, char *varPlace);

char sauvType[25];
char sauvPlace[25];

#line 91 "syntaxical_file.tab.c"

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
  YYSYMBOL_DECLARATIONS = 57,              /* DECLARATIONS  */
  YYSYMBOL_caractere1 = 58,                /* caractere1  */
  YYSYMBOL_DECLARATIONS1 = 59,             /* DECLARATIONS1  */
  YYSYMBOL_DECLARATIONS2 = 60,             /* DECLARATIONS2  */
  YYSYMBOL_VALEURS = 61,                   /* VALEURS  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_INST_S = 63,                    /* INST_S  */
  YYSYMBOL_INSTR = 64,                     /* INSTR  */
  YYSYMBOL_Affectation = 65,               /* Affectation  */
  YYSYMBOL_EXPR = 66,                      /* EXPR  */
  YYSYMBOL_APPEL_FONC = 67,                /* APPEL_FONC  */
  YYSYMBOL_MATH_VAR = 68,                  /* MATH_VAR  */
  YYSYMBOL_MATH_VAR1 = 69,                 /* MATH_VAR1  */
  YYSYMBOL_CHAINE_STRING = 70,             /* CHAINE_STRING  */
  YYSYMBOL_CHAINE_STRING1 = 71,            /* CHAINE_STRING1  */
  YYSYMBOL_IDFI_CHAR = 72,                 /* IDFI_CHAR  */
  YYSYMBOL_ES = 73,                        /* ES  */
  YYSYMBOL_ES_WRITE_OPTIONAL = 74,         /* ES_WRITE_OPTIONAL  */
  YYSYMBOL_Appel = 75,                     /* Appel  */
  YYSYMBOL_Equivalence = 76,               /* Equivalence  */
  YYSYMBOL_Liste = 77,                     /* Liste  */
  YYSYMBOL_Boucle = 78,                    /* Boucle  */
  YYSYMBOL_Condition = 79,                 /* Condition  */
  YYSYMBOL_expression2 = 80,               /* expression2  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_comparision = 82,               /* comparision  */
  YYSYMBOL_LOGICAL = 83,                   /* LOGICAL  */
  YYSYMBOL_OPER = 84                       /* OPER  */
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
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

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
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    45,    46,    49,    50,    53,    54,    57,
      58,    59,    60,    61,    63,    64,    65,    66,    69,    69,
      69,    69,    71,    71,    71,    71,    73,    73,    74,    76,
      77,    78,    79,    80,    81,    84,    87,    88,    89,    90,
      91,    94,    96,    97,    98,    99,   100,   101,   103,   104,
     105,   106,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   123,   125,   126,   127,   130,   131,   134,   135,
     136,   139,   139,   141,   143,   145,   146,   147,   148,   149,
     150,   153,   154,   158,   159,   162,   163,   164,   165,   166,
     167,   170,   171,   172,   173,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   187,   188,   191,   192,   193,   194
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
  "$@1", "DECLARATIONS", "caractere1", "DECLARATIONS1", "DECLARATIONS2",
  "VALEURS", "type", "INST_S", "INSTR", "Affectation", "EXPR",
  "APPEL_FONC", "MATH_VAR", "MATH_VAR1", "CHAINE_STRING", "CHAINE_STRING1",
  "IDFI_CHAR", "ES", "ES_WRITE_OPTIONAL", "Appel", "Equivalence", "Liste",
  "Boucle", "Condition", "expression2", "expression", "comparision",
  "LOGICAL", "OPER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     244,   -82,   -82,   -82,   -82,   -17,    32,    26,   266,   -82,
       3,   -82,     9,     1,   175,    34,    16,    39,    48,   -82,
      60,    73,    97,   -21,    44,   -82,   -82,   -82,   -82,   -82,
     -82,    40,    43,   123,    18,    53,   103,    47,    47,    16,
      20,    16,   -82,   -82,   128,   220,   266,    65,   -82,   137,
     161,   266,   166,    37,   -82,   -82,    47,    98,   187,   187,
     187,   187,   187,   187,   179,   -18,   -82,   182,   223,   178,
      -5,   246,    55,   -82,   -82,   184,    59,   -82,   -82,   -82,
     -82,   -82,   -82,   165,    67,   209,   -82,   -82,   -82,   -82,
      43,   -82,    34,    79,   240,   -82,   -82,   245,   -82,   247,
      -4,    -1,   -82,   -82,   -82,   -82,   248,   195,   195,   195,
     195,   -82,    59,   -82,   -82,   -82,   -82,   -82,   -82,   233,
     201,   273,   265,   217,   -82,   -82,    10,   253,   254,   252,
     234,   234,   -82,   -82,   111,   -82,    43,   255,   -82,   256,
     194,   249,   -82,   187,   -82,   156,    59,    59,    59,    59,
     -82,   263,   264,   268,   269,   270,   271,   272,   274,   -82,
     275,   276,   277,    35,   185,   278,   279,   280,    16,   165,
     165,   262,    30,   -82,   281,   169,   -14,   -82,   -82,   282,
     187,   -82,   -82,   -82,   -82,    59,    84,    59,    59,    59,
      59,    47,    47,   170,    84,    84,    84,   -82,   -82,    84,
      84,    16,   177,   -82,   -82,   283,   286,   266,   285,   -82,
     -82,   287,   -82,    20,   288,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   284,
     -82,   289,   -82,   -82,   -82,   212,   -82,    30,   290,   -82,
      34,   291,   299,   187,   104,   242,   261,   -82,   -82,   238,
      43,   -82,   -82,   -82,   -82,   292,    43,   -82,   244,   293,
     -82,   -82,    43,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    24,    25,    23,     0,     0,     0,     6,     1,
       0,    28,     0,     0,    34,     8,     0,     0,     0,     4,
       0,     0,     0,     0,     0,    29,    30,    32,    33,    31,
      27,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     7,     0,     0,     6,     0,     5,     0,
       0,     6,     0,     0,   104,   105,     0,    61,    61,    61,
      61,    61,    61,    61,     0,     0,    94,     0,    87,     0,
       0,    90,     0,    40,    39,     0,     0,    67,    66,    35,
      38,    37,    36,    65,     0,     0,    19,    18,    20,    21,
       0,     9,     8,     0,    76,    28,    68,     0,    69,     0,
       0,     0,   106,   107,   109,   108,     0,    58,    57,    59,
      60,    42,     0,    45,    46,    47,    48,    50,    49,     0,
       0,     0,     0,     0,    28,    28,     0,     0,     0,     0,
       0,     0,    62,    73,     0,    13,     0,     0,    80,     0,
      34,    71,    70,    61,    91,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,    34,    34,     0,     0,     0,     0,    65,
      65,     0,     0,    10,     0,     0,     0,    72,    51,     0,
      61,    54,    53,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    82,    81,     0,
       0,     0,     0,    63,    64,     0,     0,     6,     0,    11,
      79,     0,    77,     0,     0,    43,    99,    95,    97,   100,
     101,   102,   103,    93,    92,    28,    84,    98,    96,    87,
      86,    90,    85,    89,    88,     0,    41,     0,     0,    14,
       8,     0,    35,    61,    34,     0,     0,    74,    12,     0,
       0,    78,     2,    44,    83,     0,     0,    15,     0,     0,
      16,     3,     0,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,    57,   -82,   -29,   -72,   -81,    80,   -82,     0,   -76,
     -82,   -82,   107,   -82,   -30,   -57,   -82,   118,   106,   -82,
     -82,   -82,   -82,   -27,   -82,   -82,   -53,   -25,   -82,   -23,
     168
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,   258,    11,    32,    48,   209,    90,    12,    14,
      24,    25,    79,    80,   229,   111,    82,   132,    83,    26,
      99,    27,    28,    34,    29,    30,    69,    65,    66,    67,
     112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   113,   114,   115,   116,   117,   118,    64,    68,   135,
      81,    40,    72,    70,    84,    71,   120,    91,   213,   140,
     136,    41,    95,    73,    74,   121,   100,     8,    41,   120,
     119,   101,     9,   120,   165,   166,    75,   160,   125,   143,
      10,   206,   144,    16,    17,    18,   129,    13,   163,   164,
      54,    55,    20,    15,    44,   173,    21,   197,    22,    50,
      33,    51,    76,   207,    57,    58,    59,    60,    61,    77,
      78,   208,    62,    63,    31,    45,    46,    42,    97,    23,
      98,    35,   150,   193,    47,    43,   178,    54,    55,    56,
      36,    57,    58,    59,    60,    61,    50,    52,   127,    62,
      63,    76,    37,    57,    58,    59,    60,    61,    50,    92,
     133,    62,    63,    17,    18,    38,   181,   182,   183,   184,
     137,    20,   138,   215,   254,    21,    76,    22,    57,    58,
      59,    60,    61,   102,   103,   104,    62,    63,   105,    39,
     106,   202,   230,   232,   107,   108,   233,   234,    23,   244,
     109,   110,   171,    53,   172,   216,   217,   219,   220,   221,
     222,    64,    64,   218,   227,    49,   223,   224,   250,   257,
      85,   228,   231,   231,   235,   260,   231,   231,   239,    17,
      18,   263,    93,    81,    17,    18,   253,    20,    19,   225,
     226,    21,    20,    22,    17,    18,    21,   179,    22,   180,
     130,   131,    20,    17,    18,    94,    21,   198,    22,    96,
     211,    20,   212,   119,    23,    21,   122,    22,    50,    23,
     236,   124,   102,   103,   104,   157,   158,   105,   128,    23,
     102,   103,   104,   107,   108,   105,   169,   170,   176,   109,
     110,   161,   162,   151,   152,   153,   154,   155,   156,     1,
       2,     3,     4,    50,   134,   247,     5,   123,     7,   151,
     152,   153,   154,   155,   156,    86,   161,   162,    87,    88,
      89,     1,     2,     3,     4,   146,   147,   148,   149,   255,
     126,   256,   139,    77,    78,   165,   166,   203,   204,   141,
     142,   159,   160,   145,   167,   143,   168,   185,   186,   177,
     174,   175,   187,   188,   189,   190,   191,   205,   192,   194,
     195,   196,   199,   200,   252,   261,     0,   248,   245,     0,
     242,     0,   201,   246,   210,     0,   237,   214,   238,   240,
       0,   243,   241,     0,   251,   249,   262,   259
};

static const yytype_int16 yycheck[] =
{
       0,    58,    59,    60,    61,    62,    63,    37,    38,    90,
      40,    32,    39,    38,    41,    38,    34,    46,    32,    95,
      92,    42,    51,     3,     4,    43,    56,    44,    42,    34,
      34,    56,     0,    34,    24,    25,    16,    27,    43,    43,
      14,    11,    43,    42,     9,    10,    76,    44,   124,   125,
       3,     4,    17,    44,    11,   136,    21,    22,    23,    41,
      44,    43,    42,    33,    44,    45,    46,    47,    48,    49,
      50,    41,    52,    53,    40,    32,    33,    33,    41,    44,
      43,    42,   112,   159,    41,    45,   143,     3,     4,    42,
      42,    44,    45,    46,    47,    48,    41,    44,    43,    52,
      53,    42,    42,    44,    45,    46,    47,    48,    41,    44,
      43,    52,    53,     9,    10,    42,   146,   147,   148,   149,
      41,    17,    43,   180,    20,    21,    42,    23,    44,    45,
      46,    47,    48,    35,    36,    37,    52,    53,    40,    42,
      42,   168,   195,   196,    46,    47,   199,   200,    44,   225,
      52,    53,    41,    50,    43,   185,   186,   187,   188,   189,
     190,   191,   192,   186,   194,    42,   191,   192,   240,   250,
      42,   194,   195,   196,   201,   256,   199,   200,   207,     9,
      10,   262,    45,   213,     9,    10,   243,    17,    13,    19,
      20,    21,    17,    23,     9,    10,    21,    41,    23,    43,
      35,    36,    17,     9,    10,    44,    21,    22,    23,    43,
      41,    17,    43,    34,    44,    21,    34,    23,    41,    44,
      43,    43,    35,    36,    37,    24,    25,    40,    44,    44,
      35,    36,    37,    46,    47,    40,   130,   131,    44,    52,
      53,    24,    25,    26,    27,    28,    29,    30,    31,     5,
       6,     7,     8,    41,    45,    43,    12,    34,   258,    26,
      27,    28,    29,    30,    31,    45,    24,    25,    48,    49,
      50,     5,     6,     7,     8,   107,   108,   109,   110,    41,
      34,    43,    42,    49,    50,    24,    25,   169,   170,    44,
      43,    18,    27,    45,    41,    43,    42,    34,    34,    50,
      45,    45,    34,    34,    34,    34,    34,    45,    34,    34,
      34,    34,    34,    34,    15,   258,    -1,   237,    34,    -1,
     213,    -1,    42,    34,    43,    -1,    43,    45,    42,    44,
      -1,    43,    45,    -1,    43,    45,    43,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    12,    55,    62,    44,     0,
      14,    57,    62,    44,    63,    44,    42,     9,    10,    13,
      17,    21,    23,    44,    64,    65,    73,    75,    76,    78,
      79,    40,    58,    44,    77,    42,    42,    42,    42,    42,
      32,    42,    33,    45,    11,    32,    33,    41,    59,    42,
      41,    43,    44,    50,     3,     4,    42,    44,    45,    46,
      47,    48,    52,    53,    68,    81,    82,    83,    68,    80,
      81,    83,    77,     3,     4,    16,    42,    49,    50,    66,
      67,    68,    70,    72,    77,    42,    45,    48,    49,    50,
      61,    57,    44,    45,    44,    57,    43,    41,    43,    74,
      68,    81,    35,    36,    37,    40,    42,    46,    47,    52,
      53,    69,    84,    69,    69,    69,    69,    69,    69,    34,
      34,    43,    34,    34,    43,    43,    34,    43,    44,    68,
      35,    36,    71,    43,    45,    59,    58,    41,    43,    42,
      63,    44,    43,    43,    43,    45,    84,    84,    84,    84,
      68,    26,    27,    28,    29,    30,    31,    24,    25,    18,
      27,    24,    25,    63,    63,    24,    25,    41,    42,    72,
      72,    41,    43,    59,    45,    45,    44,    50,    69,    41,
      43,    68,    68,    68,    68,    34,    34,    34,    34,    34,
      34,    34,    34,    63,    34,    34,    34,    22,    22,    34,
      34,    42,    77,    71,    71,    45,    11,    33,    41,    60,
      43,    41,    43,    32,    45,    69,    68,    68,    83,    68,
      68,    68,    68,    81,    81,    19,    20,    68,    83,    68,
      80,    83,    80,    80,    80,    77,    43,    43,    42,    57,
      44,    45,    66,    43,    63,    34,    34,    43,    60,    45,
      58,    43,    15,    69,    20,    41,    43,    59,    56,    45,
      59,    55,    43,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    56,    55,    55,    57,    57,    58,    58,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    66,    66,    66,    66,
      66,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    71,    71,    71,    72,    72,    73,    73,
      73,    74,    74,    75,    76,    77,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    84,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,    14,     5,     4,     0,     2,     0,     2,
       4,     5,     7,     3,     2,     4,     5,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     1,
       1,     1,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     5,     2,     5,     7,     2,     2,     2,     2,     2,
       2,     4,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     0,     2,     3,     3,     0,     1,     1,     4,     4,
       5,     2,     3,     4,     8,     1,     3,     6,     8,     6,
       4,     6,     6,     9,     7,     5,     5,     1,     5,     5,
       1,     3,     5,     5,     1,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     1,     1
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
#line 45 "syntaxical_file.y"
                                                                                                             {  strcpy(sauvType,(yyvsp[-11].string));  addType((yyvsp[-9].string),sauvType); sprintf (sauvPlace,"FONCTION %s",(yyvsp[-9].string)); }
#line 1346 "syntaxical_file.tab.c"
    break;

  case 4: /* Fonction: mcPROGRAM identificateur DECLARATIONS INST_S mcEND  */
#line 46 "syntaxical_file.y"
                                                              {  printf("Programme syntaxiquement correct.\n"); YYACCEPT; }
#line 1352 "syntaxical_file.tab.c"
    break;

  case 5: /* DECLARATIONS: type identificateur caractere1 DECLARATIONS1  */
#line 49 "syntaxical_file.y"
                                                            { strcpy(sauvType,(yyvsp[-3].string)); addType ((yyvsp[-2].string),sauvType);addVarPlace((yyvsp[-2].string),sauvPlace); }
#line 1358 "syntaxical_file.tab.c"
    break;

  case 10: /* DECLARATIONS1: virgule identificateur caractere1 DECLARATIONS1  */
#line 58 "syntaxical_file.y"
                                                                      {addType ((yyvsp[-2].string),sauvType); }
#line 1364 "syntaxical_file.tab.c"
    break;


#line 1368 "syntaxical_file.tab.c"

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

#line 197 "syntaxical_file.y"


// Fonction main

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d, column %d: %s\n", nbligne, col, s);
    yyparse ();
}

int main() {
    yyparse();
    return 0;


}
