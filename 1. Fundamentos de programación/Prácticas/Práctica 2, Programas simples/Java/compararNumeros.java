/*
    ALGORITMO:
    1. El programa muestra la carátula.
    2. El usuario ingresa 2 datos de tipo int.
    3. El programa compara 2 datos int ingresados por el usuario.
    4. El programa muestra Fin del programa.
    5. Fin del programa.
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: javac compararNumeros.java
 * Ejecutar: java compararNumeros
 */

//Clase compararNumeros
public class compararNumeros{

    //Función main()
	public static void main(String args[]){

        //Declaracion e importación.
        java.util.Scanner leerInt = new java.util.Scanner(System.in);

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
        System.out.println("");
        System.out.println("*** Fin del programa. ***");
        System.out.println("");
    }//Fin método finPrograma()
}//Fin Clase compararNumeros{}