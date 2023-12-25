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
extern int yylex(void);
extern char* yytext;
int nbligne = 1;
int col=1;	
void yyerror(const char *s);

#line 81 "syntaxical_file.tab.c"

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
  YYSYMBOL_mcENDO = 22,                    /* mcENDO  */
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
  YYSYMBOL_gui = 42,                       /* gui  */
  YYSYMBOL_paraO = 43,                     /* paraO  */
  YYSYMBOL_paraF = 44,                     /* paraF  */
  YYSYMBOL_identificateur = 45,            /* identificateur  */
  YYSYMBOL_INTEGER = 46,                   /* INTEGER  */
  YYSYMBOL_INTEGERPOSITIF = 47,            /* INTEGERPOSITIF  */
  YYSYMBOL_INTEGERNEGATIF = 48,            /* INTEGERNEGATIF  */
  YYSYMBOL_REAL = 49,                      /* REAL  */
  YYSYMBOL_caracter = 50,                  /* caracter  */
  YYSYMBOL_chaine = 51,                    /* chaine  */
  YYSYMBOL_commantaire = 52,               /* commantaire  */
  YYSYMBOL_REALNEGATIF = 53,               /* REALNEGATIF  */
  YYSYMBOL_REALPOSITIF = 54,               /* REALPOSITIF  */
  YYSYMBOL_UNARY_OPERATOR = 55,            /* UNARY_OPERATOR  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_Fonction = 57,                  /* Fonction  */
  YYSYMBOL_DECLARATIONS = 58,              /* DECLARATIONS  */
  YYSYMBOL_caractere1 = 59,                /* caractere1  */
  YYSYMBOL_DECLARATIONS1 = 60,             /* DECLARATIONS1  */
  YYSYMBOL_DECLARATIONS2 = 61,             /* DECLARATIONS2  */
  YYSYMBOL_VALEURS = 62,                   /* VALEURS  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_INST_S = 64,                    /* INST_S  */
  YYSYMBOL_INSTR = 65,                     /* INSTR  */
  YYSYMBOL_Affectation = 66,               /* Affectation  */
  YYSYMBOL_EXPR = 67,                      /* EXPR  */
  YYSYMBOL_APPEL_FONC = 68,                /* APPEL_FONC  */
  YYSYMBOL_MATH_VAR = 69,                  /* MATH_VAR  */
  YYSYMBOL_MATH_VAR1 = 70,                 /* MATH_VAR1  */
  YYSYMBOL_CHAINE_STRING = 71,             /* CHAINE_STRING  */
  YYSYMBOL_CHAINE_STRING1 = 72,            /* CHAINE_STRING1  */
  YYSYMBOL_IDFI_CHAR = 73,                 /* IDFI_CHAR  */
  YYSYMBOL_ES = 74,                        /* ES  */
  YYSYMBOL_ES_WRITE_OPTIONAL = 75,         /* ES_WRITE_OPTIONAL  */
  YYSYMBOL_Appel = 76,                     /* Appel  */
  YYSYMBOL_Equivalence = 77,               /* Equivalence  */
  YYSYMBOL_Liste = 78,                     /* Liste  */
  YYSYMBOL_Boucle = 79,                    /* Boucle  */
  YYSYMBOL_Condition = 80,                 /* Condition  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_comparison = 82,                /* comparison  */
  YYSYMBOL_operand = 83,                   /* operand  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    25,    25,    26,    29,    31,    32,    35,    36,    37,
      38,    39,    40,    43,    44,    45,    46,    47,    50,    50,
      50,    50,    52,    52,    52,    52,    54,    54,    55,    57,
      58,    59,    60,    61,    62,    65,    68,    69,    70,    71,
      72,    75,    77,    78,    79,    80,    81,    82,    84,    85,
      86,    87,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   104,   106,   107,   108,   111,   112,   115,   116,
     117,   120,   120,   122,   124,   126,   127,   128,   129,   130,
     131,   134,   136,   137,   140,   141,   142,   143,   146,   147,
     148,   149,   150,   151,   152,   155,   156,   157,   158,   159,
     160,   161,   162,   165,   166,   167,   168
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
  "mcIF", "mcTHEN", "mcELSE", "mcENDIF", "mcDOWHILE", "mcENDO",
  "PartageMemoire", "OR", "AND", "GT", "EQ", "GE", "NE", "LE", "LT", "eq",
  "point_virgule", "point", "plus", "mpins", "division", "or", "aro",
  "etoile", "virgule", "gui", "paraO", "paraF", "identificateur",
  "INTEGER", "INTEGERPOSITIF", "INTEGERNEGATIF", "REAL", "caracter",
  "chaine", "commantaire", "REALNEGATIF", "REALPOSITIF", "UNARY_OPERATOR",
  "$accept", "Fonction", "DECLARATIONS", "caractere1", "DECLARATIONS1",
  "DECLARATIONS2", "VALEURS", "type", "INST_S", "INSTR", "Affectation",
  "EXPR", "APPEL_FONC", "MATH_VAR", "MATH_VAR1", "CHAINE_STRING",
  "CHAINE_STRING1", "IDFI_CHAR", "ES", "ES_WRITE_OPTIONAL", "Appel",
  "Equivalence", "Liste", "Boucle", "Condition", "expression",
  "comparison", "operand", "OPER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     111,   -97,   -97,   -97,   -97,   -24,    36,    59,   207,   -97,
       5,   -97,    42,    38,    75,    51,    48,    56,    58,   -97,
      60,    66,    83,    17,    91,   -97,   -97,   -97,   -97,   -97,
     -97,    88,    14,    99,    81,   107,    95,    16,    16,    48,
      29,    48,   -97,   -97,   113,    82,   207,   119,   -97,   123,
     126,   207,   131,   110,   -97,   -97,    16,    67,   -18,   -97,
     161,   -10,   135,   -97,   -97,   156,   157,   130,   145,   145,
     145,   145,   -97,   -97,   145,   145,   -97,   -97,   -97,   -97,
      -6,   153,   163,   -97,   -97,   -97,   -97,    14,   -97,    51,
     179,   194,   -97,   -97,   183,   -97,   190,     8,    22,    19,
      19,   -97,   -97,   138,   220,   160,    44,   198,   197,   199,
     -97,   -97,   -97,   -97,   195,   108,   108,   108,   108,   -97,
     157,   -97,   -97,   -97,   -97,   -97,   -97,    -7,    -7,   -97,
     -97,   180,   -97,    14,   196,   -97,   200,   151,   193,   -97,
     -97,   -97,    19,   -97,   -97,   211,   213,   -97,   214,   215,
     216,   217,   218,   219,   232,   212,    48,   145,   181,   157,
     157,   157,   157,   -97,    -6,    -6,   210,     7,   -97,   221,
     185,    54,   -97,   222,    16,    16,    18,    19,    19,    19,
      19,    19,    19,   -97,    48,   186,   -97,   223,   145,   -97,
     -97,   -97,   -97,   -97,   -97,   224,   227,   207,   226,   -97,
     -97,   228,   -97,    29,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   191,   -97,   229,   -97,     7,   230,
     -97,    51,   231,   242,    85,   -97,   145,   -97,   192,    14,
     -97,   111,   -97,   -97,   233,    14,   -97,   -97,   234,   -97,
      14,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    24,    25,    23,     0,     0,     0,     0,     1,
       0,    28,     0,     0,    34,     6,     0,     0,     0,     3,
       0,     0,     0,     0,     0,    29,    30,    32,    33,    31,
      27,     0,     0,    75,     0,     0,     0,    94,    94,     0,
       0,     0,    26,     5,     0,     0,     8,     0,     4,     0,
       0,     0,     0,     0,   101,   102,    94,   100,     0,    87,
       0,     0,     0,    40,    39,     0,     0,    61,    61,    61,
      61,    61,    67,    66,    61,    61,    35,    38,    37,    36,
      65,     0,     0,    19,    18,    20,    21,     0,     7,     6,
       0,    76,    28,    68,     0,    69,     0,     0,     0,     0,
       0,    95,    96,     0,     0,     0,    34,     0,     0,     0,
     103,   104,   106,   105,     0,    58,    57,    59,    60,    42,
       0,    45,    46,    47,    48,    50,    49,     0,     0,    62,
      73,     0,    12,     0,     0,    80,     0,    34,    71,    70,
      84,    99,     0,    97,    98,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,    52,    65,    65,     0,     0,     9,     0,
       0,     0,    72,     0,    94,    94,    34,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    51,     0,    61,    54,
      53,    55,    56,    63,    64,     0,     0,    14,     0,    10,
      79,     0,    77,     0,    86,    85,    28,    83,    89,    88,
      90,    91,    92,    93,     0,    41,     0,    43,     0,     0,
      13,     6,     0,    35,    34,    74,    61,    11,     0,     0,
      78,     0,    82,    44,     0,     0,    15,     2,     0,    16,
       0,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,    27,   -40,   -80,   -82,    41,   -97,     0,   -77,   154,
     -97,    61,   -97,   -49,   -67,   -97,   -96,    80,   -97,   -97,
     -97,   -97,   -29,   -97,   -97,   -25,   -97,   -42,   101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,    11,    32,    48,   199,    87,    12,    14,    24,
      25,    76,    77,    78,   119,    79,   129,    80,    26,    96,
      27,    28,    34,    29,    30,    58,    59,    60,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       7,   121,   122,   123,   124,   132,    88,   125,   126,   133,
      62,    92,    81,    61,    98,   137,   103,   109,   196,    54,
      55,     8,    54,    55,   103,    44,   104,    17,    18,   127,
     128,    97,    63,    64,   106,    20,     9,   206,   207,    21,
     197,    22,   103,    72,    73,    65,    45,    46,   198,    40,
      13,   168,   140,    17,    18,    47,   105,   143,   144,    56,
      41,    57,   142,    23,    57,    21,   141,    22,   193,   194,
     176,   163,    66,    10,    67,    68,    69,    70,    71,    72,
      73,    16,    74,    75,    17,    18,   203,    15,    19,    23,
     186,    31,    20,    33,    17,    18,    21,    41,    22,    35,
     173,    36,    20,    37,    99,   232,    21,   100,    22,    38,
     189,   190,   191,   192,   101,   102,     1,     2,     3,     4,
      23,   217,    50,     5,    42,    51,    39,   185,    83,   224,
      23,    84,    85,    86,    43,   208,   209,   210,   211,   212,
     213,   229,    49,   110,   111,   112,    53,   236,   113,   204,
     205,    94,    52,   239,    95,   214,    82,   220,   241,   233,
      17,    18,   145,   146,    89,   110,   111,   112,    20,    90,
     113,    91,    21,   114,    22,    93,    50,   115,   116,   107,
     110,   111,   112,   117,   118,   113,   148,   149,   150,   151,
     152,   153,   115,   116,    50,   105,   171,   130,   117,   118,
      66,   108,    67,    68,    69,    70,    71,   164,   165,   131,
      74,    75,     1,     2,     3,     4,   159,   160,   161,   162,
     134,   166,   187,   135,   167,   188,   201,    50,   138,   202,
     215,     7,    50,   234,   139,   225,   235,   136,   147,   155,
     156,   158,   169,   157,   172,   174,   170,   175,   177,   178,
     179,   180,   181,   182,   183,   184,   195,   231,   237,   227,
     154,     0,     0,     0,   223,   200,   141,     0,   218,   216,
     219,   221,     0,   226,   222,   230,   228,     0,   240,   238
};

static const yytype_int16 yycheck[] =
{
       0,    68,    69,    70,    71,    87,    46,    74,    75,    89,
      39,    51,    41,    38,    56,    92,    34,    66,    11,     3,
       4,    45,     3,     4,    34,    11,    44,     9,    10,    35,
      36,    56,     3,     4,    44,    17,     0,    19,    20,    21,
      33,    23,    34,    50,    51,    16,    32,    33,    41,    32,
      45,   133,    44,     9,    10,    41,    34,    99,   100,    43,
      43,    45,    43,    45,    45,    21,    44,    23,   164,   165,
     147,   120,    43,    14,    45,    46,    47,    48,    49,    50,
      51,    43,    53,    54,     9,    10,    32,    45,    13,    45,
     157,    40,    17,    45,     9,    10,    21,    43,    23,    43,
     142,    43,    17,    43,    37,    20,    21,    40,    23,    43,
     159,   160,   161,   162,    47,    48,     5,     6,     7,     8,
      45,   188,    41,    12,    33,    44,    43,   156,    46,   206,
      45,    49,    50,    51,    46,   177,   178,   179,   180,   181,
     182,   221,    43,    35,    36,    37,    51,   229,    40,   174,
     175,    41,    45,   235,    44,   184,    43,   197,   240,   226,
       9,    10,    24,    25,    45,    35,    36,    37,    17,    46,
      40,    45,    21,    43,    23,    44,    41,    47,    48,    44,
      35,    36,    37,    53,    54,    40,    26,    27,    28,    29,
      30,    31,    47,    48,    41,    34,    45,    44,    53,    54,
      43,    45,    45,    46,    47,    48,    49,   127,   128,    46,
      53,    54,     5,     6,     7,     8,   115,   116,   117,   118,
      41,    41,    41,    44,    44,    44,    41,    41,    45,    44,
      44,   231,    41,    41,    44,    44,    44,    43,    18,    41,
      43,    46,    46,    44,    51,    34,    46,    34,    34,    34,
      34,    34,    34,    34,    22,    43,    46,    15,   231,   218,
     106,    -1,    -1,    -1,   203,    44,    44,    -1,    44,    46,
      43,    45,    -1,    44,    46,    44,    46,    -1,    44,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,    12,    57,    63,    45,     0,
      14,    58,    63,    45,    64,    45,    43,     9,    10,    13,
      17,    21,    23,    45,    65,    66,    74,    76,    77,    79,
      80,    40,    59,    45,    78,    43,    43,    43,    43,    43,
      32,    43,    33,    46,    11,    32,    33,    41,    60,    43,
      41,    44,    45,    51,     3,     4,    43,    45,    81,    82,
      83,    81,    78,     3,     4,    16,    43,    45,    46,    47,
      48,    49,    50,    51,    53,    54,    67,    68,    69,    71,
      73,    78,    43,    46,    49,    50,    51,    62,    58,    45,
      46,    45,    58,    44,    41,    44,    75,    81,    83,    37,
      40,    47,    48,    34,    44,    34,    44,    44,    45,    69,
      35,    36,    37,    40,    43,    47,    48,    53,    54,    70,
      84,    70,    70,    70,    70,    70,    70,    35,    36,    72,
      44,    46,    60,    59,    41,    44,    43,    64,    45,    44,
      44,    44,    43,    83,    83,    24,    25,    18,    26,    27,
      28,    29,    30,    31,    65,    41,    43,    44,    46,    84,
      84,    84,    84,    69,    73,    73,    41,    44,    60,    46,
      46,    45,    51,    83,    34,    34,    64,    34,    34,    34,
      34,    34,    34,    22,    43,    78,    70,    41,    44,    69,
      69,    69,    69,    72,    72,    46,    11,    33,    41,    61,
      44,    41,    44,    32,    81,    81,    19,    20,    83,    83,
      83,    83,    83,    83,    78,    44,    46,    70,    44,    43,
      58,    45,    46,    67,    64,    44,    44,    61,    46,    59,
      44,    15,    20,    70,    41,    44,    60,    57,    46,    60,
      44,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    58,    59,    59,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    61,    61,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    66,    67,    67,    67,    67,
      67,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    72,    72,    73,    73,    74,    74,
      74,    75,    75,    76,    77,    78,    78,    78,    78,    78,
      78,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    13,     5,     4,     2,     0,     2,     1,     4,
       5,     7,     3,     2,     1,     4,     5,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     1,
       1,     1,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     5,     2,     5,     7,     2,     2,     2,     2,     2,
       2,     4,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     0,     2,     3,     3,     0,     1,     1,     4,     4,
       5,     2,     3,     4,     8,     1,     3,     6,     8,     6,
       4,     6,     9,     7,     3,     5,     5,     1,     5,     5,
       5,     5,     5,     5,     0,     2,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1
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
  case 3: /* Fonction: mcPROGRAM identificateur DECLARATIONS INST_S mcEND  */
#line 26 "syntaxical_file.y"
                                                              {  printf("Programme syntaxiquement correct.\n"); YYACCEPT; }
#line 1317 "syntaxical_file.tab.c"
    break;


#line 1321 "syntaxical_file.tab.c"

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

#line 171 "syntaxical_file.y"


// Fonction main

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d, column %d: %s\n", nbligne, col, s);
    yyparse ();
}

int main() {
    yyparse();
    return 0;


}
