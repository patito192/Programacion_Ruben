// https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C%2B%2B/Lo_m%C3%A1s_b%C3%A1sico

/*
    ALGORITMO:
    1. El programa muestra una carátula
    2. El programa muestra una impresión de pantalla.
    3. Fin de Programa
*/

#include <iostream>

void muestraCaratula(){
    std::cout << "\t**************************************" << std::endl;
    std::cout << "\t*   FUNDAMENTOS DE LA PROGRAMACION   *" << std::endl;
    std::cout << "\t*   ALUMNO: Rubén Ramírez Cervantes  *" << std::endl;
    std::cout << "\t*        MATRICULA: 2203007463       *" << std::endl;
    std::cout << "\t*             PRINT HOLA             *" << std::endl;
    std::cout << "\t**************************************\n" << std::endl;
}

int main(int argc, char **argv){
    muestraCaratula();

    std::cout << "Hola Mundo" << std::endl;

    return 0;
}