
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\syntaxical_file.y"

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
int nbr_par = 0 ;
char oper=' ';


/* Line 189 of yacc.c  */
#line 133 "syntaxical_file.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 60 ".\\syntaxical_file.y"
 
   int entier;
   float real; 
   char* string;
   char caracter;



/* Line 214 of yacc.c  */
#line 231 "syntaxical_file.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 243 "syntaxical_file.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  286

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,     7,    23,    24,    31,
      32,    38,    39,    42,    43,    44,    48,    49,    55,    56,
      63,    64,    73,    77,    78,    82,    83,    89,    90,    97,
      98,   107,   108,   112,   113,   119,   121,   123,   125,   127,
     131,   134,   135,   137,   139,   141,   143,   144,   145,   150,
     151,   159,   160,   170,   172,   174,   176,   178,   180,   181,
     182,   190,   191,   195,   196,   203,   204,   213,   214,   218,
     219,   223,   224,   228,   229,   233,   234,   238,   239,   243,
     248,   251,   252,   257,   258,   263,   264,   269,   270,   275,
     277,   279,   281,   283,   284,   287,   289,   294,   299,   305,
     308,   312,   313,   323,   325,   326,   330,   337,   346,   353,
     358,   360,   367,   368,   377,   381,   383,   385,   387,   393,
     399,   401,   405,   411,   417,   423,   429,   435,   441,   443,
     449,   455,   461,   467,   473,   479,   481,   483,   485,   487,
     489
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    -1,    -1,    -1,    -1,    77,    14,    44,
      56,    42,    57,   108,    43,    58,    61,    78,    80,    59,
      15,    55,    -1,    -1,    12,    44,    60,    61,    78,    13,
      -1,    -1,    77,    44,    62,    63,    64,    -1,    -1,    40,
      45,    -1,    -1,    -1,    33,    65,    61,    -1,    -1,    41,
      44,    66,    63,    64,    -1,    -1,    11,    42,    45,    43,
      67,    69,    -1,    -1,    11,    42,    45,    41,    45,    43,
      68,    69,    -1,    32,    84,    74,    -1,    -1,    33,    70,
      61,    -1,    -1,    41,    44,    71,    63,    64,    -1,    -1,
      11,    42,    45,    43,    72,    64,    -1,    -1,    11,    42,
      45,    41,    45,    43,    73,    64,    -1,    -1,    33,    75,
      61,    -1,    -1,    41,    44,    76,    63,    64,    -1,     5,
      -1,     8,    -1,     6,    -1,     7,    -1,    78,    79,    33,
      -1,    78,   111,    -1,    -1,    80,    -1,   104,    -1,   110,
      -1,   106,    -1,    -1,    -1,    44,    81,    32,    84,    -1,
      -1,    44,    42,    45,    43,    82,    32,    84,    -1,    -1,
      44,    42,    45,    41,    45,    43,    83,    32,    84,    -1,
     103,    -1,    88,    -1,    85,    -1,   118,    -1,    49,    -1,
      -1,    -1,    16,    44,    42,    86,   108,    87,    43,    -1,
      -1,    44,    89,    98,    -1,    -1,    44,    42,    45,    43,
      90,    98,    -1,    -1,    44,    42,    45,    41,    45,    43,
      91,    98,    -1,    -1,    45,    92,    98,    -1,    -1,    46,
      93,    98,    -1,    -1,    47,    94,    98,    -1,    -1,    48,
      95,    98,    -1,    -1,    53,    96,    98,    -1,    -1,    52,
      97,    98,    -1,    42,    88,    43,    98,    -1,   119,    88,
      -1,    -1,    47,    99,   119,    88,    -1,    -1,    46,   100,
     119,    88,    -1,    -1,    52,   101,   119,    88,    -1,    -1,
      53,   102,   119,    88,    -1,    47,    -1,    46,    -1,    52,
      -1,    53,    -1,    -1,    50,   103,    -1,    50,    -1,     9,
      42,    44,    43,    -1,    10,    42,    50,    43,    -1,    10,
      42,    50,   105,    43,    -1,    41,    44,    -1,    41,    44,
      50,    -1,    -1,    23,    42,   107,   109,    43,    41,    42,
     108,    43,    -1,   109,    -1,    -1,   109,    41,    44,    -1,
     109,    41,    44,    42,    45,    43,    -1,   109,    41,    44,
      42,    45,    41,    45,    43,    -1,    44,    42,    45,    41,
      45,    43,    -1,    44,    42,    45,    43,    -1,    44,    -1,
      21,    42,   114,    43,    78,    22,    -1,    -1,    17,   112,
      42,   114,    43,    18,    78,   113,    -1,    19,    78,    20,
      -1,    20,    -1,   116,    -1,   115,    -1,    84,    34,    25,
      34,   115,    -1,    84,    34,    24,    34,   115,    -1,    84,
      -1,    42,   116,    43,    -1,   116,    34,    25,    34,   116,
      -1,   116,    34,    24,    34,   116,    -1,   116,    34,    25,
      34,    84,    -1,   116,    34,    24,    34,    84,    -1,    84,
      34,    25,    34,   116,    -1,    84,    34,    24,    34,   116,
      -1,   117,    -1,    84,    34,    27,    34,    84,    -1,    84,
      34,    26,    34,    84,    -1,    84,    34,    28,    34,    84,
      -1,    84,    34,    29,    34,    84,    -1,    84,    34,    30,
      34,    84,    -1,    84,    34,    31,    34,    84,    -1,     3,
      -1,     4,    -1,    35,    -1,    36,    -1,    40,    -1,    37,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mcTRUE", "mcFALSE", "mcINTEGER",
  "mcREAL", "mcCHARACTER", "mcLOGICAL", "mcREAD", "mcWRITE", "mcDIMENSION",
  "mcPROGRAM", "mcEND", "mcROUTINE", "mcENDR", "mcCALL", "mcIF", "mcTHEN",
  "mcELSE", "mcENDIF", "mcDOWHILE", "mcENDDO", "PartageMemoire", "OR",
  "AND", "GT", "EQ", "GE", "NE", "LE", "LT", "eq", "point_virgule",
  "point", "plus", "mpins", "division", "or", "aro", "etoile", "virgule",
  "paraO", "paraF", "identificateur", "INTEGER", "INTEGERPOSITIF",
  "INTEGERNEGATIF", "REAL", "caracter", "chaine", "commantaire",
  "REALNEGATIF", "REALPOSITIF", "$accept", "Fonction", "$@1", "$@2", "$@3",
  "$@4", "$@5", "DECLARATIONS", "$@6", "caractere1", "DECLARATIONS1",
  "$@7", "$@8", "$@9", "$@10", "DECLARATIONS2", "$@11", "$@12", "$@13",
  "$@14", "DECLARATIONS3", "$@15", "$@16", "type", "INST_S", "INSTR",
  "Affectation", "$@17", "$@18", "$@19", "EXPR", "APPEL_FONC", "$@20",
  "$@21", "MATH_VAR", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27",
  "$@28", "$@29", "$@30", "MATH_VAR1", "$@31", "$@32", "$@33", "$@34",
  "CHAINE_STRING", "ES", "ES_WRITE_OPTIONAL", "Equivalence", "$@35",
  "Liste", "Liste1", "Boucle", "if_statment", "$@36", "if_reste",
  "condition", "expression2", "expression", "comparision", "LOGICAL",
  "OPER", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    15,    33,   115,   255,    11,    13,    32,    43,
      80,   112,   161,   229,   262,   253,   264,   274,   280,   284,
     159,   195,   231,    14,    16,    26,    27,    40,   154,   226,
      63,    64,   168,   240,    65,    94,   206,   259,    95,    96,
      97,    98,   101,   100,   133,   175,   174,   176,   177,    66,
      28,    87,    29,    72,    45,    46,    30,    31,    36,   239,
      67,    68,    69,    70,    71,   134
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -187
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
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

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 87 ".\\syntaxical_file.y"
    { 
        // Add a variable when a function is declared
        // Nous avons suposer la fonction comme un tableau et son taille est le nombre de paramètres 
        // parce que quand on apelle une fonction on doit viréfier son nbr de paramètres    
        if (addVariable((yyvsp[(3) - (3)].string), (yyvsp[(1) - (3)].string), "idf fonction", 1, "NULL", "PROGRAM")) {sprintf(errorMsg,"double declaration de %s",(yyvsp[(3) - (3)].string)) ; yyerror(errorMsg);}
        strcpy(sauvType, (yyvsp[(1) - (3)].string));
        addType((yyvsp[(3) - (3)].string), sauvType);
        sprintf(sauvPlace, "FONCTION %s", (yyvsp[(3) - (3)].string));
    
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 98 ".\\syntaxical_file.y"
    { 
        // Handle function parameters
        sprintf(listeSource, "para de Fun %s", (yyvsp[(3) - (5)].string));
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 103 ".\\syntaxical_file.y"
    {
        addSize((yyvsp[(3) - (8)].string),"PROGRAM", nbr_par);
        nbr_par=0;
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 107 ".\\syntaxical_file.y"
    { 
        // Check that the return value is assigned to the function name
        if (strcmp((yyvsp[(3) - (12)].string), function_return) != 0)
        { 
            sprintf(errorMsg, "return value must be affected in the same function name \n");
            yyerror(errorMsg); 
        } 
    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 118 ".\\syntaxical_file.y"
    { 
        // Handle program declaration
        sprintf(sauvPlace, "PROGRAM");
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 123 ".\\syntaxical_file.y"
    {  
        // Accept if the program is syntactically correct
        printf("Programme syntaxiquement correct.\n");  
        YYACCEPT; 
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 133 ".\\syntaxical_file.y"
    { 
        strcpy(sauvType, (yyvsp[(1) - (2)].string)); 
        strcpy(IDF, (yyvsp[(2) - (2)].string));
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 143 ".\\syntaxical_file.y"
    {
        if (strcmp(sauvType,"CHARACTER") !=0) 
        {
            sprintf(errorMsg,"Erreur de Type de la variable : \"%s\" ",IDF);
            yyerror(errorMsg);
        }
        strcpy(IDFCode,"Tableau"); 
        size = (yyvsp[(2) - (2)].entier);
        isString =1;
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 159 ".\\syntaxical_file.y"
    {  
        // Add a variable to the list of declared variables
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) 
        { sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg); }
        strcpy(IDFCode, "Var Simple");
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 168 ".\\syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[(2) - (2)].string));
        strcpy(IDFCode, "Var Simple");
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 176 ".\\syntaxical_file.y"
    {    
        if((yyvsp[(3) - (4)].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[(3) - (4)].entier);
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 187 ".\\syntaxical_file.y"
    {   
        if((yyvsp[(3) - (6)].entier)==0 || (yyvsp[(5) - (6)].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Matrice");
        row = (yyvsp[(3) - (6)].entier);
        column = (yyvsp[(5) - (6)].entier);
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 204 ".\\syntaxical_file.y"
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
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 221 ".\\syntaxical_file.y"
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
        strcpy(IDF, (yyvsp[(2) - (2)].string));
        strcpy(IDFCode, "Var Simple");
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 239 ".\\syntaxical_file.y"
    {   
        if((yyvsp[(3) - (4)].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Tableau");
        size = (yyvsp[(3) - (4)].entier);
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 250 ".\\syntaxical_file.y"
    {
        if((yyvsp[(3) - (6)].entier)==0 || (yyvsp[(5) - (6)].entier)==0)
        {
            sprintf(errorMsg, "la taille doit être suprieur à 0 ");
            yyerror(errorMsg);
        }
        strcpy(IDFCode, "Matrice");
        row =(yyvsp[(3) - (6)].entier);
        column =(yyvsp[(5) - (6)].entier);
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 265 ".\\syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)){sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDFCode, "Var Simple");
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 272 ".\\syntaxical_file.y"
    {   
        if(addVariable(IDF, sauvType, IDFCode, 1, "NULL", sauvPlace)) {sprintf(errorMsg,"double declaration de %s",IDF) ; yyerror(errorMsg);}
        strcpy(IDF, (yyvsp[(2) - (2)].string));
        strcpy(IDFCode, "Var Simple");
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 316 ".\\syntaxical_file.y"
    {
        char* temp = getVariableType((yyvsp[(1) - (1)].string),sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg,"la variable  \"%s\" n'est pas declarer", (yyvsp[(1) - (1)].string));
            yyerror(errorMsg);
        }
        else
        { 
            if (strcmp(function_return,"idf fonction")== 0)
             // ici la fonction getVariableType modifie le function_return si la variable est une fonction 
             // donc en mete le nom de cette variable dans function_return pour virifier si le nome de la fonction et 
             // la nome que nous avons affecter le retour sont equvalant  
            {                                              
                strcpy(function_return,(yyvsp[(1) - (1)].string));
            }
            strcpy(IDF,(yyvsp[(1) - (1)].string));
            strcpy(sauvType,temp);
        }
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 339 ".\\syntaxical_file.y"
    {

        char* temp = getVariableType((yyvsp[(1) - (4)].string),sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme tableau ", (yyvsp[(1) - (4)].string));
            yyerror(errorMsg);
        }
        else
        {
        int tempSize = getSize(IDF,sauvPlace);

        if (tempSize)
        {
            if (tempSize < (yyvsp[(3) - (4)].entier)){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille ", (yyvsp[(1) - (4)].string));
                yyerror(errorMsg);
            }
            strcpy(IDF,(yyvsp[(1) - (4)].string));
            strcpy(sauvType,temp);
        }
        }
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 365 ".\\syntaxical_file.y"
    {
        
        char* temp = getVariableType((yyvsp[(1) - (6)].string),sauvPlace,function_return);
        if (strcmp(temp,"Unknown")== 0)
        {   
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme matrice", (yyvsp[(1) - (6)].string));
            yyerror(errorMsg);
        }
        else
        {
        int tempRow ,tempCol;
        if(getRowCol(IDF,sauvPlace,&tempRow,&tempCol)==0)
        {
            if (tempRow < (yyvsp[(3) - (6)].entier) || tempCol < (yyvsp[(5) - (6)].entier)){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille  ", (yyvsp[(1) - (6)].string));
                yyerror(errorMsg);
            }
            strcpy(IDF,(yyvsp[(1) - (6)].string));
            strcpy(sauvType,temp);
        }
        }
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 405 ".\\syntaxical_file.y"
    {
        // Semantic code for caracter
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 413 ".\\syntaxical_file.y"
    { 
        if(functionisDeclared((yyvsp[(2) - (3)].string)))
        {
            sprintf(errorMsg, "la fonction \"%s\" n'est pas declarer ", (yyvsp[(2) - (3)].string));
            yyerror(errorMsg);
        }

        char* temp = getVariableType((yyvsp[(2) - (3)].string),"PROGRAM",function_return);

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
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 434 ".\\syntaxical_file.y"
    {   int tempSize = getSize((yyvsp[(2) - (5)].string),"PROGRAM");
        if(tempSize!= nbr_par)
        {
            sprintf(errorMsg, "le nombre de paramètres de la fonction \"%s\" est incorrect le nombre correcte est %d", (yyvsp[(2) - (5)].string),tempSize);
            yyerror(errorMsg);   
        }
        nbr_par=0;
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 449 ".\\syntaxical_file.y"
    {
        if(variableisDeclared((yyvsp[(1) - (1)].string), sauvPlace) && tableisDeclared((yyvsp[(1) - (1)].string), sauvPlace) && matrixisDeclared ((yyvsp[(1) - (1)].string), sauvPlace))//return 1 si le idf n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme variable simple", (yyvsp[(1) - (1)].string));
            yyerror(errorMsg);
        }
        else
        { 
            char* temp = getVariableType((yyvsp[(1) - (1)].string),sauvPlace,function_return);

            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0 )
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", (yyvsp[(1) - (1)].string));
                yyerror(errorMsg);
                }

            }

        }
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 479 ".\\syntaxical_file.y"
    {
        if(tableisDeclared((yyvsp[(1) - (4)].string), sauvPlace))//return 1 si le tableau n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme tableau ", (yyvsp[(1) - (4)].string));
            yyerror(errorMsg);
        }
        else
        {
            // check the type 
            char* temp = getVariableType((yyvsp[(1) - (4)].string),sauvPlace,function_return);
            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0 )
            {  
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", (yyvsp[(1) - (4)].string));
                yyerror(errorMsg);
                }
            }
        }
        int tempSize = getSize(IDF,sauvPlace);

        if (tempSize)
        {
            if (tempSize < (yyvsp[(3) - (4)].entier)){
                sprintf(errorMsg, "la variable \"%s\" a une erreur dans la taille  ", (yyvsp[(1) - (4)].string));
                yyerror(errorMsg);
            }
        }
        
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 517 ".\\syntaxical_file.y"
    {
        if(matrixisDeclared((yyvsp[(1) - (6)].string), sauvPlace))//return 1 si le tableau n'est pas déclaré 
        {
            sprintf(errorMsg, "la variable \"%s\" n'est pas declarer comme matrice", (yyvsp[(1) - (6)].string));
            yyerror(errorMsg);
        }
        else
        {
            char* temp = getVariableType((yyvsp[(1) - (6)].string),sauvPlace,function_return);
            if (strcmp(temp,sauvType)!= 0 && strcmp(sauvType,"REAL") && condition == 0)
            {   
                sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\"", IDF,sauvType);
                yyerror(errorMsg);
            }
            else
            { 
                if (strcmp(function_return,"idf fonction")== 0) 
                {
                sprintf(errorMsg,"la variable  \"%s\" est declarer comme fonction", (yyvsp[(1) - (6)].string));
                yyerror(errorMsg);
                }
            }
        } 
        int tempRow ,tempCol;
        if(getRowCol(IDF,sauvPlace,&tempRow,&tempCol)==0)
        {
            if (tempRow < (yyvsp[(3) - (6)].entier) || tempCol < (yyvsp[(5) - (6)].entier)){
                sprintf(errorMsg, "lla variable \"%s\" a une erreur dans la taille  ", (yyvsp[(1) - (6)].string));
                yyerror(errorMsg);
            }
        }

    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 552 ".\\syntaxical_file.y"
    {   
        // check if depasse intervale 0 32767
        if ((yyvsp[(1) - (1)].entier) > 32767 || (yyvsp[(1) - (1)].entier) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {  
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[(1) - (1)].entier)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_entier = (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 576 ".\\syntaxical_file.y"
    {   // check if depasse intervale 0 32767
        if ((yyvsp[(1) - (1)].entier) > 32767 || (yyvsp[(1) - (1)].entier) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[(1) - (1)].entier)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_entier = (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 599 ".\\syntaxical_file.y"
    {   // check if depasse intervale -32768 0
        if ((yyvsp[(1) - (1)].entier) > 0 || (yyvsp[(1) - (1)].entier) < -32768 ){
           sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") !=0 && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[(1) - (1)].entier)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_entier = (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 622 ".\\syntaxical_file.y"
    {
        // check if depasse intervale 0 32767.32767 
        if ((yyvsp[(1) - (1)].real) > 32767.32767 || (yyvsp[(1) - (1)].real) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[(1) - (1)].real)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 646 ".\\syntaxical_file.y"
    {   
        // check if depasse intervale  -32768.32768 0
        if ((yyvsp[(1) - (1)].real) > 32767.32767 || (yyvsp[(1) - (1)].real) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[(1) - (1)].real)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 670 ".\\syntaxical_file.y"
    {   
        if ((yyvsp[(1) - (1)].real) > 0|| (yyvsp[(1) - (1)].real) < -32768.32768 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        if (oper == '/' && (yyvsp[(1) - (1)].real)==0 )
        {
            sprintf(errorMsg, "division par 0 ");
            yyerror(errorMsg);
            oper= ' ';
        }
        oper=' ';
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 702 ".\\syntaxical_file.y"
    {   
        if ((yyvsp[(1) - (1)].entier) > 0 || (yyvsp[(1) - (1)].entier) < -32768 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        val_entier += (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 719 ".\\syntaxical_file.y"
    {
        if ((yyvsp[(1) - (1)].entier) > 32767 || (yyvsp[(1) - (1)].entier) < 0 )
        {
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
       val_entier += (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 736 ".\\syntaxical_file.y"
    {   
        if ((yyvsp[(1) - (1)].real) > 0|| (yyvsp[(1) - (1)].real) < -32768.32768 )
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 755 ".\\syntaxical_file.y"
    {   if ((yyvsp[(1) - (1)].real) > 32767.32767 || (yyvsp[(1) - (1)].real) < 0 ){
            sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 770 ".\\syntaxical_file.y"
    {   if ((yyvsp[(1) - (1)].entier) > 0 || (yyvsp[(1) - (1)].entier) < -32768 )
        {
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"INTEGER") && strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_entier = (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 785 ".\\syntaxical_file.y"
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
        val_entier = (yyvsp[(1) - (1)].entier) ; 
        val_entier = (yyvsp[(1) - (1)].entier) ; 
        sprintf(IDFValeur, "%d", val_entier);
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 802 ".\\syntaxical_file.y"
    {   if ((yyvsp[(1) - (1)].real) > 32767.32767 || (yyvsp[(1) - (1)].real) < 0 ){
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 816 ".\\syntaxical_file.y"
    {
        if ((yyvsp[(1) - (1)].real) > 32767.32767 || (yyvsp[(1) - (1)].real) < 0 ){
             sprintf(errorMsg, "erreur dans l'intervale ");
            yyerror(errorMsg);
        }
        if (strcmp(sauvType,"REAL") ) 
        {
            sprintf(errorMsg,"incompatibilité de type  : \"%s\" est de Type \"%s\" ",IDF,sauvType);
            yyerror(errorMsg);
        }
        val_real = (yyvsp[(1) - (1)].real) ;
        sprintf(IDFValeur, "%f", val_real);
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 836 ".\\syntaxical_file.y"
    {
        sprintf(string,"%s%s",string,(yyvsp[(1) - (2)].string));
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 841 ".\\syntaxical_file.y"
    {
        string = (yyvsp[(1) - (1)].string); 
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 866 ".\\syntaxical_file.y"
    {
       sprintf(listeSource ,"%s",sauvPlace); 
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 883 ".\\syntaxical_file.y"
    {    nbr_par++;
        addVariable((yyvsp[(3) - (3)].string),"pas de type","Var Simple",1,"NULL",listeSource);
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 889 ".\\syntaxical_file.y"
    {    nbr_par++;
        addVariable((yyvsp[(3) - (6)].string),"pas de type","Tableau",1,"NULL",listeSource);
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 895 ".\\syntaxical_file.y"
    {    nbr_par++;
        addVariable((yyvsp[(3) - (8)].string),"pas de type","Matrice",1,"NULL",listeSource);
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 901 ".\\syntaxical_file.y"
    {    nbr_par++;
        addVariable((yyvsp[(1) - (6)].string),"pas de type","Matrice",1,"NULL",listeSource);
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 907 ".\\syntaxical_file.y"
    {    nbr_par++;
        addVariable((yyvsp[(1) - (4)].string),"pas de type","Tableau",1,"NULL",listeSource);
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 913 ".\\syntaxical_file.y"
    {   
        nbr_par++;
        addVariable((yyvsp[(1) - (1)].string),"pas de type","Var Simple",1,"NULL",listeSource);
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 925 ".\\syntaxical_file.y"
    {condition = 1;;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 925 ".\\syntaxical_file.y"
    {condition = 0;;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 998 ".\\syntaxical_file.y"
    {oper = '/';;}
    break;



/* Line 1455 of yacc.c  */
#line 2615 "syntaxical_file.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1002 ".\\syntaxical_file.y"


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
