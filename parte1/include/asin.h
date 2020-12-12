/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */
