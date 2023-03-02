/******************************************************************************
 * Programa ejemplo para el uso de los mutex de la librería
 * pthread. 
 * 
 * Programa con dos hilos que calculan las frecuencias de
 * los números (1 al 10) contenidos en un arreglo. Cada hilo trabaja sobre una 
 * parte del arreglo.
 * 
 * Elaboró: Elizabeth Pérez Cortés
 * 
*******************************************************************************/
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#define TAM 10

// Prototipos
void Frecuencia( void *ptr);

//Variables compartidas
struct lims { int ini, fin;}; 
struct lims limites[2] = {{0,4},{5,9}};
int nums[TAM] = {1,4,7,2,9,5,6,3,2,1};
int frec[TAM] = {0,0,0,0,0,0,0,0,0,0};
int total;

// Candado con los parámetros por defecto (abierto)
pthread_mutex_t mi_candado = PTHREAD_MUTEX_INITIALIZER; 

int main()
{ 
    int i;
    pthread_t hilo1, hilo2, hilo3;
    total = 0;
    
    pthread_create(&hilo1,NULL,(void *) &Frecuencia, (void *)&limites[0]);
	pthread_create(&hilo2,NULL,(void *) &Frecuencia, (void *)&limites[1]);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    printf("Hilo padre: las frecuencias son \n");
    for (i=0;i<TAM; i++)
        printf("[%d]:frec[%d]\n", i+1, frec[i]);

    // Se destruye el candado
    pthread_mutex_destroy(&mi_candado);
    return 0;
}


void Frecuencia(void *ptr){
	 
	int i,j,num,cont;
	
	struct lims *mis_limites = (struct lims *) ptr;

    //V1: el derecho de acceso se guarda toda la ejecución
    //pthread_mutex_lock(&mi_candado);

    for(num = 1; num<=10; num++){
        //V2: el derecho de acceso se guarda una iteración
        //pthread_mutex_lock(&mi_candado);
                cont = 0;
                for (j= (mis_limites->ini); j<= (mis_limites->fin); j++)
                    if (nums[j] == num)  
                        cont++;
                //V3.el derecho de acceso se guarda solo durante la escritura 
                //pthread_mutex_lock(&mi_candado);
                frec[num-1] += cont;
                //V3.Se libera el derecho de acceso
                //pthread_mutex_lock(&mi_candado);
        //V2: Se libera el derecho de acceso
        //pthread_mutex_lock(&mi_candado);
    }
    // V1. Se libera el derecho de acceso
    //pthread_mutex_unlock(&mi_candado);
	
	pthread_exit(0);
}
