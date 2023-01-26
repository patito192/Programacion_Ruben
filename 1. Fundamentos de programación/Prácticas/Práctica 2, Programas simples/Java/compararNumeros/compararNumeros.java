/* [Felicidades, está muy bien comentado el código, muy bien estructurado,
 los nombres de las variables son explicativas y el programa corre conforme a lo esperado.
 
 Si acaso sería cambiar el nombre del archivo y ponerle un identificador con base al pdf, p.e:
    ParteII_Seleccion_Compara_Numeros.java
 ¡RODRIGO!]
 */



/*
    ALGORITMO:
    1. El programa declara leerInt como Scanner.
    2. El programa muestra la carátula.
    3. El usuario ingresa 2 datos de tipo int.
    4. El programa compara 2 datos int ingresados por el usuario.
    5. El programa muestra Fin del programa.
    6. Fin del programa. 

    [Tienes la idea, solo falta desglosar paso por paso y no usar palabras que se
    utilizan en la escritura del código como Int o Scanner. ¡RODRIGO!]
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
 * Compilar: javac compararNumeros.java
 * Ejecutar: java compararNumeros [OK]
 */

//Clase compararNumeros
public class compararNumeros{

    //Función main()
	public static void main(String args[]){

        //Declaración e importación.
        java.util.Scanner leerInt = new java.util.Scanner(System.in); 
        // [Esta es una forma de llamar al objeto Scanner y es válida ¡RODRIGO!]
        // La otra es utilizar: import java.util.Scanner;


        //Se muestra Carátula.
        muestraCaratula();

        //Lectura de datos int
        System.out.println("Ingresa tu primer número:");
        int numeroAIn = leerInt.nextInt();

        System.out.println("Ingresa tu segundo número:");
        int numeroBIn = leerInt.nextInt();

        //Comparaciones de los datos ingresados
        if (numeroAIn == numeroBIn) {
            System.out.println("El primer número y el segundo número son iguales: " + numeroAIn + " = " + numeroBIn);
        }

        else if(numeroAIn > numeroBIn){
            System.out.println("El número " + numeroAIn + " es mayor que " + numeroBIn);
        }

        else{
            System.out.println("El número " + numeroBIn + " es mayor que " + numeroAIn);
        }

        //Se muestra Fin del programa.
        finPrograma();
    }//Fin función main()

    //Método Carátula.
    public static void muestraCaratula(){
        System.out.println("\t**************************************");
        System.out.println("\t*   FUNDAMENTOS DE LA PROGRAMACION   *");
        System.out.println("\t*   ALUMNO: Rubén Ramírez Cervantes  *");
        System.out.println("\t*        MATRICULA: 2203007463       *");
        System.out.println("\t*          COMPARAR NUMEROS          *");
        System.out.println("\t**************************************\n");
    }//Fin método muestraCaratula()

    //Método Fin del programa.
    public static void finPrograma(){
        System.out.println("\n\n*** Fin del programa. ***\n");
    }//Fin método finPrograma()
}//Fin Clase compararNumeros{}