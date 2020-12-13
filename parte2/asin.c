/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "src/asin.y"

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"

#line 78 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CTE_ = 3,                       /* CTE_  */
  YYSYMBOL_SUMA_ = 4,                      /* SUMA_  */
  YYSYMBOL_RESTA_ = 5,                     /* RESTA_  */
  YYSYMBOL_MULTI_ = 6,                     /* MULTI_  */
  YYSYMBOL_DIV_ = 7,                       /* DIV_  */
  YYSYMBOL_ASIGNA_ = 8,                    /* ASIGNA_  */
  YYSYMBOL_MENORQ_ = 9,                    /* MENORQ_  */
  YYSYMBOL_MAYORQ_ = 10,                   /* MAYORQ_  */
  YYSYMBOL_MENORIG_ = 11,                  /* MENORIG_  */
  YYSYMBOL_MAYORIG_ = 12,                  /* MAYORIG_  */
  YYSYMBOL_IGUAL_ = 13,                    /* IGUAL_  */
  YYSYMBOL_DISTINTO_ = 14,                 /* DISTINTO_  */
  YYSYMBOL_INCREMENTO_ = 15,               /* INCREMENTO_  */
  YYSYMBOL_DECREMENTO_ = 16,               /* DECREMENTO_  */
  YYSYMBOL_AND_ = 17,                      /* AND_  */
  YYSYMBOL_OR_ = 18,                       /* OR_  */
  YYSYMBOL_NEGACION_ = 19,                 /* NEGACION_  */
  YYSYMBOL_OPAR_ = 20,                     /* OPAR_  */
  YYSYMBOL_CPAR_ = 21,                     /* CPAR_  */
  YYSYMBOL_OCOR_ = 22,                     /* OCOR_  */
  YYSYMBOL_CCOR_ = 23,                     /* CCOR_  */
  YYSYMBOL_OLLAVE_ = 24,                   /* OLLAVE_  */
  YYSYMBOL_CLLAVE_ = 25,                   /* CLLAVE_  */
  YYSYMBOL_PUNTCOMA_ = 26,                 /* PUNTCOMA_  */
  YYSYMBOL_COMA_ = 27,                     /* COMA_  */
  YYSYMBOL_INT_ = 28,                      /* INT_  */
  YYSYMBOL_BOOL_ = 29,                     /* BOOL_  */
  YYSYMBOL_TRUE_ = 30,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 31,                    /* FALSE_  */
  YYSYMBOL_IF_ = 32,                       /* IF_  */
  YYSYMBOL_ELSE_ = 33,                     /* ELSE_  */
  YYSYMBOL_FOR_ = 34,                      /* FOR_  */
  YYSYMBOL_READ_ = 35,                     /* READ_  */
  YYSYMBOL_PRINT_ = 36,                    /* PRINT_  */
  YYSYMBOL_DO_ = 37,                       /* DO_  */
  YYSYMBOL_WHILE_ = 38,                    /* WHILE_  */
  YYSYMBOL_RETURN_ = 39,                   /* RETURN_  */
  YYSYMBOL_ID_ = 40,                       /* ID_  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_programa = 42,                  /* programa  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_listaDeclaraciones = 44,        /* listaDeclaraciones  */
  YYSYMBOL_declaracion = 45,               /* declaracion  */
  YYSYMBOL_declaracionVariable = 46,       /* declaracionVariable  */
  YYSYMBOL_tipoSimple = 47,                /* tipoSimple  */
  YYSYMBOL_declaracionFuncion = 48,        /* declaracionFuncion  */
  YYSYMBOL_49_2 = 49,                      /* @2  */
  YYSYMBOL_cabeceraFuncion = 50,           /* cabeceraFuncion  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_parametrosFormales = 52,        /* parametrosFormales  */
  YYSYMBOL_listaParametrosFormales = 53,   /* listaParametrosFormales  */
  YYSYMBOL_bloque = 54,                    /* bloque  */
  YYSYMBOL_declaracionVariableLocal = 55,  /* declaracionVariableLocal  */
  YYSYMBOL_listaInstrucciones = 56,        /* listaInstrucciones  */
  YYSYMBOL_instruccion = 57,               /* instruccion  */
  YYSYMBOL_instruccionAsignacion = 58,     /* instruccionAsignacion  */
  YYSYMBOL_instruccionEntradaSalida = 59,  /* instruccionEntradaSalida  */
  YYSYMBOL_instruccionSeleccion = 60,      /* instruccionSeleccion  */
  YYSYMBOL_instruccionIteracion = 61,      /* instruccionIteracion  */
  YYSYMBOL_expresionOpcional = 62,         /* expresionOpcional  */
  YYSYMBOL_expresion = 63,                 /* expresion  */
  YYSYMBOL_expresionIgualdad = 64,         /* expresionIgualdad  */
  YYSYMBOL_expresionRelacional = 65,       /* expresionRelacional  */
  YYSYMBOL_expresionAditiva = 66,          /* expresionAditiva  */
  YYSYMBOL_expresionMultiplicativa = 67,   /* expresionMultiplicativa  */
  YYSYMBOL_expresionUnaria = 68,           /* expresionUnaria  */
  YYSYMBOL_expresionSufija = 69,           /* expresionSufija  */
  YYSYMBOL_parametrosActuales = 70,        /* parametrosActuales  */
  YYSYMBOL_listaParametrosActuales = 71,   /* listaParametrosActuales  */
  YYSYMBOL_constante = 72,                 /* constante  */
  YYSYMBOL_operadorLogico = 73,            /* operadorLogico  */
  YYSYMBOL_operadorIgualdad = 74,          /* operadorIgualdad  */
  YYSYMBOL_operadorRelacional = 75,        /* operadorRelacional  */
  YYSYMBOL_operadorAditivo = 76,           /* operadorAditivo  */
  YYSYMBOL_operadorMultiplicativo = 77,    /* operadorMultiplicativo  */
  YYSYMBOL_operadorUnario = 78,            /* operadorUnario  */
  YYSYMBOL_operadorIncremento = 79         /* operadorIncremento  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    41,    48,    49,    52,    53,    55,    62,
      76,    77,    81,    80,    95,    94,   105,   106,   110,   117,
     123,   126,   127,   130,   131,   134,   135,   136,   137,   138,
     140,   150,   170,   178,   187,   190,   200,   201,   202,   204,
     205,   237,   238,   260,   261,   286,   287,   309,   310,   345,
     346,   377,   392,   393,   399,   416,   417,   429,   431,   432,
     435,   436,   439,   440,   441,   444,   445,   448,   449,   452,
     453,   454,   455,   458,   459,   461,   462,   465,   466,   467,
     470,   471
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
  "\"end of file\"", "error", "\"invalid token\"", "CTE_", "SUMA_",
  "RESTA_", "MULTI_", "DIV_", "ASIGNA_", "MENORQ_", "MAYORQ_", "MENORIG_",
  "MAYORIG_", "IGUAL_", "DISTINTO_", "INCREMENTO_", "DECREMENTO_", "AND_",
  "OR_", "NEGACION_", "OPAR_", "CPAR_", "OCOR_", "CCOR_", "OLLAVE_",
  "CLLAVE_", "PUNTCOMA_", "COMA_", "INT_", "BOOL_", "TRUE_", "FALSE_",
  "IF_", "ELSE_", "FOR_", "READ_", "PRINT_", "DO_", "WHILE_", "RETURN_",
  "ID_", "$accept", "programa", "$@1", "listaDeclaraciones", "declaracion",
  "declaracionVariable", "tipoSimple", "declaracionFuncion", "@2",
  "cabeceraFuncion", "$@3", "parametrosFormales",
  "listaParametrosFormales", "bloque", "declaracionVariableLocal",
  "listaInstrucciones", "instruccion", "instruccionAsignacion",
  "instruccionEntradaSalida", "instruccionSeleccion",
  "instruccionIteracion", "expresionOpcional", "expresion",
  "expresionIgualdad", "expresionRelacional", "expresionAditiva",
  "expresionMultiplicativa", "expresionUnaria", "expresionSufija",
  "parametrosActuales", "listaParametrosActuales", "constante",
  "operadorLogico", "operadorIgualdad", "operadorRelacional",
  "operadorAditivo", "operadorMultiplicativo", "operadorUnario",
  "operadorIncremento", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
#endif

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -94,     8,    38,   -94,   -94,   -94,    38,   -94,   -94,   -29,
     -94,   -94,   -94,    -6,     3,    19,   -94,    23,   -94,   -94,
      29,    38,    38,    33,    15,    42,   -94,   -94,    48,    22,
     -94,    55,   -94,    -6,   -94,    58,    70,    74,    82,    -2,
      -1,   -94,   -94,   -94,   -94,   -94,    38,    40,    -2,    20,
      66,    -2,   -94,   -94,   -94,   -94,   -94,   -94,    -2,   -94,
     -94,    88,    51,   118,   117,   129,   130,   -94,   -94,   -94,
      -2,    73,    -2,    -2,   -94,   -94,    97,    71,    90,   121,
     103,   102,   104,    -2,    -2,   -94,   -94,   -94,   105,    -2,
     -94,   -94,    -2,   -94,   -94,   -94,   -94,    -2,   -94,   -94,
      -2,   -94,   -94,    -2,   -94,   -94,    79,    30,    49,    -2,
      -2,   109,   114,   -94,    14,   120,   -94,    94,   -94,   118,
     117,   129,   130,   -94,   -94,   134,   110,   121,    81,   -94,
     -94,    -2,   -94,   -94,    -2,    49,    20,   -94,    83,   -94,
     123,   -94,    49,   -94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    10,    11,     3,     4,     6,     0,
       7,    12,     5,    14,     0,     0,     8,     0,    22,    13,
       0,    16,    24,     0,     0,     0,    17,    21,     0,     0,
       9,    18,    15,     0,    24,     0,     0,     0,     0,     0,
       0,    23,    26,    28,    27,    29,     0,     0,     0,    38,
       0,     0,    62,    77,    78,    80,    81,    79,     0,    63,
      64,    56,     0,    39,    41,    43,    45,    47,    49,    57,
       0,     0,     0,     0,    19,    25,     0,    56,     0,    36,
       0,     0,     0,    59,     0,    53,    65,    66,     0,     0,
      67,    68,     0,    70,    69,    72,    71,     0,    73,    74,
       0,    75,    76,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    60,     0,    58,     0,    20,    40,
      42,    44,    46,    48,    30,     0,     0,    37,     0,    32,
      33,     0,    55,    54,     0,     0,    38,    61,     0,    34,
       0,    31,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   -94,   139,   124,   -16,   -94,   -94,   -94,
     -94,   -94,   101,   -94,   -94,   115,   -93,   -94,   -94,   -94,
     -94,    12,   -39,    61,    59,    56,    52,   -66,   -94,   -94,
      24,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    14,    11,
      17,    25,    26,    19,    22,    29,    41,    42,    43,    44,
      45,    78,    79,    63,    64,    65,    66,    67,    68,   115,
     116,    69,    89,    92,    97,   100,   103,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    52,    53,    54,   104,    24,    28,    72,     3,    76,
      85,    13,    81,    55,    56,   126,    15,    57,    58,    82,
      16,    73,    20,    52,    53,    54,    85,    18,    59,    60,
      24,    86,    87,   106,   107,    55,    56,   123,    61,    57,
      58,   131,   139,    21,   114,   117,    34,    86,    87,   143,
      59,    60,    23,   125,    35,    31,    36,    37,    38,    30,
      77,    39,    40,    32,    34,    75,     4,     5,    86,    87,
     127,   128,    35,    34,    36,    37,    38,    88,    48,   109,
      40,    35,    46,    36,    37,    38,    55,    56,    33,    40,
      49,    83,   114,    84,    50,   138,    86,    87,    86,    87,
      86,    87,    51,    55,    56,   124,    80,   136,    83,   141,
      84,    86,    87,   105,    86,    87,   110,   133,   108,    86,
      87,    86,    87,   112,   111,   113,    93,    94,    95,    96,
     118,    90,    91,    98,    99,   129,   101,   102,    86,    87,
     130,   132,   134,   135,   142,    12,    27,    74,   140,    47,
     119,   120,   122,   121,     0,   137
};

static const yytype_int16 yycheck[] =
{
      39,     3,     4,     5,    70,    21,    22,     8,     0,    48,
      61,    40,    51,    15,    16,   108,    22,    19,    20,    58,
      26,    22,     3,     3,     4,     5,    77,    24,    30,    31,
      46,    17,    18,    72,    73,    15,    16,   103,    40,    19,
      20,    27,   135,    20,    83,    84,    24,    17,    18,   142,
      30,    31,    23,    23,    32,    40,    34,    35,    36,    26,
      40,    39,    40,    21,    24,    25,    28,    29,    17,    18,
     109,   110,    32,    24,    34,    35,    36,    26,    20,     8,
      40,    32,    27,    34,    35,    36,    15,    16,    40,    40,
      20,    20,   131,    22,    20,   134,    17,    18,    17,    18,
      17,    18,    20,    15,    16,    26,    40,    26,    20,    26,
      22,    17,    18,    40,    17,    18,    26,    23,    21,    17,
      18,    17,    18,    21,    21,    21,     9,    10,    11,    12,
      25,    13,    14,     4,     5,    26,     6,     7,    17,    18,
      26,    21,     8,    33,    21,     6,    22,    46,   136,    34,
      89,    92,   100,    97,    -1,   131
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    43,     0,    28,    29,    44,    45,    46,    47,
      48,    50,    45,    40,    49,    22,    26,    51,    24,    54,
       3,    20,    55,    23,    47,    52,    53,    46,    47,    56,
      26,    40,    21,    40,    24,    32,    34,    35,    36,    39,
      40,    57,    58,    59,    60,    61,    27,    56,    20,    20,
      20,    20,     3,     4,     5,    15,    16,    19,    20,    30,
      31,    40,    63,    64,    65,    66,    67,    68,    69,    72,
      78,    79,     8,    22,    53,    25,    63,    40,    62,    63,
      40,    63,    63,    20,    22,    79,    17,    18,    26,    73,
      13,    14,    74,     9,    10,    11,    12,    75,     4,     5,
      76,     6,     7,    77,    68,    40,    63,    63,    21,     8,
      26,    21,    21,    21,    63,    70,    71,    63,    25,    64,
      65,    66,    67,    68,    26,    23,    57,    63,    63,    26,
      26,    27,    21,    23,     8,    33,    26,    71,    63,    57,
      62,    26,    21,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    43,    42,    44,    44,    45,    45,    46,    46,
      47,    47,    49,    48,    51,    50,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    61,    62,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     6,
       1,     1,     0,     3,     0,     6,     0,     1,     2,     4,
       7,     2,     0,     2,     0,     3,     1,     1,     1,     1,
       4,     7,     5,     5,     7,     9,     1,     3,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     3,     2,     4,     4,     1,     1,     1,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
#line 41 "src/asin.y"
           { niv = GLOBAL; dvar = 0; cargaContexto(niv); }
#line 1252 "asin.c"
    break;

  case 3: /* programa: $@1 listaDeclaraciones  */
