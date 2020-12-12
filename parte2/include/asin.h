/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
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
    CTE_ = 258,                    /* CTE_  */
    SUMA_ = 259,                   /* SUMA_  */
    RESTA_ = 260,                  /* RESTA_  */
    MULTI_ = 261,                  /* MULTI_  */
    DIV_ = 262,                    /* DIV_  */
    ASIGNA_ = 263,                 /* ASIGNA_  */
    MENORQ_ = 264,                 /* MENORQ_  */
    MAYORQ_ = 265,                 /* MAYORQ_  */
    MENORIG_ = 266,                /* MENORIG_  */
    MAYORIG_ = 267,                /* MAYORIG_  */
    IGUAL_ = 268,                  /* IGUAL_  */
    DISTINTO_ = 269,               /* DISTINTO_  */
    INCREMENTO_ = 270,             /* INCREMENTO_  */
    DECREMENTO_ = 271,             /* DECREMENTO_  */
    AND_ = 272,                    /* AND_  */
    OR_ = 273,                     /* OR_  */
    NEGACION_ = 274,               /* NEGACION_  */
    OPAR_ = 275,                   /* OPAR_  */
    CPAR_ = 276,                   /* CPAR_  */
    OCOR_ = 277,                   /* OCOR_  */
    CCOR_ = 278,                   /* CCOR_  */
    OLLAVE_ = 279,                 /* OLLAVE_  */
    CLLAVE_ = 280,                 /* CLLAVE_  */
    PUNTCOMA_ = 281,               /* PUNTCOMA_  */
    COMA_ = 282,                   /* COMA_  */
    INT_ = 283,                    /* INT_  */
    BOOL_ = 284,                   /* BOOL_  */
    TRUE_ = 285,                   /* TRUE_  */
    FALSE_ = 286,                  /* FALSE_  */
    IF_ = 287,                     /* IF_  */
    ELSE_ = 288,                   /* ELSE_  */
    FOR_ = 289,                    /* FOR_  */
    READ_ = 290,                   /* READ_  */
    PRINT_ = 291,                  /* PRINT_  */
    DO_ = 292,                     /* DO_  */
    WHILE_ = 293,                  /* WHILE_  */
    RETURN_ = 294,                 /* RETURN_  */
    ID_ = 295                      /* ID_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "src/asin.y"

	char* ident;
	int cent;
	EXP exp;

#line 110 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */
