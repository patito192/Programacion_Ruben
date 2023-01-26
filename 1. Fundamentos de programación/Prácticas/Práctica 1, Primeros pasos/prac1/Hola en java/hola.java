/*
    ALGORITMO:
    1. Muestra una carátula
    2. El programa muestra una impresión de pantalla.
    3. Fin de programa
*/

/*
 * Rubén Ramírez Cervantes
 * 2203007463
 * bicinrubenbr@gmail.com
 *
 * Compilar: javac hola.java
 * Ejecutar: java hola
 */

public class hola{

	public static void main(String[] args) {
		muestraCaratula();
		System.out.println("Hi :)\n");

	}
    
	//Caratula
    public static void muestraCaratula(){
        System.out.println("\t**************************************");
        System.out.println("\t*   FUNDAMENTOS DE LA PROGRAMACION   *");
        System.out.println("\t*   ALUMNO: Rubén Ramírez Cervantes  *");
        System.out.println("\t*        MATRICULA: 2203007463       *");
        System.out.println("\t*             PRINT HOLA             *");
        System.out.println("\t**************************************\n");
    }
}