#line 43 "src/asin.y"
        {
		if( (yyvsp[0].exp).v == 0 ) yyerror("El programa no tiene main"); 
	}
#line 1260 "asin.c"
    break;

  case 4: /* listaDeclaraciones: declaracion  */
#line 48 "src/asin.y"
                              {(yyval.exp) = (yyvsp[0].exp);}
#line 1266 "asin.c"
    break;

  case 8: /* declaracionVariable: tipoSimple ID_ PUNTCOMA_  */
#line 56 "src/asin.y"
                        {
				if(!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) 
					yyerror("Identificador repetido");
				else dvar += TALLA_TIPO_SIMPLE;
			}
#line 1276 "asin.c"
    break;

  case 9: /* declaracionVariable: tipoSimple ID_ OCOR_ CTE_ CCOR_ PUNTCOMA_  */
#line 63 "src/asin.y"
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
#line 1293 "asin.c"
    break;

  case 10: /* tipoSimple: INT_  */
#line 76 "src/asin.y"
                  { (yyval.cent) = T_ENTERO; }
#line 1299 "asin.c"
    break;

  case 11: /* tipoSimple: BOOL_  */
#line 77 "src/asin.y"
                { (yyval.cent) = T_LOGICO; }
#line 1305 "asin.c"
    break;

  case 12: /* @2: %empty  */
