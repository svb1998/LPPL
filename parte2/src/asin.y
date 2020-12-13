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
%token <cent> INT_ BOOL_ 
%token TRUE_ FALSE_
%token IF_ ELSE_ FOR_ READ_ PRINT_ DO_ WHILE_ RETURN_
%token <ident> ID_



%type <cent> tipoSimple 
%type <cent> operadorLogico operadorIgualdad operadorRelacional operadorIncremento
%type <cent> operadorAditivo operadorMultiplicativo operadorUnario


%type <exp> expresion expresionIgualdad expresionAditiva listaDeclaraciones declaracion constante
%type <exp> expresionRelacional expresionMultiplicativa expresionUnaria expresionSufija
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
declaracionVariable : tipoSimple ID_ PUNTCOMA_
			{
				if(!insTdS($2, VARIABLE, $1, niv, dvar, -1)) 
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
tipoSimple : INT_ { $$ = T_ENTERO; }
	| BOOL_ { $$ = T_LOGICO; }
		;
declaracionFuncion : 
			cabeceraFuncion 
			
			bloque
			
		;
cabeceraFuncion : 
			tipoSimple ID_ 
			OPAR_ parametrosFormales CPAR_
		;
parametrosFormales : 
		| listaParametrosFormales
		; 

listaParametrosFormales : 
		  tipoSimple ID_ 
		  
		| tipoSimple ID_ COMA_ listaParametrosFormales 
		  
		;
bloque : OLLAVE_ declaracionVariableLocal listaInstrucciones RETURN_ expresion PUNTCOMA_ CLLAVE_
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

				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if( ! (( sim.t == $3.t == T_ENTERO || 
							  sim.t == $3.t == T_LOGICO )) )
					yyerror("Error de tipos en la 'asignacion'"); 

			}
		| ID_ OCOR_ expresion CCOR_ ASIGNA_ expresion PUNTCOMA_
		   {
				SIMB sim = obtTdS($1);

				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if(sim.t != T_ARRAY ) 
					yyerror("El identificador debe ser de tipo 'array'");
				else if($3.t != T_ENTERO)
					yyerror("El indice del 'array' debe ser entero");
				else {
					DIM dim = obtTdA(sim.ref);
					if( ! (( dim.telem == $6.t == T_ENTERO || 
							  dim.telem == $6.t == T_LOGICO )) )
					yyerror("Error de tipos en la 'asignacion'");
				}
				 

		   }
		;

instruccionEntradaSalida : READ_ OPAR_ ID_ CPAR_ PUNTCOMA_
			{
				SIMB sim = obtTdS($3);
				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if ( sim.t != T_ENTERO)
					yyerror("El argumento del 'read' debe ser 'entero'");
			}

		| PRINT_ OPAR_ expresion CPAR_ PUNTCOMA_

			{
				if($3.t != T_ENTERO) {
					yyerror("La expresion del 'print' debe ser 'entera'");
				}
			}
		;

instruccionSeleccion : IF_ OPAR_ expresion CPAR_ instruccion ELSE_ instruccion
		;

instruccionIteracion : FOR_ OPAR_ expresionOpcional PUNTCOMA_ expresion PUNTCOMA_ expresionOpcional CPAR_ instruccion
		;

expresionOpcional : expresion
		| ID_ ASIGNA_ expresion
		|
		;
