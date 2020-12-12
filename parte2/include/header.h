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

/************************************************ Struct para las expresions */
typedef struct exp {
    int v;
    int t;
    int valid;
} EXP;

#endif  /* _HEADER_H */
/*****************************************************************************/
/*****************************************************************************/
