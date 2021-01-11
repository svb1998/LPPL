/*****************************************************************************/
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0
#define TALLA_TIPO_SIMPLE 1
#define TALLA_SEGENLACES 2
#define GLOBAL 0

/****************************************************** Constantes operadores */

/* Operador Asignacion */
#define OP_ASIG       0
#define OP_ASIG_SUMA  1
#define OP_ASIG_RESTA 2
#define OP_ASIG_MULT  3
#define OP_ASIG_DIV   4
/* Operador Logico*/
#define OP_AND 0
#define OP_OR  1
/* Operador igualdad */
#define OP_IGUAL    0
#define OP_NOTIGUAL 1
/* Operador relacional */
#define OP_MAYOR   0
#define OP_MAYORIG 1
#define OP_MENOR   2
#define OP_MENORIG 3
/* Operador aditivo */
#define OP_SUMA  0
#define OP_RESTA 1
/* Operador multiplicativo */
#define OP_MULT 0
#define OP_DIV  1
#define OP_MOD  2
/* Operador unario */
#define OP_MAS   0
#define OP_MENOS 1
#define OP_NOT   2
/* Operador incremento */
#define OP_INC 0
#define OP_DEC 1


/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;
extern int   yylineno;
/********************************* Funciones y variables externas auxiliares */
extern int verbosidad;                   /* Flag si se desea una traza       */

extern void yyerror(const char * msg) ;      /* Tratamiento de errores       */

/********************************* Variables externas en Proprama Principal  */
extern int verTdS; 

/***************************** Variables externas definidas en las librer´ıas */
extern int dvar; /* Desplazamiento en el Segmento de Variables */
extern int niv; /* Nivel de anidamiento "global" o "local" */

int oldvar; //Se usa para guardar el desplazamiento local a cada parte del codigo
int dpar; //Se usa para gestionar el desplazamiento de los parametros
int haymain; //Se usa para gestionar que exista un main y solo uno

/************************************************ Struct para las expresions */
typedef struct exp {
    int v;
    int t;
    int valid;
} EXP;
typedef struct param {
    int ref;
    int t;
} PARAM;
typedef struct aux {
    int t;
    int ref;
    char* id;
} AUX;

#endif  /* _HEADER_H */
/*****************************************************************************/
/*****************************************************************************/
