/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2019-2020 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "libgci.h"
#include "header.h"
#include "libtds.h"


%}


%union {
	char* ident;
	int cent;
	EXP exp;
	int aux;
	PARAM param;

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


%type <ident> cabeceraFuncion
%type <cent> tipoSimple  parametrosFormales listaParametrosActuales parametrosActuales
%type <cent> operadorLogico operadorIgualdad operadorRelacional operadorIncremento
%type <cent> operadorAditivo operadorMultiplicativo operadorUnario

%type <aux> declaracionFuncion declaracionVariable

%type <param> listaParametrosFormales

%type <exp> expresion expresionIgualdad expresionAditiva listaDeclaraciones declaracion constante
%type <exp> expresionRelacional expresionMultiplicativa expresionUnaria expresionSufija instruccionAsignacion
%type <exp> instruccionEntradaSalida instruccionIteracion instruccionSeleccion 
%%

programa : { 
		niv = GLOBAL; 
		dvar = 0;
		cargaContexto(niv);
		haymain = 0;

		$<exp>$.instr1 = creaLans(si);
		emite(INCTOP,crArgNul(),crArgNul(),crArgNul());

		lansMain = creaLans(si);
		emite(GOTOS,crArgNul(),crArgNul(),crArgNul());
		

	 }
	listaDeclaraciones
	{
		if( haymain == 0 ) yyerror("El programa no tiene main"); 
		completaLans($<exp>1.instr1,crArgEnt(dvar));
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
			{
				emite(PUSHFP,crArgNul(),crArgNul(),crArgNul());
				emite(FPTOP,crArgNul(),crArgNul(),crArgNul());
				lansDespFunc = creaLans(si);
				emite(INCTOP,crArgNul(),crArgNul(),crArgNul());
			}
			bloque
			{ 
				completaLans(lansDespFunc,crArgEnt(dvar));
				emite(TOPFP,crArgNul(),crArgNul(),crArgNul());
				emite(FPPOP,crArgNul(),crArgNul(),crArgNul());

				if(lansReturn!=-1){
					completaLans(lansReturn,crArgEtq(si));
				}

				if(strcmp($1,"main")==0){
					emite(FIN,crArgNul(),crArgNul(),crArgNul());
				}
				else{
					emite(RET,crArgNul(),crArgNul(),crArgNul());

				}

				mostrarTdS();
				descargaContexto(niv); 
				niv--;
				//dvar = $<cent>2;
				dvar = oldvar;

			
			}

		;
cabeceraFuncion : 
			tipoSimple ID_ 
			{ 
				niv++ ; 
				cargaContexto(niv); 
				oldvar = dvar;
				dvar = 0;
				dpar = -TALLA_SEGENLACES;
				lansReturn = -1;
			} 
			OPAR_ parametrosFormales CPAR_
			{
				if(!insTdS($2, FUNCION, $1, niv-1, -1, $5)) {
					yyerror("Identificador de funcion repetido");
				}
				$$ = $2;
				if(strcmp("main",$2)==0){
					if(haymain ==0){
						haymain = 1;
						completaLans(lansMain,crArgEtq(si));
					}else{
					yyerror("Hay más de un main");
				}
				}
			}
		;
parametrosFormales : 
		{
			$$ = insTdD(-1,T_VACIO);
		}
		| listaParametrosFormales {$$ = $1.ref;}
		; 

listaParametrosFormales : 
		  	tipoSimple ID_ 
		  	{	
				
				  SIMB sim = obtTdS($2);
				  dpar = dpar + sim.d;

				if(!insTdS($2, PARAMETRO, $1, niv, dpar, -1)){
					yyerror("Parametro no valido");
				} else{
					$$.ref = insTdD(-1, $1);
				}
				
		  	}	  
		| tipoSimple ID_ COMA_ listaParametrosFormales 
		  	{
				SIMB sim = obtTdS($2);
				
				dpar = dpar + sim.d;

				if(!insTdS($2, PARAMETRO, $1, niv, dpar, $4.ref)){
					yyerror("Parametro no valido");}
				else{
					$$.ref = insTdD($4.ref,$1);
				}
				
			}
		;
bloque : OLLAVE_ declaracionVariableLocal listaInstrucciones RETURN_ expresion PUNTCOMA_ CLLAVE_
		{
			int lans = creaLans(si);
			if(lansReturn==-1){
				lansReturn = lans;
			} else {
				lansReturn = fusionaLans(lansReturn, lans);
			}
			emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
		}
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

			$$.d = creaVarTemp();
			
			
			emite(EASIG,crArgPos(niv,$3.d),crArgNul(),crArgPos(niv,$$.d));
			
			emite(EASIG, crArgPos(niv,$$.d), crArgNul(), crArgPos(niv,sim.d));

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
			
			$$.d = creaVarTemp();

            emite(EASIG,  crArgPos(niv,$6.d), crArgNul(), crArgPos(niv,$$.d));
			emite(EVA, crArgPos(niv,sim.d), crArgPos(niv,$3.d), crArgPos(niv,$$.d));


		   }
		;

instruccionEntradaSalida : READ_ OPAR_ ID_ CPAR_ PUNTCOMA_
			{
				SIMB sim = obtTdS($3);
				if( sim.t == T_ERROR) yyerror("Objeto no declarado");
				else if ( sim.t != T_ENTERO)
					yyerror("El argumento del 'read' debe ser 'entero'");

				TIPO_ARG read = crArgPos(sim.n,sim.d);
				emite(EREAD,crArgNul(),crArgNul(),read);

			}



		| PRINT_ OPAR_ expresion CPAR_ PUNTCOMA_

			{
				$$.t = T_ENTERO;

				if($3.t != T_ENTERO) {
					yyerror("La expresion del 'print' debe ser 'entera'");
				}
				emite(EWRITE,crArgNul(),crArgNul(),crArgPos(niv,$3.d));

			}
		;

instruccionSeleccion : IF_ OPAR_ expresion CPAR_ 
		{
			if($3.t != T_LOGICO){
				yyerror("La expresion del 'if' debe ser 'logica'");
			}
			$<exp>$.instr1 = creaLans(si);
			emite(EIGUAL,crArgPos(niv,$3.d),crArgEnt(0),crArgNul());			
		}
		instruccion
		{
			$<exp>$.instr2 = creaLans(si);
			emite(GOTOS, crArgNul(),crArgNul(),crArgNul());
			completaLans($<exp>5.instr1,crArgEtq(si));
		}
		ELSE_ instruccion
		{
			completaLans($<exp>7.instr2,crArgEtq(si));
		}
		;

instruccionIteracion : FOR_ OPAR_ expresionOpcional PUNTCOMA_
			{
				$<exp>$.instr1 = si;
			}
			expresion PUNTCOMA_
			{
				if($6.t != T_LOGICO) {
					yyerror("La expresion del 'for' debe ser 'logica'");
				}
				$<exp>6.instr1 = creaLans(si);

				emite(EIGUAL,crArgPos(niv,$6.d),crArgEnt(0),crArgNul());

				$<exp>6.instr2 = creaLans(si);
				emite(GOTOS, crArgNul(),crArgNul(),crArgNul());

				$<exp>$.instr2 = si;
			} 
			expresionOpcional CPAR_
			{
				$<exp>8.instr1 = si;
				emite(GOTOS,crArgNul(),crArgNul(),crArgEtq($<exp>5.instr1));
				completaLans($<exp>6.instr2, crArgEtq(si));
			}
			instruccion
			{
				 emite(GOTOS,crArgNul(),crArgNul(),crArgEtq($<exp>8.instr2));

				 completaLans($<exp>6.instr1,crArgEtq(si));
			}

		;

expresionOpcional : expresion
		| ID_ ASIGNA_ expresion
		|
		;
expresion : expresionIgualdad { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid;   $$.d = $1.d; }
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

				$$.d = creaVarTemp();
				if($2 == OP_AND){
					
					emite(EMULT,crArgPos(niv,$1.d),crArgPos(niv,$3.d),crArgPos(niv,$$.d)); 
				}
				else if($2 == OP_OR){
					
					emite(ESUM,crArgPos(niv,$1.d),crArgPos(niv,$3.d),crArgPos(niv,$$.d));
					emite(EMENEQ,crArgPos(niv,$$.d),crArgEnt(1),crArgEtq(si+2));
					emite(EASIG,crArgEnt(1),crArgNul(),crArgPos(niv,$$.d));
				}
				
			}

		;