#line 81 "src/asin.y"
                        {
				(yyval.cent) = dvar; 
				dvar = 0;
			}
#line 1314 "asin.c"
    break;

  case 13: /* declaracionFuncion: cabeceraFuncion @2 bloque  */
#line 86 "src/asin.y"
                        { 
				descargaContexto(niv); 
				niv--;
				dvar = (yyvsp[-1].cent);
			}
#line 1324 "asin.c"
    break;

  case 14: /* $@3: %empty  */
#line 95 "src/asin.y"
                        { 
				niv++ ; 
				cargaContexto(niv); 
			}
#line 1333 "asin.c"
    break;

  case 15: /* cabeceraFuncion: tipoSimple ID_ $@3 OPAR_ parametrosFormales CPAR_  */
#line 100 "src/asin.y"
                        {
				if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), niv, dvar, (yyvsp[-1].cent))) 
					yyerror("Identificador de funcion repetido");
			}
#line 1342 "asin.c"
    break;

  case 17: /* parametrosFormales: listaParametrosFormales  */
#line 106 "src/asin.y"
                                          {(yyval.cent) = (yyvsp[0].cent);}
#line 1348 "asin.c"
    break;

  case 18: /* listaParametrosFormales: tipoSimple ID_  */
#line 111 "src/asin.y"
                        {
				int ref = insTdD(-1, (yyvsp[-1].cent));
				if(!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, dvar, ref))
					yyerror("Parametro no valido");
				(yyval.cent) = ref;
		  	}
