#include <stdio.h>
/*
    ALGORITMO:
    1. El programa muestra una carátula
    2. El programa muestra una impresión de pantalla.
    3. Fin de programa
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 * Compilar: gcc hola.c -o hola.out
 * Ejecutar: ./hola.out
 */

//Caratula
void muestraCaratula(){
    printf("\t**************************************\n");
    printf("\t*   FUNDAMENTOS DE LA PROGRAMACION   *\n");
    printf("\t*   ALUMNO: Rubén Ramírez Cervantes  *\n");
    printf("\t*        MATRICULA: 2203007463       *\n");
    printf("\t*             PRINT HOLA             *\n");
    printf("\t**************************************\n");
}

//************************************************************

int main(){
	muestraCaratula();

    printf("");

	printf("Hi :)\n");
	return 0;
}


//(Anotar esto en un cuaderno. ¡RODRIGO!)

/*ESTRUCTURA DE UN FUNCION ES:
TIPO NOMBRE_DE_LA_FUNCIÓN(TIPO NOMBRE_ARGUMENTO, ...){}

ESTRUCTURA DE UN METODO ES:
void NOMBRE_DEL_METODO([TIPO NOMBRE_ARGUMENTO]*, ...){}

void
int
double
float
char
long
boolean
int
double*
float*
char*
long*
boolean*
*/