expresionIgualdad : expresionRelacional { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid;  $$.d = $1.d;}
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
							if ($2 == EIGUAL)
								$$.v = $1.v == $3.v ? TRUE : FALSE;
							else if ($2 == EDIST)
								$$.v = $1.v != $3.v ? TRUE : FALSE;
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				}

			$$.d = creaVarTemp();
			emite(EASIG,crArgEnt(1),crArgNul(),crArgPos(niv,$$.d));
			emite($2,crArgPos(niv,$1.d),crArgPos(niv,$3.d),crArgEtq(si+2));
			emite(EASIG,crArgEnt(0),crArgNul(),crArgPos(niv,$$.d));
			}
		;

expresionRelacional : expresionAditiva { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid;   $$.d = $1.d; }
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
							if ($2 == EMAY)
								$$.v = $1.v > $3.v ? TRUE : FALSE;
							else if ($2 == EMEN)
								$$.v = $1.v < $3.v ? TRUE : FALSE;
							else if ($2 == EMAYEQ)
								$$.v = $1.v >= $3.v ? TRUE : FALSE;
							else if ($2 == EMENEQ)
								$$.v = $1.v <= $3.v ? TRUE : FALSE;
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				} 
			$$.d = creaVarTemp();
			emite(EASIG,crArgEnt(1),crArgNul(),crArgPos(niv,$$.d));
			emite($2,crArgPos(niv,$1.d),crArgPos(niv,$3.d),crArgEtq(si+2));
			emite(EASIG,crArgEnt(0),crArgNul(),crArgPos(niv,$$.d));

			}
		;

