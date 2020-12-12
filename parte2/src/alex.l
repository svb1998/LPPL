/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2019-2020 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "asin.h"

#define  retornar(x) {if (verbosidad) ECHO; return x;}
%}
/*-----------------------------------------------------------------------------
  Estas opciones evitan "warnings" innecesarios y permiten obtener el
  numero de linea actual en la variable global "yylineno".
-----------------------------------------------------------------------------*/
%option noinput       
%option nounput       
%option yylineno  

delimitador     [ \t\v\f]+         
numero		[0-9]+("."[0-9]*)?|[0-9]*"."[0-9]+
id		[_a-zA-Z][_a-zA-Z0-9]*
comentario	\/\/.*\n
com_multi	\/\*.*\*\/


%%
"\n"		{ if (verbosidad) {ECHO; fprintf(stdout,"%3d.- ", yylineno);}}
{delimitador}  { if (verbosidad) ECHO; }
"+"            { retornar (SUMA_);   }
"-"            { retornar (RESTA_); }
"*"            { retornar (MULTI_);   }
"/"            { retornar (DIV_);   }
"("            { retornar (OPAR_);  }
")"            { retornar (CPAR_);   }
"="		{ retornar (ASIGNA_);   }
"<"		{ retornar (MENORQ_);   }
">"		{ retornar (MAYORQ_);   }
"<="		{ retornar (MENORIG_);   }
">="		{ retornar (MAYORIG_);   }
"=="		{ retornar (IGUAL_);   }
"!="		{ retornar (DISTINTO_);   }
"++"		{ retornar (INCREMENTO_);   }
"--"		{ retornar (DECREMENTO_);   }
"&&"		{ retornar (AND_);   }
"||"		{ retornar (OR_);   }
"!"		{ retornar (NEGACION_);   }
"["		{ retornar (OCOR_);   }
"]"		{ retornar (CCOR_);   }
"{"		{ retornar (OLLAVE_);   }
"}"		{ retornar (CLLAVE_);   }
";"		{ retornar (PUNTCOMA_);   }
","		{ retornar (COMA_);   }
int		{ retornar (INT_);   }
bool		{ retornar (BOOL_);   }
true		{ retornar (TRUE_);   }
false		{ retornar (FALSE_);   }
if		{ retornar (IF_);   }
else		{ retornar (ELSE_);   }
for		{ retornar (FOR_);   }
read		{ retornar (READ_);   }
print		{ retornar (PRINT_);   }
do		{ retornar (DO_);   }
while		{ retornar (WHILE_);   }
return		{ retornar (RETURN_);   }
{comentario}		{ if (verbosidad) ECHO; }
{com_multi}		{ if (verbosidad) ECHO; }
<<EOF>>	{if (verbosidad) {fprintf(stdout, "\n");}return 0;}


{numero}     { yylval.cent  = atoi(yytext);   retornar(CTE_); }
{id} { yylval.ident = strdup(yytext); retornar(ID_);  }

.              { yyerror("Caracter desconocido"); }

%%