#line 1359 "asin.c"
    break;

  case 19: /* listaParametrosFormales: tipoSimple ID_ COMA_ listaParametrosFormales  */
#line 118 "src/asin.y"
                        {
				if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, dvar, (yyvsp[0].cent)))
					yyerror("Parametro no valido");
			}
#line 1368 "asin.c"
    break;

  case 30: /* instruccionAsignacion: ID_ ASIGNA_ expresion PUNTCOMA_  */
#line 141 "src/asin.y"
                        {
				SIMB sim = obtTdS((yyvsp[-3].ident));

				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if( ! (( sim.t == (yyvsp[-1].exp).t == T_ENTERO || 
							  sim.t == (yyvsp[-1].exp).t == T_LOGICO )) )
					yyerror("Error de tipos en la 'asignacion'"); 

			}
#line 1382 "asin.c"
    break;

  case 31: /* instruccionAsignacion: ID_ OCOR_ expresion CCOR_ ASIGNA_ expresion PUNTCOMA_  */
#line 151 "src/asin.y"
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
				 

		   }
#line 1404 "asin.c"
    break;

  case 32: /* instruccionEntradaSalida: READ_ OPAR_ ID_ CPAR_ PUNTCOMA_  */
#line 171 "src/asin.y"
                        {
				SIMB sim = obtTdS((yyvsp[-2].ident));
				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if ( sim.t != T_ENTERO)
					yyerror("El argumento del 'read' debe ser 'entero'");
			}
