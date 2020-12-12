/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2019-2020 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
%}


%union {
	char* ident;
	int cent;
}

%token CTE_ 
%token SUMA_ RESTA_ MULTI_ DIV_ 
%token ASIGNA_ MENORQ_ MAYORQ_ MENORIG_ MAYORIG_ IGUAL_ DISTINTO_
%token INCREMENTO_ DECREMENTO_
%token AND_ OR_ NEGACION_
%token OPAR_ CPAR_ OCOR_ CCOR_ OLLAVE_ CLLAVE_ 
%token PUNTCOMA_ COMA_
%token INT_ BOOL_ TRUE_ FALSE_
%token IF_ ELSE_ FOR_ READ_ PRINT_ DO_ WHILE_ RETURN_
%token ID_

%%

programa : listaDeclaraciones
	;
listaDeclaraciones : declaracion
		| listaDeclaraciones declaracion
		;

declaracion : declaracionVariable
		| declaracionFuncion
		;
declaracionVariable : tipoSimple ID_ PUNTCOMA_
		| tipoSimple ID_ OCOR_ CTE_ CCOR_ PUNTCOMA_
		;
tipoSimple : INT_ 
	| BOOL_
		;
declaracionFuncion : cabeceraFuncion bloque
		;
cabeceraFuncion : tipoSimple ID_ OPAR_ parametrosFormales CPAR_
		;
parametrosFormales : 
		| listaParametrosFormales
		; 

listaParametrosFormales : tipoSimple ID_
		| tipoSimple ID_ COMA_ listaParametrosFormales
		;
bloque	: OLLAVE_ declaracionVariableLocal listaInstrucciones RETURN_ expresion PUNTCOMA_ CLLAVE_
		;

declaracionVariableLocal : declaracionVariableLocal declaracionVariable
		|
		;

listaInstrucciones : listaInstrucciones instruccion
		|
		;

instruccion : OLLAVE_ listaInstrucciones CLLAVE_
		| instruccionAsignacion
		| instruccionSeleccion
		| instruccionEntradaSalida
		| instruccionIteracion
		;
instruccionAsignacion : ID_ ASIGNA_ expresion PUNTCOMA_
		| ID_ OCOR_ expresion CCOR_ ASIGNA_ expresion PUNTCOMA_
		;

instruccionEntradaSalida : READ_ OPAR_ ID_ CPAR_ PUNTCOMA_
		| PRINT_ OPAR_ expresion CPAR_ PUNTCOMA_
		;

instruccionSeleccion : IF_ OPAR_ expresion CPAR_ instruccion ELSE_ instruccion
		;

instruccionIteracion : FOR_ OPAR_ expresionOpcional PUNTCOMA_ expresion PUNTCOMA_ expresionOpcional CPAR_ instruccion
		;

expresionOpcional : expresion
		| ID_ ASIGNA_ expresion
		|
		;
expresion : expresionIgualdad
		| expresion operadorLogico expresionIgualdad
		;

expresionIgualdad : expresionRelacional
		| expresionIgualdad operadorIgualdad expresionRelacional
		;

expresionRelacional : expresionAditiva
		| expresionRelacional operadorRelacional expresionAditiva
		;

expresionAditiva : expresionMultiplicativa
		| expresionAditiva operadorAditivo expresionMultiplicativa
		;

expresionMultiplicativa : expresionUnaria
		| expresionMultiplicativa operadorMultiplicativo expresionUnaria
		;

expresionUnaria : expresionSufija
		| operadorUnario expresionUnaria
		| operadorIncremento ID_
		;

expresionSufija : OPAR_ expresion CPAR_
		| ID_ operadorIncremento
		| ID_ OCOR_ expresion CCOR_
		| ID_ OPAR_ parametrosActuales CPAR_
		| ID_
		| constante
		;
parametrosActuales : listaParametrosActuales
		|
		;

listaParametrosActuales : expresion
		| expresion COMA_ listaParametrosActuales
		; 

constante : 	CTE_
		| TRUE_
		| FALSE_
		;

operadorLogico : AND_
		| OR_
		;

operadorIgualdad : IGUAL_
		| DISTINTO_
		;

operadorRelacional : MAYORQ_
		| MENORQ_
		| MAYORIG_
		| MENORIG_
		;

operadorAditivo : SUMA_
		| RESTA_
		;
operadorMultiplicativo : MULTI_
		| DIV_
		;

operadorUnario : SUMA_
		| RESTA_
		| NEGACION_
		;

operadorIncremento : INCREMENTO_
		| DECREMENTO_
		;
		
		
%%
/*****************************************************************************/
int verbosidad = FALSE;                  /* Flag si se desea una traza       */

/*****************************************************************************/
void yyerror(const char *msg)
/*  Tratamiento de errores.                                                  */
{ fprintf(stderr, "\nError en la linea %d: %s\n", yylineno, msg); }

/*****************************************************************************/
int main(int argc, char **argv) 
/* Gestiona la linea de comandos e invoca al analizador sintactico-semantico.*/
{ int i, n=1 ;

  for (i=1; i<argc; ++i)
    if (strcmp(argv[i], "-v")==0) { verbosidad = TRUE; n++; }
  if (argc == n+1)
    if ((yyin = fopen (argv[n], "r")) == NULL) {
      fprintf (stderr, "El fichero '%s' no es valido\n", argv[n]) ;     
      fprintf (stderr, "Uso: cmc [-v] fichero\n");
    } 
    else yyparse();
  else fprintf (stderr, "Uso: cmc [-v] fichero\n");

  return (0);
} 
/*****************************************************************************/
