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
 *
 * Compilar: gcc ‐o hola hola.c
 * Ejecutar: ./hola

 * Compilar: gcc hola.c -o hola.out
 * Ejecutar: ./hola.out
 */



/*
	La intentación esta muy bien!
	-----------------------------
	The indentation is nice!
*/


    /*
        Aquí hay un error grave. Investigar los métodos y funciones en C.
        ------------------------------------------------------   :3
        Here there are a serious mistake. Investigate methods and functions in C.
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

	printf("Hi :)\n");
	return 0;
}




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