#line 1415 "asin.c"
    break;

  case 33: /* instruccionEntradaSalida: PRINT_ OPAR_ expresion CPAR_ PUNTCOMA_  */
#line 180 "src/asin.y"
                        {
				if((yyvsp[-2].exp).t != T_ENTERO) {
					yyerror("La expresion del 'print' debe ser 'entera'");
				}
			}
#line 1425 "asin.c"
    break;

  case 35: /* instruccionIteracion: FOR_ OPAR_ expresionOpcional PUNTCOMA_ expresion PUNTCOMA_ expresionOpcional CPAR_ instruccion  */
#line 191 "src/asin.y"
                        {
				if((yyvsp[-4].exp).t != T_LOGICO) {
					yyerror("La expresion del 'for' debe ser 'logica'");
				} else {
					yyerror("Prueba");
				}
			}
#line 1437 "asin.c"
    break;

  case 39: /* expresion: expresionIgualdad  */
#line 204 "src/asin.y"
                              { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1443 "asin.c"
    break;

  case 40: /* expresion: expresion operadorLogico expresionIgualdad  */
#line 207 "src/asin.y"
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
			}
#line 1475 "asin.c"
    break;

  case 41: /* expresionIgualdad: expresionRelacional  */
#line 237 "src/asin.y"
                                        { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1481 "asin.c"
    break;

  case 42: /* expresionIgualdad: expresionIgualdad operadorIgualdad expresionRelacional  */
#line 239 "src/asin.y"
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
							if ((yyvsp[-1].cent) == OP_IGUAL)
								(yyval.exp).v = (yyvsp[-2].exp).v == (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == OP_NOTIGUAL)
								(yyval.exp).v = (yyvsp[-2].exp).v != (yyvsp[0].exp).v ? TRUE : FALSE;
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				} 
			}
#line 1505 "asin.c"
    break;

  case 43: /* expresionRelacional: expresionAditiva  */
#line 260 "src/asin.y"
                                       { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1511 "asin.c"
    break;

  case 44: /* expresionRelacional: expresionRelacional operadorRelacional expresionAditiva  */
#line 262 "src/asin.y"
                        { (yyval.exp).t = T_ERROR;
				if ((yyvsp[-2].exp).t != T_ERROR && (yyvsp[0].exp).t != T_ERROR) {
					if ((yyvsp[-2].exp).t != (yyvsp[0].exp).t) {
						yyerror("Tipos no coinciden en operacion relacional");
					} else if ((yyvsp[-2].exp).t == T_LOGICO) {
						yyerror("Operacion relacional solo acepta argumentos enteros");
					} else {
						(yyval.exp).t = T_LOGICO;
						if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
							if ((yyvsp[-1].cent) == OP_MAYOR)
								(yyval.exp).v = (yyvsp[-2].exp).v > (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == OP_MENOR)
								(yyval.exp).v = (yyvsp[-2].exp).v < (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == OP_MAYORIG)
								(yyval.exp).v = (yyvsp[-2].exp).v >= (yyvsp[0].exp).v ? TRUE : FALSE;
							else if ((yyvsp[-1].cent) == OP_MENORIG)
								(yyval.exp).v = (yyvsp[-2].exp).v <= (yyvsp[0].exp).v ? TRUE : FALSE;
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				} 
			}
#line 1538 "asin.c"
    break;

  case 45: /* expresionAditiva: expresionMultiplicativa  */
#line 286 "src/asin.y"
                                           { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1544 "asin.c"
    break;

  case 46: /* expresionAditiva: expresionAditiva operadorAditivo expresionMultiplicativa  */
#line 288 "src/asin.y"
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
							if ((yyvsp[-1].cent) == OP_SUMA)
								(yyval.exp).v = (yyvsp[-2].exp).v + (yyvsp[0].exp).v;
							else if ((yyvsp[-1].cent) == OP_RESTA)
								(yyval.exp).v = (yyvsp[-2].exp).v - (yyvsp[0].exp).v;
							(yyval.exp).valid = TRUE;
						} else (yyval.exp).valid = FALSE;
					}
				} 
			}
#line 1568 "asin.c"
    break;

  case 47: /* expresionMultiplicativa: expresionUnaria  */
#line 309 "src/asin.y"
                                          { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1574 "asin.c"
    break;

  case 48: /* expresionMultiplicativa: expresionMultiplicativa operadorMultiplicativo expresionUnaria  */
#line 311 "src/asin.y"
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
							if ((yyvsp[-1].cent) == OP_MULT)
								(yyval.exp).v = (yyvsp[-2].exp).v * (yyvsp[0].exp).v;
							else if ((yyvsp[-1].cent) == OP_DIV) {
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
			}
#line 1611 "asin.c"
    break;

  case 49: /* expresionUnaria: expresionSufija  */
#line 345 "src/asin.y"
                                  { (yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1617 "asin.c"
    break;

  case 50: /* expresionUnaria: operadorUnario expresionUnaria  */
#line 347 "src/asin.y"
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
						} else {
							yyerror("Operacion entera invalida en expresion logica");
						}
					}
				} 
			}
#line 1652 "asin.c"
    break;

  case 51: /* expresionUnaria: operadorIncremento ID_  */
#line 378 "src/asin.y"
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
			}
#line 1669 "asin.c"
    break;

  case 52: /* expresionSufija: OPAR_ expresion CPAR_  */
#line 392 "src/asin.y"
                                        { (yyval.exp).t = (yyvsp[-1].exp).t; (yyval.exp).v = (yyvsp[-1].exp).v; (yyval.exp).valid = (yyvsp[-1].exp).valid; }
#line 1675 "asin.c"
    break;

  case 53: /* expresionSufija: ID_ operadorIncremento  */
#line 394 "src/asin.y"
                        {
				SIMB sim = obtTdS((yyvsp[-1].ident));
				if(sim.t != T_ENTERO) 
					yyerror("El identificador debe ser entero");
			}
#line 1685 "asin.c"
    break;

  case 54: /* expresionSufija: ID_ OCOR_ expresion CCOR_  */
#line 400 "src/asin.y"
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
			}
#line 1706 "asin.c"
    break;

  case 56: /* expresionSufija: ID_  */
#line 418 "src/asin.y"
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
#line 1722 "asin.c"
    break;

  case 57: /* expresionSufija: constante  */
