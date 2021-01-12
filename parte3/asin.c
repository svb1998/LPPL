/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "src/asin.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "libgci.h"
#include "header.h"
#include "libtds.h"



#line 76 "asin.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "asin.h".  */
#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CTE_ = 258,
    SUMA_ = 259,
    RESTA_ = 260,
    MULTI_ = 261,
    DIV_ = 262,
    ASIGNA_ = 263,
    MENORQ_ = 264,
    MAYORQ_ = 265,
    MENORIG_ = 266,
    MAYORIG_ = 267,
    IGUAL_ = 268,
    DISTINTO_ = 269,
    INCREMENTO_ = 270,
    DECREMENTO_ = 271,
    AND_ = 272,
    OR_ = 273,
    NEGACION_ = 274,
    OPAR_ = 275,
    CPAR_ = 276,
    OCOR_ = 277,
    CCOR_ = 278,
    OLLAVE_ = 279,
    CLLAVE_ = 280,
    PUNTCOMA_ = 281,
    COMA_ = 282,
    INT_ = 283,
    BOOL_ = 284,
    TRUE_ = 285,
    FALSE_ = 286,
    IF_ = 287,
    ELSE_ = 288,
    FOR_ = 289,
    READ_ = 290,
    PRINT_ = 291,
    DO_ = 292,
    WHILE_ = 293,
    RETURN_ = 294,
    ID_ = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/asin.y" /* yacc.c:355  */

	char* ident;
	int cent;
	EXP exp;
	int aux;
	PARAM param;


#line 166 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 183 "asin.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    51,    72,    73,    76,    77,    79,    86,
     100,   101,   105,   104,   131,   130,   156,   159,   163,   176,
     190,   193,   194,   197,   198,   201,   202,   203,   204,   205,
     207,   223,   249,   263,   276,   284,   275,   296,   300,   314,
     295,   328,   329,   330,   332,   333,   376,   377,   404,   405,
     435,   436,   460,   461,   498,   499,   538,   559,   560,   570,
     593,   592,   616,   628,   630,   631,   634,   638,   645,   646,
     647,   650,   651,   654,   655,   658,   659,   660,   661,   664,
     665,   667,   668,   671,   672,   673,   676,   677
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CTE_", "SUMA_", "RESTA_", "MULTI_",
  "DIV_", "ASIGNA_", "MENORQ_", "MAYORQ_", "MENORIG_", "MAYORIG_",
  "IGUAL_", "DISTINTO_", "INCREMENTO_", "DECREMENTO_", "AND_", "OR_",
  "NEGACION_", "OPAR_", "CPAR_", "OCOR_", "CCOR_", "OLLAVE_", "CLLAVE_",
  "PUNTCOMA_", "COMA_", "INT_", "BOOL_", "TRUE_", "FALSE_", "IF_", "ELSE_",
  "FOR_", "READ_", "PRINT_", "DO_", "WHILE_", "RETURN_", "ID_", "$accept",
  "programa", "@1", "listaDeclaraciones", "declaracion",
  "declaracionVariable", "tipoSimple", "declaracionFuncion", "@2",
  "cabeceraFuncion", "$@3", "parametrosFormales",
  "listaParametrosFormales", "bloque", "declaracionVariableLocal",
  "listaInstrucciones", "instruccion", "instruccionAsignacion",
  "instruccionEntradaSalida", "instruccionSeleccion", "@4", "@5",
  "instruccionIteracion", "@6", "@7", "$@8", "expresionOpcional",
  "expresion", "expresionIgualdad", "expresionRelacional",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionSufija", "@9", "parametrosActuales", "listaParametrosActuales",
  "constante", "operadorLogico", "operadorIgualdad", "operadorRelacional",
  "operadorAditivo", "operadorMultiplicativo", "operadorUnario",
  "operadorIncremento", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -61

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -118,    10,    37,  -118,  -118,  -118,    37,  -118,  -118,   -19,
    -118,  -118,  -118,    23,     8,    56,  -118,    47,  -118,  -118,
      55,    37,    37,    67,    41,    82,  -118,  -118,    59,    22,
    -118,    80,  -118,    23,  -118,    85,    91,    94,   108,    -2,
      33,  -118,  -118,  -118,  -118,  -118,    37,    39,    -2,    20,
      93,    -2,  -118,  -118,  -118,  -118,  -118,  -118,    -2,  -118,
    -118,    86,    51,   116,   115,    81,   125,  -118,  -118,  -118,
      -2,    96,    -2,    -2,  -118,  -118,    95,     0,   111,   117,
     101,   100,   102,    -2,   118,  -118,  -118,  -118,   114,    -2,
    -118,  -118,    -2,  -118,  -118,  -118,  -118,    -2,  -118,  -118,
      -2,  -118,  -118,    -2,  -118,  -118,    72,    30,  -118,    -2,
    -118,   119,   120,  -118,    92,    -2,  -118,   116,   115,    81,
     125,  -118,  -118,   132,    48,   117,    -2,  -118,  -118,  -118,
      25,   121,  -118,    -2,  -118,    74,    -2,  -118,    78,   110,
    -118,  -118,  -118,    48,    20,  -118,   123,  -118,    48,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    10,    11,     3,     4,     6,     0,
       7,    12,     5,    14,     0,     0,     8,     0,    22,    13,
       0,    16,    24,     0,     0,     0,    17,    21,     0,     0,
       9,    18,    15,     0,    24,     0,     0,     0,     0,     0,
       0,    23,    26,    28,    27,    29,     0,     0,     0,    43,
       0,     0,    68,    83,    84,    86,    87,    85,     0,    69,
      70,    62,     0,    44,    46,    48,    50,    52,    54,    63,
       0,     0,     0,     0,    19,    25,     0,    62,     0,    41,
       0,     0,     0,     0,     0,    58,    71,    72,     0,     0,
      73,    74,     0,    76,    75,    78,    77,     0,    79,    80,
       0,    81,    82,     0,    55,    56,     0,     0,    34,     0,
      37,     0,     0,    57,     0,    65,    20,    45,    47,    49,
      51,    53,    30,     0,     0,    42,     0,    32,    33,    59,
      66,     0,    64,     0,    35,     0,     0,    61,     0,     0,
      38,    67,    31,     0,    43,    36,     0,    39,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   135,   126,   -16,  -118,  -118,  -118,
    -118,  -118,   103,  -118,  -118,   113,  -117,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,     6,   -39,    62,    60,
      57,    53,   -66,  -118,  -118,  -118,    19,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,   -50
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    14,    11,
      17,    25,    26,    19,    22,    29,    41,    42,    43,    44,
     124,   139,    45,   126,   144,   148,    78,    79,    63,    64,
      65,    66,    67,    68,    84,   131,   132,    69,    89,    92,
      97,   100,   103,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    52,    53,    54,   104,    24,    28,   134,   109,    76,
       3,    85,    81,    55,    56,    55,    56,    57,    58,    82,
     -60,    13,    83,    52,    53,    54,   145,    85,    59,    60,
      24,   149,    18,   106,   107,    55,    56,   121,    61,    57,
      58,    72,    86,    87,   114,    15,    34,    86,    87,    16,
      59,    60,   136,   123,    35,    73,    36,    37,    38,    20,
      77,    39,    40,    34,    75,     4,     5,    21,    86,    87,
     125,    35,    34,    36,    37,    38,   130,    88,    23,    40,
      35,    31,    36,    37,    38,    98,    99,   135,    40,    86,
      87,    86,    87,    30,   138,    86,    87,   130,   122,    33,
     140,    55,    56,    32,   142,    48,   -60,    46,    83,    86,
      87,    49,    86,    87,    50,   129,   108,    86,    87,    86,
      87,   112,   111,   113,    93,    94,    95,    96,    51,    90,
      91,   101,   102,    80,    86,    87,   105,   110,   115,   116,
     133,    12,   137,   143,   147,   127,   128,    47,    27,    74,
     146,   117,   118,   120,   119,   141
};

static const yytype_uint8 yycheck[] =
{
      39,     3,     4,     5,    70,    21,    22,   124,     8,    48,
       0,    61,    51,    15,    16,    15,    16,    19,    20,    58,
      20,    40,    22,     3,     4,     5,   143,    77,    30,    31,
      46,   148,    24,    72,    73,    15,    16,   103,    40,    19,
      20,     8,    17,    18,    83,    22,    24,    17,    18,    26,
      30,    31,    27,    23,    32,    22,    34,    35,    36,     3,
      40,    39,    40,    24,    25,    28,    29,    20,    17,    18,
     109,    32,    24,    34,    35,    36,   115,    26,    23,    40,
      32,    40,    34,    35,    36,     4,     5,   126,    40,    17,
      18,    17,    18,    26,   133,    17,    18,   136,    26,    40,
      26,    15,    16,    21,    26,    20,    20,    27,    22,    17,
      18,    20,    17,    18,    20,    23,    21,    17,    18,    17,
      18,    21,    21,    21,     9,    10,    11,    12,    20,    13,
      14,     6,     7,    40,    17,    18,    40,    26,    20,    25,
       8,     6,    21,    33,    21,    26,    26,    34,    22,    46,
     144,    89,    92,   100,    97,   136
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    43,     0,    28,    29,    44,    45,    46,    47,
      48,    50,    45,    40,    49,    22,    26,    51,    24,    54,
       3,    20,    55,    23,    47,    52,    53,    46,    47,    56,
      26,    40,    21,    40,    24,    32,    34,    35,    36,    39,
      40,    57,    58,    59,    60,    63,    27,    56,    20,    20,
      20,    20,     3,     4,     5,    15,    16,    19,    20,    30,
      31,    40,    68,    69,    70,    71,    72,    73,    74,    78,
      84,    85,     8,    22,    53,    25,    68,    40,    67,    68,
      40,    68,    68,    22,    75,    85,    17,    18,    26,    79,
      13,    14,    80,     9,    10,    11,    12,    81,     4,     5,
      82,     6,     7,    83,    73,    40,    68,    68,    21,     8,
      26,    21,    21,    21,    68,    20,    25,    69,    70,    71,
      72,    73,    26,    23,    61,    68,    64,    26,    26,    23,
      68,    76,    77,     8,    57,    68,    27,    21,    68,    62,
      26,    77,    26,    33,    65,    57,    67,    21,    66,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    43,    42,    44,    44,    45,    45,    46,    46,
      47,    47,    49,    48,    51,    50,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    61,    62,    60,    64,    65,    66,
      63,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    74,
      75,    74,    74,    74,    76,    76,    77,    77,    78,    78,
      78,    79,    79,    80,    80,    81,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     6,
       1,     1,     0,     3,     0,     6,     0,     1,     2,     4,
       7,     2,     0,     2,     0,     3,     1,     1,     1,     1,
       4,     7,     5,     5,     0,     0,     9,     0,     0,     0,
      12,     1,     3,     0,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     3,     2,     4,
       0,     5,     1,     1,     1,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 51 "src/asin.y" /* yacc.c:1646  */
    { 
		niv = GLOBAL; 
		dvar = 0;
		cargaContexto(niv);
		haymain = 0;

		(yyval.exp).instr1 = creaLans(si);
		emite(INCTOP,crArgNul(),crArgNul(),crArgNul());

		lansMain = creaLans(si);
		emite(GOTOS,crArgNul(),crArgNul(),crArgNul());
		

	 }
#line 1390 "asin.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "src/asin.y" /* yacc.c:1646  */
    {
		if( haymain == 0 ) yyerror("El programa no tiene main"); 
		completaLans((yyvsp[-1].exp).instr1,crArgEnt(dvar));
	}
#line 1399 "asin.c" /* yacc.c:1646  */
    break;

  case 4:
#line 72 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1405 "asin.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "src/asin.y" /* yacc.c:1646  */
    {
				if(!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) 
					yyerror("Identificador repetido");
				else dvar += TALLA_TIPO_SIMPLE;
			}
#line 1415 "asin.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "src/asin.y" /* yacc.c:1646  */
    {
				int numelem = (yyvsp[-2].cent);
				if((yyvsp[-2].cent) <= 0) {
					yyerror("Talla inapropiada del array");
					numelem = 0;
				}

				int ref = insTdA((yyvsp[-5].cent), numelem);
				if( !insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, ref) ) 
					yyerror("Identificador repetido");
				else dvar += numelem * TALLA_TIPO_SIMPLE;
			}
#line 1432 "asin.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = T_ENTERO; }
#line 1438 "asin.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = T_LOGICO; }
#line 1444 "asin.c" /* yacc.c:1646  */
    break;

  case 12:
#line 105 "src/asin.y" /* yacc.c:1646  */
    {
				emite(PUSHFP,crArgNul(),crArgNul(),crArgNul());
				emite(FPTOP,crArgNul(),crArgNul(),crArgNul());
				(yyval.exp).instr1 = creaLans(si);
				emite(INCTOP,crArgNul(),crArgNul(),crArgNul());
			}
#line 1455 "asin.c" /* yacc.c:1646  */
    break;

  case 13:
#line 112 "src/asin.y" /* yacc.c:1646  */
    { 
				completaLans((yyvsp[-1].exp).instr1,crArgEnt(dvar));
				emite(TOPFP,crArgNul(),crArgNul(),crArgNul());
				emite(FPPOP,crArgNul(),crArgNul(),crArgNul());

				emite(RET,crArgNul(),crArgNul(),crArgNul());

				mostrarTdS();
				descargaContexto(niv); 
				niv--;
				//dvar = $<cent>2;
				dvar = oldvar;

			
			}
#line 1475 "asin.c" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "src/asin.y" /* yacc.c:1646  */
    { 
				niv++ ; 
				cargaContexto(niv); 
				oldvar = dvar;
				dvar = 0;
				dpar = -TALLA_SEGENLACES;
				
			}
#line 1488 "asin.c" /* yacc.c:1646  */
    break;

  case 15:
#line 140 "src/asin.y" /* yacc.c:1646  */
    {
				if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), niv-1, -1, (yyvsp[-1].cent))) {
					yyerror("Identificador de funcion repetido");
				}
				(yyval.cent) = (yyvsp[-1].cent);
				if(strcmp("main",(yyvsp[-4].ident))==0){
					if(haymain ==0){
						haymain = 1;
						completaLans(lansMain,crArgEtq(si));
					}else{
					yyerror("Hay más de un main");
				}
				}
			}
#line 1507 "asin.c" /* yacc.c:1646  */
    break;

  case 16:
#line 156 "src/asin.y" /* yacc.c:1646  */
    {
			(yyval.cent) = insTdD(-1,T_VACIO);
		}
#line 1515 "asin.c" /* yacc.c:1646  */
    break;

  case 17:
#line 159 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = (yyvsp[0].param).ref;}
#line 1521 "asin.c" /* yacc.c:1646  */
    break;

  case 18:
#line 164 "src/asin.y" /* yacc.c:1646  */
    {	
				
				  SIMB sim = obtTdS((yyvsp[0].ident));
				  dpar = dpar + sim.d;

				if(!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, dpar, -1)){
					yyerror("Parametro no valido");
				} else{
					(yyval.param).ref = insTdD(-1, (yyvsp[-1].cent));
				}
				
		  	}
#line 1538 "asin.c" /* yacc.c:1646  */
    break;

  case 19:
#line 177 "src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtTdS((yyvsp[-2].ident));
				
				dpar = dpar + sim.d;

				if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, dpar, (yyvsp[0].param).ref)){
					yyerror("Parametro no valido");}
				else{
					(yyval.param).ref = insTdD((yyvsp[0].param).ref,(yyvsp[-3].cent));
				}
				
			}
#line 1555 "asin.c" /* yacc.c:1646  */
    break;

  case 30:
#line 208 "src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtTdS((yyvsp[-3].ident));

				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if( ! (( sim.t == (yyvsp[-1].exp).t == T_ENTERO || 
							  sim.t == (yyvsp[-1].exp).t == T_LOGICO )) )
					yyerror("Error de tipos en la 'asignacion'"); 


			TIPO_ARG id_arg = crArgPos(niv,dvar);

			emite(EASIG,(yyvsp[-1].exp).tipo,crArgNul(),id_arg);
			(yyval.exp).tipo = id_arg;

			}
#line 1575 "asin.c" /* yacc.c:1646  */
    break;

  case 31:
#line 224 "src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtTdS((yyvsp[-6].ident));

				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if(sim.t != T_ARRAY ) 
					yyerror("El identificador debe ser de tipo 'array'");
				else if((yyvsp[-4].exp).t != T_ENTERO)
					yyerror("El indice del 'array' debe ser entero");
				else {
					DIM dim = obtTdA(sim.ref);
					if( ! (( dim.telem == (yyvsp[-1].exp).t == T_ENTERO || 
							  dim.telem == (yyvsp[-1].exp).t == T_LOGICO )) )
					yyerror("Error de tipos en la 'asignacion'");
				}
			
			TIPO_ARG elem = crArgPos(niv,creaVarTemp());
			TIPO_ARG id = crArgPos(sim.n,sim.d);
			emite(EASIG, (yyvsp[-1].exp).tipo,crArgNul(),elem);

			emite(EVA, id, (yyvsp[-4].exp).tipo,elem);
			(yyval.exp).tipo = elem;

		   }
#line 1603 "asin.c" /* yacc.c:1646  */
    break;

  case 32:
#line 250 "src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtTdS((yyvsp[-2].ident));
				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if ( sim.t != T_ENTERO)
					yyerror("El argumento del 'read' debe ser 'entero'");

				TIPO_ARG read = crArgPos(sim.n,sim.d);
				emite(EREAD,crArgNul(),crArgNul(),read);

			}
#line 1618 "asin.c" /* yacc.c:1646  */
    break;

  case 33:
#line 265 "src/asin.y" /* yacc.c:1646  */
    {
				(yyval.exp).t = T_ENTERO;

				if((yyvsp[-2].exp).t != T_ENTERO) {
					yyerror("La expresion del 'print' debe ser 'entera'");
				}
				emite(EWRITE,crArgNul(),crArgNul(),(yyvsp[-2].exp).tipo);
			}
#line 1631 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 276 "src/asin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].exp).t != T_LOGICO){
				yyerror("La expresion del 'if' debe ser 'logica'");
			}
			(yyval.exp).instr1 = creaLans(si);
			emite(EIGUAL,(yyvsp[-1].exp).tipo,crArgEnt(0),crArgNul());			
		}
#line 1643 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 284 "src/asin.y" /* yacc.c:1646  */
    {
			(yyval.exp).instr2 = creaLans(si);
			emite(GOTOS, crArgNul(),crArgNul(),crArgNul());
			completaLans((yyvsp[-1].exp).instr1,crArgEtq(si));
		}
#line 1653 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 290 "src/asin.y" /* yacc.c:1646  */
    {
			completaLans((yyvsp[-2].exp).instr2,crArgEtq(si));
		}
#line 1661 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 296 "src/asin.y" /* yacc.c:1646  */
    {
				(yyval.exp).instr1 = si;
			}
#line 1669 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 300 "src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-1].exp).t != T_LOGICO) {
					yyerror("La expresion del 'for' debe ser 'logica'");
				}
				(yyvsp[-1].exp).instr1 = creaLans(si);

				emite(EIGUAL,(yyvsp[-1].exp).tipo,crArgEnt(0),crArgNul());

				(yyvsp[-1].exp).instr2 = creaLans(si);
				emite(GOTOS, crArgNul(),crArgNul(),crArgNul());

				(yyval.exp).instr2 = si;
			}
#line 1687 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 314 "src/asin.y" /* yacc.c:1646  */
    {
				(yyvsp[-2].exp).instr1 = si;
				emite(GOTOS,crArgNul(),crArgNul(),crArgEtq((yyvsp[-5].exp).instr1));
				completaLans((yyvsp[-4].exp).instr2, crArgEtq(si));
			}
#line 1697 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 320 "src/asin.y" /* yacc.c:1646  */
    {
				 emite(GOTOS,crArgNul(),crArgNul(),crArgEtq((yyvsp[-4].exp).instr2));

				 completaLans((yyvsp[-6].exp).instr1,crArgEtq(si));
			}
