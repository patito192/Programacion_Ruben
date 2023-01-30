/* [Felicidades, está muy bien comentado el código, muy bien estructurado,
 los nombres de las variables son explicativas y se inicializan al principio del programa
 y el programa tiene la función de terminar hasta que el usuario escribe un cero,
 me parece un excelente criterio de paro.
 Gracias, me has estado ayudando mucho. :3

 Si acaso sería cambiar el nombre del archivo y ponerle un identificador con base al pdf, p.e:
 ParteIII_Ciclos_Numeros_Promedio.java

 ¡RODRIGO!]
*/

/*
    ALGORITMO: [Already] [Ok]
    1. El programa muestra la carátula.
    2. El programa muestra un mensaje al usuario que explica como finalizar el programa.
    3. El programa solicita un número flotante al usuario.
    4. El programa lee un número flotante.
    5. El programa verifica si el número ingresado es el criterio de paro:
        5.1 En caso de que NO sea cero, acumula la suma del número ingresado e incrementa la cantidad
        de números que han sido ingresados, después se regresa al paso 3.
        5.2 En caso de que SI sea cero, continua al paso 6.
    6. El programa calcula la suma de los números ingresados.
    7. El programa le substrae 1 a contadorPromedio para quitar el último 0 ingresado.
    8. El programa convierte el número de datos ingresados a entero para mostrarlo sin decimal.
    9. El programa calcula el promedio de los datos ingresados por el usuario y muestra el resultado.
    10. El programa muestra Fin del programa.
    11. Fin del programa.
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: javac ParteIII_Ciclos_Numeros_Promedio.java
 * Ejecutar: java ParteIII_Ciclos_Numeros_Promedio
 */

//Clase ParteIII_Ciclos_Numeros_Promedio
public class ParteIII_Ciclos_Numeros_Promedio{
	public static void main(String args[]){
		//Declaración e importación.
        java.util.Scanner leerFloat = new java.util.Scanner(System.in);
        // [Esta es una forma de llamar al objeto Scanner y es válida ¡RODRIGO!]
        // La otra es utilizar: import java.util.Scanner;
        //Va, muchas gracias... :)

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
        	contadorPromedio ++;
        }while (numeroIngresado != 0);

        //Sustractor para quitar el último número 0 ingresado
		contadorPromedio --;

		//Se convierte el número de datos ingresados a entero para mostrarlo sin decimal
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
}//Fin Clase ParteIII_Ciclos_Numeros_Promedio{}