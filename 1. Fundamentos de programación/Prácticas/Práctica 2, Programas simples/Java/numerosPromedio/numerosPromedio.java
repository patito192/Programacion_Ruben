/*
    ALGORITMO:
    1. El programa declara leerFloat como Scanner.
    2. El programa muestra la carátula.
    3. El usuario ingresa 2 datos de tipo int.
    4. El programa compara 2 datos int ingresados por el usuario.
    5. El programa muestra Fin del programa.
    6. Fin del programa.
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: javac numerosPromedio.java
 * Ejecutar: java numerosPromedio
 */

//Clase numerosPromedio
public class numerosPromedio{
	public static void main(String args[]){

		//Declaración e importación.
        java.util.Scanner leerFloat = new java.util.Scanner(System.in);
        float numeroIngresado = 0, contadorSuma = 0, contadorPromedio = 0;
        int numeroNumeros;

        //Se muestra Carátula.
        muestraCaratula();

        System.out.println("Si deseas finalizar escribe 0\n");

        do{
        	//Se ingresa el número
        	System.out.print("Dime un número: ");
        	numeroIngresado = leerFloat.nextInt();

        	//Contador para la suma de los números ingresados
        	contadorSuma = contadorSuma + numeroIngresado;

        	//Contador para saber el número total de números ingresados
        	contadorPromedio = contadorPromedio + 1;
        }while (numeroIngresado != 0);

        //Sustractor para quitar el último número 0 ingresado
		contadorPromedio = contadorPromedio - 1;

		numeroNumeros = Math.round(contadorPromedio);

		//Se calcula el promedio
		System.out.println("\nEl promedio de tus " + numeroNumeros + " números ingresados es: " + (contadorSuma / contadorPromedio));

		//Se muestra Fin del programa.
        finPrograma();
    }//Fin función main()

    //Método Carátula.
    public static void muestraCaratula(){
        System.out.println("\t**************************************");
        System.out.println("\t*   FUNDAMENTOS DE LA PROGRAMACION   *");
        System.out.println("\t*   ALUMNO: Rubén Ramírez Cervantes  *");
        System.out.println("\t*        MATRICULA: 2203007463       *");
        System.out.println("\t*          NÚMEROS PROMEDIO          *");
        System.out.println("\t**************************************\n");
    }//Fin método muestraCaratula()

    //Método Fin del programa.
    public static void finPrograma(){
        System.out.println("\n\n*** Fin del programa. ***\n");
    }//Fin método finPrograma()
}//Fin Clase compararNumeros{}