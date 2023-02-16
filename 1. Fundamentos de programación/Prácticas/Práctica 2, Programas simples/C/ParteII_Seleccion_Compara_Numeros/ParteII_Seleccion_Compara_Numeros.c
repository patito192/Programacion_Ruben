/*
    ALGORITMO:
    1. El programa muestra la carátula.
    2. El programa solicita al usuario escribir un número entero.
    3. El usuario ingresa un número entero.
    4. El programa solicita al usuario escribir otro número entero.
    5. El usuario ingresa un número entero.
    6. El programa compara ambos número enteros.
    7. El programa muestra si los números son iguales o si uno es mayor que otro.
    8. El programa muestra Fin del programa.
    9. Fin del programa. 
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: gcc ParteII_Seleccion_Compara_Numeros.c -o ParteII_Seleccion_Compara_Numeros.out
 * Ejecutar: ./ParteII_Seleccion_Compara_Numeros.out
 */

//Importaciones
#include <stdio.h>
//#include <iostream>
#include <stdlib.h>

//Método ParteII_Seleccion_Compara_Numeros
int main(){
	int numeroAIn, int numeroBIn;

	muestraCaratula();

	//Lectura de datos int
    printf("Ingresa tu primer número: ");
    scanf("%i", & numeroAIn);

    printf("\ntus numero son: %i", numeroAIn);

    //printf("Ingresa tu segundo número: ");
    //scanf("%i", & numeroBIn);

    /*/Comparaciones de los datos ingresados
    if (numeroAIn == numeroBIn) {
        printf("El primer número y el segundo número son iguales: " + numeroAIn + " = " + numeroBIn);
    }

    else if(numeroAIn > numeroBIn){
        printf("El número " + numeroAIn + " es mayor que " + numeroBIn);
    }

    else{
        printf("El número " + numeroBIn + " es mayor que " + numeroAIn);
    }*/

    //Se muestra Fin del programa.
    finPrograma();

	return 0;
}//Fin Método ParteII_Seleccion_Compara_Numeros{}

//Método Carátula.
static void muestraCaratula(){
    printf("\t**************************************\n");
    printf("\t*   FUNDAMENTOS DE LA PROGRAMACION   *\n");
    printf("\t*   ALUMNO: Rubén Ramírez Cervantes  *\n");
    printf("\t*        MATRICULA: 2203007463       *\n");
    printf("\t*          COMPARAR NUMEROS          *\n");
    printf("\t**************************************\n");
}//Fin método muestraCaratula()

//Método Fin del programa.
static void finPrograma(){
    printf("\n\n*** Fin del programa. ***\n");
}//Fin método finPrograma()

//INVESTIGAR POR QUÉ NO FUNCIONA
    //scanf("%d", numeroAIn);
    //printf("%d", numeroAIn);