expresion : expresionIgualdad { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; }
		| expresion operadorLogico expresionIgualdad

			{
				$$.t = T_ERROR;

				if($1.t != T_ERROR && $3.t != T_ERROR) {
					if ($1.t != $3.t) {
						yyerror("Error en 'expresion logica'");
					} else if ($1.t != T_LOGICO) {
						yyerror("Operacion logica invalida para no booleanos");
					} else {
						$$.t = T_LOGICO;
						if ($1.valid == TRUE && $3.valid == TRUE) {
							if ($2 == OP_AND) {
								$$.v = FALSE;
								if ($1.v == TRUE)
									if ($3.v == TRUE)
										$$.v = TRUE;
							} else if ($2 == OP_OR) {
								$$.v = TRUE;
								if ($1.v == FALSE)
									if ($3.v == FALSE)
										$$.v = FALSE;
							}
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				}
			}

		;

expresionIgualdad : expresionRelacional { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; }
		| expresionIgualdad operadorIgualdad expresionRelacional
			{ 
				$$.t = T_ERROR;
				if ($1.t != T_ERROR && $3.t != T_ERROR) {
					if ($1.t != $3.t) {
						yyerror("Tipos no coinciden en operacion de igualdad");
					} else if ($1.t == T_ARRAY) {
						yyerror("Operacion de igualdad no existe para arrays");
					} else {
						$$.t = T_LOGICO;
						if ($1.valid == TRUE && $3.valid == TRUE) {
							if ($2 == OP_IGUAL)
								$$.v = $1.v == $3.v ? TRUE : FALSE;
							else if ($2 == OP_NOTIGUAL)
								$$.v = $1.v != $3.v ? TRUE : FALSE;
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				} 
			}
		;

expresionRelacional : expresionAditiva { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; }
		| expresionRelacional operadorRelacional expresionAditiva
			{ $$.t = T_ERROR;
				if ($1.t != T_ERROR && $3.t != T_ERROR) {
					if ($1.t != $3.t) {
						yyerror("Tipos no coinciden en operacion relacional");
					} else if ($1.t == T_LOGICO) {
						yyerror("Operacion relacional solo acepta argumentos enteros");
					} else {
						$$.t = T_LOGICO;
						if ($1.valid == TRUE && $3.valid == TRUE) {
							if ($2 == OP_MAYOR)
								$$.v = $1.v > $3.v ? TRUE : FALSE;
							else if ($2 == OP_MENOR)
								$$.v = $1.v < $3.v ? TRUE : FALSE;
							else if ($2 == OP_MAYORIG)
								$$.v = $1.v >= $3.v ? TRUE : FALSE;
							else if ($2 == OP_MENORIG)
								$$.v = $1.v <= $3.v ? TRUE : FALSE;
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				} 
			}
		;

expresionAditiva : expresionMultiplicativa { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; }
		| expresionAditiva operadorAditivo expresionMultiplicativa
			{ 
				$$.t = T_ERROR;
				if ($1.t != T_ERROR && $3.t != T_ERROR) {
					if ($1.t != $3.t) {
						yyerror("Tipos no coinciden en operacion aditiva");
					} else if ($1.t != T_ENTERO) {
						yyerror("Operacion aditiva solo acepta argumentos enteros");
					} else {
						$$.t = T_ENTERO;
						if ($1.valid == TRUE && $3.valid == TRUE) {
							if ($2 == OP_SUMA)
								$$.v = $1.v + $3.v;
							else if ($2 == OP_RESTA)
								$$.v = $1.v - $3.v;
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				} 
			}
		;

expresionMultiplicativa : expresionUnaria { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; }
		| expresionMultiplicativa operadorMultiplicativo expresionUnaria
			{ 
				$$.t = T_ERROR;
				if ($1.t != T_ERROR && $3.t != T_ERROR) {
					if ($1.t != $3.t) {
						yyerror("Tipos no coinciden en operacion multiplicativa");
					} else if ($1.t != T_ENTERO) {
						yyerror("Operacion multiplicativa solo acepta argumentos enteros");
					} else {
						$$.t = T_ENTERO;
						if ($1.valid == TRUE && $3.valid == TRUE) {
							if ($2 == OP_MULT)
								$$.v = $1.v * $3.v;
							else if ($2 == OP_DIV) {
								if ($3.v == 0) {
									$$.t = T_ERROR;
									yyerror("Division entre 0");
								} else {
									$$.v = $1.v / $3.v;
								}
							} else if ($2 == OP_MOD) {
								if ($3.v == 0) {
									$$.t = T_ERROR;
									yyerror("Modulo entre 0");
								} else {
									$$.v = $1.v % $3.v;
								}
							}
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				} 
			}
		;

expresionUnaria : expresionSufija { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; }
		| operadorUnario expresionUnaria
			{ 
				$$.t = T_ERROR;
				$$.valid = $2.valid;
				if ($2.t != T_ERROR) {
					if ($2.t == T_ENTERO) {
						if ($1 == OP_NOT) {
							yyerror("Operacion \"!\" invalida en expresion entera");
						} else if ($2.valid == TRUE) {
							$$.t = T_ENTERO;
							if ($1 == OP_MAS) {
								$$.v = $2.v;
							} else if ($1 == OP_MENOS) {
								$$.v = - $2.v;
							}
						}
					} else if ($2.t == T_LOGICO) {
						if ($1 == OP_NOT) {
							$$.t = T_LOGICO;
							if ($2.valid == TRUE) {
								if ($2.v == TRUE)
									$$.v = FALSE;
								else
									$$.v = TRUE;
							}
						} else {
							yyerror("Operacion entera invalida en expresion logica");
						}
					}
				} 
			}
		| operadorIncremento ID_
			{ 
				SIMB simb = obtTdS($2);

				$$.t = T_ERROR;
				if (simb.t == T_ERROR)
					yyerror("Objeto no declarado");
				else if (simb.t == T_ARRAY)
					yyerror("El array solo puede ser accedido con indices");
				else
					$$.t = simb.t;
				$$.valid = FALSE; 
			}
		;

expresionSufija : OPAR_ expresion CPAR_ { $$.t = $2.t; $$.v = $2.v; $$.valid = $2.valid; }
		| ID_ operadorIncremento
			{
				SIMB sim = obtTdS($1);
				if(sim.t != T_ENTERO) 
					yyerror("El identificador debe ser entero");
			}
		| ID_ OCOR_ expresion CCOR_
			{ 
				SIMB simb = obtTdS($1);
				$$.t = T_ERROR;
				$$.valid = FALSE;
				if (simb.t == T_ERROR)
					yyerror("Objeto no declarado");
				else if (simb.t != T_ARRAY)
					yyerror("La variable no es un array, no puede ser accedida con indices");
				else {
					DIM dim = obtTdA(simb.ref);
					if ($3.valid == TRUE && ($3.v < 0 || $3.v >= dim.nelem))
						yyerror("Indice no valido");
					else
						$$.t = dim.telem;
				} 
			}
		| ID_ OPAR_ parametrosActuales CPAR_
		| ID_ 
		  	{ 	
				  	SIMB simb = obtTdS($1);
					$$.t = T_ERROR;
					$$.valid = FALSE;
					if (simb.t == T_ERROR)
						yyerror("Objeto no declarado");
					else if (simb.t == T_ARRAY)
						yyerror("El array solo puede ser accedido con indices");
					else
						$$.t = simb.t; 
			}
		| constante
		;
parametrosActuales : listaParametrosActuales
		|
		;

listaParametrosActuales : expresion
		| expresion COMA_ listaParametrosActuales
		; 

constante : CTE_ { $$.v = $<cent>1; $$.t = T_ENTERO; $$.valid = TRUE; }
		| TRUE_  { $$.v = TRUE;     $$.t = T_LOGICO; $$.valid = TRUE; }
		| FALSE_ { $$.v = FALSE;    $$.t = T_LOGICO; $$.valid = TRUE; }
		;

operadorLogico : AND_ { $$ = OP_AND; }
		| OR_ { $$ = OP_OR; }
		;

operadorIgualdad : IGUAL_ { $$ = OP_IGUAL; }
		| DISTINTO_ { $$ = OP_NOTIGUAL; }
		;

operadorRelacional : MAYORQ_ { $$ = OP_MAYOR; }
		| MENORQ_ { $$ = OP_MENOR; }
		| MAYORIG_ { $$ = OP_MAYORIG; }
		| MENORIG_ { $$ = OP_MENORIG; }
		;

operadorAditivo : SUMA_ { $$ = OP_SUMA;}
		| RESTA_ { $$ = OP_RESTA;}
		;
operadorMultiplicativo : MULTI_ { $$ = OP_MULT; }
		| DIV_ { $$ = OP_DIV; }
		;

operadorUnario : SUMA_ { $$ = OP_MAS; }
		| RESTA_ { $$ = OP_MENOS; }
		| NEGACION_ { $$ = OP_NOT; }
		;

operadorIncremento : INCREMENTO_ { $$ = OP_INC; }
		| DECREMENTO_ { $$ = OP_DEC; }
		;
		