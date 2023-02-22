/*
    ALGORITMO:
    1. El programa muestra la carátula.
    2. El programa cra un
    2. El programa genera un arreglo global de números aleatorios enteros.
    6. El programa compara todos los número enteros.
    7. El programa muestra si los números son pares o impares.
    8. El programa muestra Fin del programa.
    9. Fin del programa.
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: gcc practica2Parte1.c -o practica2Parte1.out
 * Ejecutar: ./practica2Parte1.out
 */

//Importaciones
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int main(){
    muestraCaratula();

    finPrograma();
    return 0;
}//Fin Método ParteII_Seleccion_Compara_Numeros{}

//Método Carátula.
static void muestraCaratula(){
    printf("\t**************************************\n");
    printf("\t*      PROGRAMACION CONCURRENTE      *\n");
    printf("\t*   ALUMNO: Rubén Ramírez Cervantes  *\n");
    printf("\t*        MATRICULA: 2203007463       *\n");
    printf("\t*              MATRIZ                *\n");
    printf("\t**************************************\n");
}//Fin método muestraCaratula()

//Método Fin del programa.
static void finPrograma(){
    printf("\n\n*** Fin del programa. ***\n");
}//Fin método finPrograma()