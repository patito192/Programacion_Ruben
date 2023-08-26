/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: gcc Examen 1-Ruben Ramirez Cervantes.c -o Examen 1-Ruben Ramirez Cervantes
 * Ejecutar: ./Examen 1-Ruben Ramirez Cervantes
 */

//Declaraciones e importaciones de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define NUM_RENOS 7

// Candado para proteger la variable contador_renos
pthread_mutex_t mutex;

// Semáforo para esperar a que todos los renos regresen
sem_t sem_renos;

// Contador para contar los renos que han regresado
int contador_renos = 0;

void* comportamiento_reno(void* arg) {
    int id_reno = *(int*)arg;

    // Tiempo de vacaciones aleatorio entre 1 y 10 segundos
    int tiempo_vacaciones = (rand() % 10) + 1;

    printf("El reno %d ha salido de vacaciones por %d segundos.\n", id_reno, tiempo_vacaciones);
    sleep(tiempo_vacaciones);

    // Bloquear el acceso al contador de renos
    pthread_mutex_lock(&mutex);

    // Incrementar el contador de renos que han regresado
    contador_renos++;
    if (contador_renos == NUM_RENOS) {
        printf("El último reno (%d) ha regresado y despierta a Santa.\n", id_reno);

        // Despertar a Santa
        sem_post(&sem_renos);
    }
    // Desbloquear el acceso al contador de renos
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

void* comportamiento_santa(void* arg) {
    // Esperar a que todos los renos regresen
    sem_wait(&sem_renos);

    printf("Santa ha sido despertado por el último reno. Repartiendo juguetes...\n");
    // Lógica de repartir juguetes

    pthread_exit(NULL);
}

int main() {
    srand(time(NULL));

    pthread_t renos[NUM_RENOS];
    pthread_t santa;

    pthread_mutex_init(&mutex, NULL);
    sem_init(&sem_renos, 0, 0);

    int id_renos[NUM_RENOS];
    for (int i = 0; i < NUM_RENOS; i++) {
        id_renos[i] = i + 1;
        pthread_create(&renos[i], NULL, comportamiento_reno, &id_renos[i]);
    }

    pthread_create(&santa, NULL, comportamiento_santa, NULL);

    for (int i = 0; i < NUM_RENOS; i++) {
        pthread_join(renos[i], NULL);
    }
    pthread_join(santa, NULL);

    pthread_mutex_destroy(&mutex);
    sem_destroy(&sem_renos);

    return 0;
}
