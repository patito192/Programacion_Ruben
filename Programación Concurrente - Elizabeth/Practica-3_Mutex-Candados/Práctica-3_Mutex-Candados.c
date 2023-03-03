
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define HILOS 5
#define ITERACIONES 3

pthread_mutex_t mi_candado = PTHREAD_MUTEX_INITIALIZER; 

void EscribeLiderSeguidor( void *ptr);
 /* VARIABLE COMPARTIDA */

int main()
{ 
    int i, ids[HILOS];
    pthread_t hilos[HILOS];
    
   	     	

    for(i = 0; i < HILOS; i++){
        ids[i] = i;
    	pthread_create(&hilos[i],NULL,(void *) &EscribeLiderSeguidor, (void *)(intptr_t)ids[i]);
    }

    for(i = 0;i < HILOS; i++){
	    pthread_join(hilos[i], NULL);
    }	
    
    printf("Hilo padre: todos han terminado\n");
    pthread_mutex_destroy(&mi_candado);
}


void EscribeLiderSeguidor(void *ptr){
	 
	int j, numHilo = (intptr_t) ptr;
	
	for(j=0; j<ITERACIONES; j++){

		/* ADQUIERE DERECHO DE ACCESO A LA PANTALLA */
		pthread_mutex_lock(&mi_candado);
		
		switch(j){
		  case 0: printf("%d: Hola!!!\n",numHilo);
			  break;
  		  case 1: printf("%d: Estoy feliz\n",numHilo);
			  break;
  		  default: printf("%d: Nos vemos pronto!!!\n",numHilo);
		}
		
		/* LIBERA EL DERECHO DE ACCESO A LA PANTALLA CEDIENDOLO AL SIGUIENTE HILO*/
    	 pthread_mutex_unlock(&mi_candado);
	}
	pthread_exit(0);
}