expresionAditiva : expresionMultiplicativa { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid;   $$.d = $1.d; }
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
							if ($2 == ESUM)
								$$.v = $1.v + $3.v;
							else if ($2 == EDIF)
								$$.v = $1.v - $3.v;
							$$.valid = TRUE;
						} else $$.valid = FALSE;
					}
				} 
			$$.d = creaVarTemp();
			emite($2, crArgPos(niv,$1.d),crArgPos(niv,$3.d),crArgPos(niv,$$.d));
			}
		;

expresionMultiplicativa : expresionUnaria { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid;   $$.d = $1.d; }
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
							if ($2 == EMULT)
								$$.v = $1.v * $3.v;
							else if ($2 == EDIVI) {
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
			$$.d = creaVarTemp();
			emite($2, crArgPos(niv,$1.d),crArgPos(niv,$3.d),crArgPos(niv,$$.d));
			}
		;

expresionUnaria : expresionSufija { $$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid;   $$.d = $1.d; }
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
							
							$$.d = creaVarTemp();
							emite(EASIG,crArgEnt(0),crArgNul(),crArgPos(niv,$$.d));
							emite(EDIST,crArgPos(niv,$2.d),crArgEnt(0),crArgEtq(si+2));
							emite(EASIG,crArgEnt(1),crArgNul(),crArgPos(niv,$$.d));
					 
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

				$$.d = creaVarTemp();
				TIPO_ARG value = crArgPos(simb.n,simb.d);
				emite($1,value,crArgEnt(1),crArgPos(niv,$$.d));
				emite(EASIG,crArgPos(niv,$$.d), crArgNul(),value);

			}

		;

