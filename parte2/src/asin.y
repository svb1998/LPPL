/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2019-2020 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
%}


%union {
	char* ident;
	int cent;
	EXP exp;
}

%token <cent> CTE_ 
%token SUMA_ RESTA_ MULTI_ DIV_ 
%token ASIGNA_ MENORQ_ MAYORQ_ MENORIG_ MAYORIG_ IGUAL_ DISTINTO_
%token INCREMENTO_ DECREMENTO_
%token AND_ OR_ NEGACION_
%token OPAR_ CPAR_ OCOR_ CCOR_ OLLAVE_ CLLAVE_ 
%token PUNTCOMA_ COMA_
%token INT_ BOOL_ 
%token TRUE_ FALSE_
%token IF_ ELSE_ FOR_ READ_ PRINT_ DO_ WHILE_ RETURN_
%token <ident> ID_



%type <cent> tipoSimple
%type <cent> operadorLogico operadorIgualdad operadorRelacional

%type <exp> expresion expresionIgualdad expresionAditiva listaDeclaraciones declaracion

%%

programa : { niv = GLOBAL; dvar = 0; cargaContexto(niv); }
	listaDeclaraciones
	{
		if( $2.v == 0 ) yyerror("El programa no tiene main"); 
	}
	;
listaDeclaraciones :
		  declaracion {$$ = $1;}
		| listaDeclaraciones declaracion
		;

declaracion : declaracionVariable
		| declaracionFuncion
		;
declaracionVariable 
		: tipoSimple ID_ PUNTCOMA_
			{
				if(!insTdS($2, VARIABLE, T_ENTERO, niv, dvar, -1)) 
					yyerror("Identificador repetido");
				else dvar += TALLA_TIPO_SIMPLE;
			}

		| tipoSimple ID_ OCOR_ CTE_ CCOR_ PUNTCOMA_
			{
				int numelem = $4;
				if($4 <= 0) {
					yyerror("Talla inapropiada del array");
					numelem = 0;
				}

				int ref = insTdA($1, numelem);
				if( !insTdS($2, VARIABLE, T_ARRAY, niv, dvar, ref) ) 
					yyerror("Identificador repetido");
				else dvar += numelem * TALLA_TIPO_SIMPLE;
			}
		;
tipoSimple : INT_
	| BOOL_
		;
declaracionFuncion : 
			cabeceraFuncion 
			{
				$<cent>$ = dvar; 
				dvar = 0;
			}
			bloque
			{ 
				descargaContexto(niv); 
				niv = GLOBAL;
				dvar = $<cent>2;
			}
		;
cabeceraFuncion : 
			tipoSimple ID_ 
			{ niv++; cargaContexto(niv); } 
			OPAR_ parametrosFormales CPAR_
		;
parametrosFormales : 
		| listaParametrosFormales
		; 

listaParametrosFormales : 
		  tipoSimple ID_ 
		  {
			  int dominio = insTdD(-1, $1);
		  }
		| tipoSimple ID_ COMA_ listaParametrosFormales 
		  {

		  }
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
			{
				SIMB sim = obtTdS($1);

				if( sim.t = T_ERROR) yyerror("Objeto no declarado");
				else if( ! (( sim.t == $3.t == T_ENTERO || 
							  sim.t == $3.t == T_LOGICO )) )
					yyerror("Error en la instruccion de asignacion"); 

				else {
					
				}

			}
		| ID_ OCOR_ expresion CCOR_ ASIGNA_ expresion PUNTCOMA_
		   {
				SIMB sim = obtTdS($1);
				if( sim.t = T_ERROR) yyerror("Objeto no declarado");
				else if(!sim.t == $3.t == T_ARRAY ) 
					yyerror("El identificador debe ser de tipo 'array'");
				else if(!$6.t == T_ENTERO)
					yyerror("El indice del 'array' debe ser entero");
				else {

				} 

		   }
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
		