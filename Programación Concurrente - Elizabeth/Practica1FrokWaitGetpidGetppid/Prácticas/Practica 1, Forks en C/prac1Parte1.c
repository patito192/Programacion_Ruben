/*
2203007463
Rubén Ramírez Cervantes
bicinrubenbr@gmail.com

Algoritmo:
1-El programa muestra la fórmula cx^n !
2-el programa solicita el dato C al usuario
3-El usuario ingresa el dato C
4-el programa solicita el dato x al usuario
5-El usuario ingresa el dato x
6-el programa solicita el dato n al usuario
7-El usuario ingresa el dato n
8-Inicializar el resultado con X !
9-Crear un contador !
10-El programa crea un proceso !
11-El proceso padre se queda esperando !
12-El proceso hijo calcula x^2 y lo guarda en Resultado !
13-Se repite el paso 8 hasta que se cumpla el valor de n !
14-El programa multiplica el resultado por c

*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
//#include <sys/types.h>
//#include <math.h>
int main(int argc, char const *argv[]){
	//Declaraciones
	int coeficienteC=2, baseX=4, exponenteN=2, contador=0, resultado; //R 32
	pid_t pidHijo;

	resultado = baseX;

	pidHijo = fork();

	if (pidHijo != 0){
		wait();
	}
	else{
		resultado = pow(baseX, exponenteN);
		printf("tu resultado es: %d", resultado);
	}

	printf("Tu fórmula es: cx^n\n");

	printf("coeficiente: %d, base: %d, exponente: %d, contador: %d, resultado: %d", coeficienteC , baseX, exponenteN, contador, resultado);
	return 0;
}