expresionSufija : OPAR_ expresion CPAR_ { $$.t = $2.t; $$.v = $2.v; $$.valid = $2.valid; $$.d = $2.d;}
		| ID_ operadorIncremento
			{
				SIMB sim = obtTdS($1);
				if(sim.t != T_ENTERO) 
					yyerror("El identificador debe ser entero");
				
				$$.t = sim.t;
				$$.d = creaVarTemp();
				TIPO_ARG value = crArgPos(sim.n,sim.d);
				emite($2,value,crArgEnt(0),crArgPos(niv,$$.d));
				emite($2,value,crArgEnt(1),value);
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
				
				
				$$.d = creaVarTemp();
				emite(EAV, crArgPos(simb.n, simb.d), crArgPos(niv,$3.d), crArgPos(niv,$$.d));

			}
		| ID_ 
		{
			SIMB simb = obtTdS($1);

			if (simb.t == T_ERROR)
				yyerror("Función no declarada");
			$<cent>$ = creaVarTemp();
			emite(INCTOP,crArgNul(),crArgNul(),crArgEnt(simb.t));
		}
		OPAR_ parametrosActuales CPAR_
		{	
			SIMB simb = obtTdS($1);
			if(cmpDom(simb.ref,$4)==1){
				INF inf = obtTdD(simb.ref);
				$$.d = creaVarTemp();
				$$.t = simb.t;
				printf("%d, %d",simb.d, simb.t);
				emite(CALL,crArgNul(),crArgNul(),crArgEtq(simb.d));
				emite(DECTOP,crArgNul(),crArgNul(),crArgEnt(inf.tsp));
				emite(EPOP,crArgNul(),crArgNul(),crArgPos(niv,$$.d));
			}
		}
		
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
					
					$$.d = simb.d;
			}
		| constante {$$.t = $1.t; $$.v = $1.v; $$.valid = $1.valid; $$.d = $1.d;}
		;
parametrosActuales : 
listaParametrosActuales
		|{ $$ = insTdD(-1,T_VACIO);}
		;

listaParametrosActuales : expresion
		{
			$$ = insTdD(-1,$1.t);
			emite(EPUSH,crArgNul(),crArgNul(),crArgPos(niv,$1.d));
		}
		| expresion COMA_ listaParametrosActuales
		{
			$$ = insTdD($3,$1.t);
			emite(EPUSH,crArgNul(),crArgNul(),crArgPos(niv,$1.d));

		}
		; 

constante : CTE_ { $$.v = $<cent>1; $$.t = T_ENTERO;
					$$.valid = TRUE; $$.d = creaVarTemp();
					emite(EASIG,crArgEnt($$.v),crArgNul(),crArgPos(niv,$$.d));
					}
		| TRUE_  { $$.v = TRUE;     $$.t = T_LOGICO; $$.valid = TRUE; $$.d = creaVarTemp();
					emite(EASIG,crArgEnt($$.v),crArgNul(),crArgPos(niv,$$.d));
					}
		| FALSE_ { $$.v = FALSE;    $$.t = T_LOGICO; $$.valid = TRUE; $$.d = creaVarTemp();
					emite(EASIG,crArgEnt($$.v),crArgNul(),crArgPos(niv,$$.d));
					}
		;

operadorLogico : AND_ { $$ = OP_AND; }
		| OR_ { $$ = OP_OR; }
		;

operadorIgualdad : IGUAL_ { $$ = EIGUAL; }
		| DISTINTO_ { $$ = EDIST; }
		;

operadorRelacional : MAYORQ_ { $$ = EMAY; }
		| MENORQ_ { $$ = EMEN; }
		| MAYORIG_ { $$ = EMAYEQ; }
		| MENORIG_ { $$ = EMENEQ; }
		;

operadorAditivo : SUMA_ { $$ = ESUM;}
		| RESTA_ { $$ = EDIF;}
		;
operadorMultiplicativo : MULTI_ { $$ = EMULT; }
		| DIV_ { $$ = EDIVI; }
		;

operadorUnario : SUMA_ { $$ = OP_MAS; }
		| RESTA_ { $$ = OP_MENOS; }
		| NEGACION_ { $$ = OP_NOT; }
		;

operadorIncremento : INCREMENTO_ { $$ = ESUM; }
		| DECREMENTO_ { $$ = EDIF; }
		;
		