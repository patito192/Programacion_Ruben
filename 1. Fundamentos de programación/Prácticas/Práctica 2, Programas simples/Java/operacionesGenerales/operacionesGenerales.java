/*
    ALGORITMO:
    1. El programa declara variables.
    2. El programa muestra la carátula.
    3. El programa lee datos de tipo flotante
    4. El usuario ingresa los datos deseados de tipo float.
    5. El programa calcula la suma de los números ingresados.
    6. El programa guarda los datos ingresados en Contador para saber el número total de números ingresados.
    7. El programa le substrae 1 a contadorPromedio para quitar el último 0 ingresado.
    8. El programa convierte el número de datos ingresados a entero para mostrarlo sin decimal.
    9. El programa calcula el promedio de los datos ingresados por el usuario.
    10. El programa muestra Fin del programa.
    11. Fin del programa.
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: javac operacionesGenerales.java
 * Ejecutar: java operacionesGenerales
 */

//Clase operacionesGenerales
public class operacionesGenerales{
	public static void main(String args[]){
		//Declaración e importación.
        java.util.Scanner leerFloat = new java.util.Scanner(System.in);
        float gradosFahrenheit = 0, distancia = 0, tiempo = 0, numeros = 0; 
        double radio = 0;

        //Se muestra Carátula.
        muestraCaratula();

        //Se lee y se calcula Fahrenheit a grados Celsius
        System.out.println("Ingresa tus Fahrenheit, para convertirlos a grados Celsius:");
        gradosFahrenheit = leerFloat.nextInt();

        System.out.println("\nTus Fahrenheit a grados Celsius son: " + ((gradosFahrenheit-32)*5/9) + "°" + "C\n");

        //Se lee y se calcula la velocidad de un objeto en km
        System.out.print("Para calcular la velocidad de tu objeto, ingresa la distancia en Kilómetros que recorrió: ");
        distancia = leerFloat.nextInt();

        System.out.print("Ahora ingresa el tiempo en Horas que tardó en recorrerla: ");
        tiempo = leerFloat.nextInt();

        System.out.println("\nLa velocidad de tu objeto es de: " + (distancia/tiempo) + " km/h\n");

        //Se lee y se calcula el área de un círculo en metros
        System.out.println("Ingresa tu radio para calcular el área de un círculo en Metros:");
        radio = leerFloat.nextInt();
        radio = Math.pow(radio, 2);

        System.out.println("\nEl área de tu círculo es de: " + (3.14159265359 * radio) + "m\n");

        //Se lee y se 
        System.out.println("Si deseas finalizar escribe 0\n");

        //Se ingresa el número por el usuario y se compara si el número es par o impar
        do{
        	//
        	System.out.print("Dime un número: ");
        	numero = leerFloat.nextInt();

        	//Contador para la suma de los números ingresados
        	contadorSuma = contadorSuma + numeroIngresado;

        	//Contador para saber el número total de números ingresados
        	contadorPromedio = contadorPromedio + 1;
        }while (numeroIngresado != 0);

        //Sustractor para quitar el último número 0 ingresado
		contadorPromedio = contadorPromedio - 1;

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
        System.out.println("\t*          OPERACIONES GENE          *");
        System.out.println("\t**************************************\n");
    }//Fin método muestraCaratula()

    //Método Fin del programa.
    public static void finPrograma(){
        System.out.println("\n\n*** Fin del programa. ***\n");
    }//Fin método finPrograma()
}//Fin Clase operacionesGenerales{}