#line 1707 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;  (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d; }
#line 1713 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 335 "src/asin.y" /* yacc.c:1646  */
    {
				(yyval.exp).t = T_ERROR;

				if((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
						yyerror("Error en 'expresion logica'");
					} else if ((yyvsp[-2].exp).t != T_LOGICO) {
						yyerror("Operacion logica invalida para no booleanos");
					} else {
						(yyval.exp).t = T_LOGICO;
						if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
							if ((yyvsp[-1].cent) == OP_AND) {
								(yyval.exp).v = FALSE;
								if ((yyvsp[-2].exp).v == TRUE)
									if ((yyvsp[0].exp).v == TRUE)
										(yyval.exp).v = TRUE;
							} else if ((yyvsp[-1].cent) == OP_OR) {
								(yyval.exp).v = TRUE;
								if ((yyvsp[-2].exp).v == FALSE)
									if ((yyvsp[0].exp).v == FALSE)
										(yyval.exp).v = FALSE;
							}
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				}
				if((yyvsp[-1].cent) == OP_AND){
					(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
					emite(EMULT,(yyvsp[-2].exp).tipo,(yyvsp[0].exp).tipo,(yyval.exp).tipo); 
				}
				else if((yyvsp[-1].cent) == OP_OR){
					(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
					emite(ESUM,(yyvsp[-2].exp).tipo,(yyvsp[0].exp).tipo,(yyval.exp).tipo);
					emite(EMENEQ,(yyval.exp).tipo,crArgEnt(1),crArgEtq(si+2));
					emite(EASIG,crArgEnt(1),crArgNul(),(yyval.exp).tipo);
				}
				
			}
#line 1756 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 376 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d;}
#line 1762 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 378 "src/asin.y" /* yacc.c:1646  */
    { 
				(yyval.exp).t = T_ERROR;
				if ((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
						yyerror("Tipos no coinciden en operacion de igualdad");
					} else if ((yyvsp[-2].exp).t == T_ARRAY) {
						yyerror("Operacion de igualdad no existe para arrays");
					} else {
						(yyval.exp).t = T_LOGICO;
						if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
							if ((yyvsp[-1].cent) == EIGUAL)
								(yyval.exp).v = (yyvsp[-2].exp).v == (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == EDIST)
								(yyval.exp).v = (yyvsp[-2].exp).v != (yyvsp[0].exp).v ? TRUE : FALSE;
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				}

			(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
			emite(EASIG,crArgEnt(1),crArgNul(),(yyval.exp).tipo);
			emite((yyvsp[-1].cent),(yyvsp[-2].exp).tipo,(yyvsp[0].exp).tipo,crArgEtq(si+2));
			emite(EASIG,crArgEnt(0),crArgNul(),(yyval.exp).tipo);
			}
#line 1791 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 404 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;  (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d; }
#line 1797 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 406 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = T_ERROR;
				if ((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
						yyerror("Tipos no coinciden en operacion relacional");
					} else if ((yyvsp[-2].exp).t == T_LOGICO) {
						yyerror("Operacion relacional solo acepta argumentos enteros");
					} else {
						(yyval.exp).t = T_LOGICO;
						if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
							if ((yyvsp[-1].cent) == EMAY)
								(yyval.exp).v = (yyvsp[-2].exp).v > (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == EMEN)
								(yyval.exp).v = (yyvsp[-2].exp).v < (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == EMAYEQ)
								(yyval.exp).v = (yyvsp[-2].exp).v >= (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == EMENEQ)
								(yyval.exp).v = (yyvsp[-2].exp).v <= (yyvsp[0].exp).v ? TRUE : FALSE;
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				} 
			(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
			emite(EASIG,crArgEnt(1),crArgNul(),(yyval.exp).tipo);
			emite((yyvsp[-1].cent),(yyvsp[-2].exp).tipo,(yyvsp[0].exp).tipo,crArgEtq(si+2));
			emite(EASIG,crArgEnt(0),crArgNul(),(yyval.exp).tipo);

			}
#line 1829 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 435 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;  (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d; }
#line 1835 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 437 "src/asin.y" /* yacc.c:1646  */
    { 
				(yyval.exp).t = T_ERROR;
				if ((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
						yyerror("Tipos no coinciden en operacion aditiva");
					} else if ((yyvsp[-2].exp).t != T_ENTERO) {
						yyerror("Operacion aditiva solo acepta argumentos enteros");
					} else {
						(yyval.exp).t = T_ENTERO;
						if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
							if ((yyvsp[-1].cent) == ESUM)
								(yyval.exp).v = (yyvsp[-2].exp).v + (yyvsp[0].exp).v;
							else if ((yyvsp[-1].cent) == EDIF)
								(yyval.exp).v = (yyvsp[-2].exp).v - (yyvsp[0].exp).v;
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				} 
			(yyval.exp).d = creaVarTemp();
			emite((yyvsp[-1].cent), crArgPos(niv,(yyvsp[-2].exp).d),crArgPos(niv,(yyvsp[0].exp).d),crArgPos(niv,(yyval.exp).d));
			}
#line 1861 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 460 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;  (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d; }
#line 1867 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 462 "src/asin.y" /* yacc.c:1646  */
    { 
				(yyval.exp).t = T_ERROR;
				if ((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
						yyerror("Tipos no coinciden en operacion multiplicativa");
					} else if ((yyvsp[-2].exp).t != T_ENTERO) {
						yyerror("Operacion multiplicativa solo acepta argumentos enteros");
					} else {
						(yyval.exp).t = T_ENTERO;
						if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
							if ((yyvsp[-1].cent) == EMULT)
								(yyval.exp).v = (yyvsp[-2].exp).v * (yyvsp[0].exp).v;
							else if ((yyvsp[-1].cent) == EDIVI) {
								if ((yyvsp[0].exp).v == 0) {
									(yyval.exp).t = T_ERROR;
									yyerror("Division entre 0");
								} else {
									(yyval.exp).v = (yyvsp[-2].exp).v / (yyvsp[0].exp).v;
								}
							} else if ((yyvsp[-1].cent) == OP_MOD) {
								if ((yyvsp[0].exp).v == 0) {
									(yyval.exp).t = T_ERROR;
									yyerror("Modulo entre 0");
								} else {
									(yyval.exp).v = (yyvsp[-2].exp).v % (yyvsp[0].exp).v;
								}
							}
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				}
			(yyval.exp).d = creaVarTemp();
			emite((yyvsp[-1].cent), crArgPos(niv,(yyvsp[-2].exp).d),crArgPos(niv,(yyvsp[0].exp).d),crArgPos(niv,(yyval.exp).d)); 
			}
#line 1906 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 498 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;  (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d; }
#line 1912 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 500 "src/asin.y" /* yacc.c:1646  */
    { 
				(yyval.exp).t = T_ERROR;
				(yyval.exp).valid = (yyvsp[0].exp).valid;
				if ((yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[0].exp).t == T_ENTERO) {
						if ((yyvsp[-1].cent) == OP_NOT) {
							yyerror("Operacion \"!\" invalida en expresion entera");
						} else if ((yyvsp[0].exp).valid == TRUE) {
							(yyval.exp).t = T_ENTERO;
							if ((yyvsp[-1].cent) == OP_MAS) {
								(yyval.exp).v = (yyvsp[0].exp).v;
							} else if ((yyvsp[-1].cent) == OP_MENOS) {
								(yyval.exp).v = - (yyvsp[0].exp).v;
							}
						}
					} else if ((yyvsp[0].exp).t == T_LOGICO) {
						if ((yyvsp[-1].cent) == OP_NOT) {
						
							(yyval.exp).t = T_LOGICO;
							if ((yyvsp[0].exp).valid == TRUE) {
								if ((yyvsp[0].exp).v == TRUE)
									(yyval.exp).v = FALSE;
								else
									(yyval.exp).v = TRUE;
							}
							
							(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
							emite(EASIG,crArgEnt(0),crArgNul(),(yyval.exp).tipo);
							emite(EDIST,(yyvsp[0].exp).tipo,crArgEnt(0),crArgEtq(si+2));
							emite(EASIG,crArgEnt(1),crArgNul(),(yyval.exp).tipo);
					 
						} else {
							yyerror("Operacion entera invalida en expresion logica");
						}
					}
				}
				
			}
#line 1955 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 539 "src/asin.y" /* yacc.c:1646  */
    { 
				SIMB simb = obtTdS((yyvsp[0].ident));

				(yyval.exp).t = T_ERROR;
				if (simb.t == T_ERROR)
					yyerror("Objeto no declarado");
				else if (simb.t == T_ARRAY)
					yyerror("El array solo puede ser accedido con indices");
				else
					(yyval.exp).t = simb.t;
				(yyval.exp).valid = FALSE; 

				(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
				TIPO_ARG value = crArgPos(simb.n,simb.d);
				emite((yyvsp[-1].cent),crArgEnt(1),value,(yyval.exp).tipo);

			}
#line 1977 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 559 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).t = (yyvsp[-1].exp).t; (yyval.exp).v = (yyvsp[-1].exp).v; (yyval.exp).valid = (yyvsp[-1].exp).valid; }
#line 1983 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 561 "src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtTdS((yyvsp[-1].ident));
				if(sim.t != T_ENTERO) 
					yyerror("El identificador debe ser entero");
				
				(yyval.exp).tipo = crArgPos(niv,creaVarTemp());
				TIPO_ARG value = crArgPos(sim.n,sim.d);
				emite((yyvsp[-1].ident),crArgEnt(1),value,(yyval.exp).tipo);
			}
#line 1997 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 571 "src/asin.y" /* yacc.c:1646  */
    { 
				SIMB simb = obtTdS((yyvsp[-3].ident));
				(yyval.exp).t = T_ERROR;
				(yyval.exp).valid = FALSE;
				if (simb.t == T_ERROR)
					yyerror("Objeto no declarado");
				else if (simb.t != T_ARRAY)
					yyerror("La variable no es un array, no puede ser accedida con indices");
				else {
					DIM dim = obtTdA(simb.ref);
					if ((yyvsp[-1].exp).valid == TRUE && ((yyvsp[-1].exp).v < 0 || (yyvsp[-1].exp).v >= dim.nelem))
						yyerror("Indice no valido");
					else
						(yyval.exp).t = dim.telem;
				} 
				
				TIPO_ARG indice = (yyvsp[-1].exp).tipo;
				(yyval.exp).tipo = crArgPos(niv, creaVarTemp());
				emite(EAV, crArgPos(simb.n, simb.d), indice, (yyval.exp).tipo);

			}
#line 2023 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 593 "src/asin.y" /* yacc.c:1646  */
    {
			SIMB simb = obtTdS((yyvsp[0].ident));

			if (simb.t == T_ERROR)
				yyerror("Función no declarada");
			


			(yyval.exp).tipo = crArgPos(niv, creaVarTemp());
			emite(INCTOP,crArgNul(),crArgNul(),crArgEnt(simb.t));
			
		}
#line 2040 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 606 "src/asin.y" /* yacc.c:1646  */
    {	
			SIMB simb = obtTdS((yyvsp[-4].ident));

			(yyval.exp).t = simb.t;

			emite(CALL,crArgNul(),crArgNul(),crArgEnt(simb.d));
			emite(DECTOP,crArgNul(),crArgNul(),crArgEnt(simb.t));
			emite(EPOP,crArgNul(),crArgNul(),(yyval.exp).tipo);
		}
#line 2054 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 617 "src/asin.y" /* yacc.c:1646  */
    { 	
				  	SIMB simb = obtTdS((yyvsp[0].ident));
					(yyval.exp).t = T_ERROR;
					(yyval.exp).valid = FALSE;
					if (simb.t == T_ERROR)
						yyerror("Objeto no declarado");
					else if (simb.t == T_ARRAY)
						yyerror("El array solo puede ser accedido con indices");
					else
						(yyval.exp).t = simb.t; 
			}
#line 2070 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 628 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;  (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).d = (yyvsp[0].exp).d;}
#line 2076 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 635 "src/asin.y" /* yacc.c:1646  */
    {
			emite(EPUSH,crArgNul(),crArgNul(),(yyvsp[0].exp).tipo);
		}
#line 2084 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 639 "src/asin.y" /* yacc.c:1646  */
    {
			emite(EPUSH,crArgNul(),crArgNul(),(yyvsp[-2].exp).tipo);

		}
#line 2093 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 645 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).v = (yyvsp[0].cent); (yyval.exp).t = T_ENTERO; (yyval.exp).valid = TRUE; }
#line 2099 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 646 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).v = TRUE;     (yyval.exp).t = T_LOGICO; (yyval.exp).valid = TRUE; }
#line 2105 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 647 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).v = FALSE;    (yyval.exp).t = T_LOGICO; (yyval.exp).valid = TRUE; }
#line 2111 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 650 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_AND; }
#line 2117 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 651 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_OR; }
#line 2123 "asin.c" /* yacc.c:1646  */
    break;

  case 73:
#line 654 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EIGUAL; }
#line 2129 "asin.c" /* yacc.c:1646  */
    break;

  case 74:
#line 655 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIST; }
#line 2135 "asin.c" /* yacc.c:1646  */
    break;

  case 75:
#line 658 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMAY; }
#line 2141 "asin.c" /* yacc.c:1646  */
    break;

  case 76:
#line 659 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMEN; }
#line 2147 "asin.c" /* yacc.c:1646  */
    break;

  case 77:
#line 660 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMAYEQ; }
#line 2153 "asin.c" /* yacc.c:1646  */
    break;

  case 78:
#line 661 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMENEQ; }
#line 2159 "asin.c" /* yacc.c:1646  */
    break;

  case 79:
#line 664 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM;}
#line 2165 "asin.c" /* yacc.c:1646  */
    break;

  case 80:
#line 665 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF;}
#line 2171 "asin.c" /* yacc.c:1646  */
    break;

  case 81:
#line 667 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMULT; }
#line 2177 "asin.c" /* yacc.c:1646  */
    break;

  case 82:
#line 668 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIVI; }
#line 2183 "asin.c" /* yacc.c:1646  */
    break;

  case 83:
#line 671 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MAS; }
#line 2189 "asin.c" /* yacc.c:1646  */
    break;

  case 84:
#line 672 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MENOS; }
#line 2195 "asin.c" /* yacc.c:1646  */
    break;

  case 85:
#line 673 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_NOT; }
#line 2201 "asin.c" /* yacc.c:1646  */
    break;

  case 86:
#line 676 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM; }
#line 2207 "asin.c" /* yacc.c:1646  */
    break;

  case 87:
#line 677 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF; }
#line 2213 "asin.c" /* yacc.c:1646  */
    break;


#line 2217 "asin.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
