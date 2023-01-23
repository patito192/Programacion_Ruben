/*
    ALGORITMO:
    1. El programa muestra una impresión de pantalla.
    2. Fin de programa
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

#include <stdio.h>

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
    struct muestraCaratula{
        printf("\t**************************************");
        printf("\t*   FUNDAMENTOS DE LA PROGRAMACION   *");
        printf("\t*   ALUMNO: Rubén Ramírez Cervantes  *");
        printf("\t*        MATRICULA: 2203007463       *");
        printf("\t*             PRINT HOLA             *");
        printf("\t**************************************\n")
    }
//************************************************************

int main(){
	muestraCaratula();

	printf("Hi :)\n");
	return 0;
}