#line 429 "src/asin.y"
                            {(yyval.exp).t = (yyvsp[0].exp).t; (yyval.exp).v = (yyvsp[0].exp).v; (yyval.exp).valid = (yyvsp[0].exp).valid;}
#line 1728 "asin.c"
    break;

  case 62: /* constante: CTE_  */
#line 439 "src/asin.y"
                 { (yyval.exp).v = (yyvsp[0].cent); (yyval.exp).t = T_ENTERO; (yyval.exp).valid = TRUE; }
#line 1734 "asin.c"
    break;

  case 63: /* constante: TRUE_  */
#line 440 "src/asin.y"
                         { (yyval.exp).v = TRUE;     (yyval.exp).t = T_LOGICO; (yyval.exp).valid = TRUE; }
#line 1740 "asin.c"
    break;

  case 64: /* constante: FALSE_  */
#line 441 "src/asin.y"
                         { (yyval.exp).v = FALSE;    (yyval.exp).t = T_LOGICO; (yyval.exp).valid = TRUE; }
#line 1746 "asin.c"
    break;

  case 65: /* operadorLogico: AND_  */
#line 444 "src/asin.y"
                      { (yyval.cent) = OP_AND; }
#line 1752 "asin.c"
    break;

  case 66: /* operadorLogico: OR_  */
#line 445 "src/asin.y"
                      { (yyval.cent) = OP_OR; }
#line 1758 "asin.c"
    break;

  case 67: /* operadorIgualdad: IGUAL_  */
#line 448 "src/asin.y"
                          { (yyval.cent) = OP_IGUAL; }
#line 1764 "asin.c"
    break;

  case 68: /* operadorIgualdad: DISTINTO_  */
#line 449 "src/asin.y"
                            { (yyval.cent) = OP_NOTIGUAL; }
#line 1770 "asin.c"
    break;

  case 69: /* operadorRelacional: MAYORQ_  */
#line 452 "src/asin.y"
                             { (yyval.cent) = OP_MAYOR; }
#line 1776 "asin.c"
    break;

  case 70: /* operadorRelacional: MENORQ_  */
#line 453 "src/asin.y"
                          { (yyval.cent) = OP_MENOR; }
#line 1782 "asin.c"
    break;

  case 71: /* operadorRelacional: MAYORIG_  */
#line 454 "src/asin.y"
                           { (yyval.cent) = OP_MAYORIG; }
#line 1788 "asin.c"
    break;

  case 72: /* operadorRelacional: MENORIG_  */
#line 455 "src/asin.y"
                           { (yyval.cent) = OP_MENORIG; }
#line 1794 "asin.c"
    break;

  case 73: /* operadorAditivo: SUMA_  */
#line 458 "src/asin.y"
                        { (yyval.cent) = OP_SUMA;}
#line 1800 "asin.c"
    break;

  case 74: /* operadorAditivo: RESTA_  */
#line 459 "src/asin.y"
                         { (yyval.cent) = OP_RESTA;}
#line 1806 "asin.c"
    break;

  case 75: /* operadorMultiplicativo: MULTI_  */
#line 461 "src/asin.y"
                                { (yyval.cent) = OP_MULT; }
#line 1812 "asin.c"
    break;

  case 76: /* operadorMultiplicativo: DIV_  */
#line 462 "src/asin.y"
                       { (yyval.cent) = OP_DIV; }
#line 1818 "asin.c"
    break;

  case 77: /* operadorUnario: SUMA_  */
#line 465 "src/asin.y"
                       { (yyval.cent) = OP_MAS; }
#line 1824 "asin.c"
    break;

  case 78: /* operadorUnario: RESTA_  */
#line 466 "src/asin.y"
                         { (yyval.cent) = OP_MENOS; }
#line 1830 "asin.c"
    break;

  case 79: /* operadorUnario: NEGACION_  */
#line 467 "src/asin.y"
                            { (yyval.cent) = OP_NOT; }
#line 1836 "asin.c"
    break;

  case 80: /* operadorIncremento: INCREMENTO_  */
#line 470 "src/asin.y"
                                 { (yyval.cent) = OP_INC; }
#line 1842 "asin.c"
    break;

  case 81: /* operadorIncremento: DECREMENTO_  */
#line 471 "src/asin.y"
                              { (yyval.cent) = OP_DEC; }
#line 1848 "asin.c"
    break;


#line 1852 "asin.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

