//************************************
// Rubén Ramírez Cervantes
// 2203007463
// bicinrubenbr@gmail.com
//
// Compilar y Ejecutar: Botón Play
//************************************

Algoritmo compararNumeros
	Definir numeroA como entero;
	Definir numeroB como entero;
	
	muestraCaratula();
	
	Imprimir "Ingresa tu primer numero:";
	Leer numeroA;
	
	Imprimir "Ingresa tu segundo numero:";
	Leer numeroB;
	
	si numeroA == numeroB Entonces
		
		Imprimir "El primer número y el segundo número son iguales: " numeroA " = " numeroB;
		
	SiNo
		
		si numeroA > numeroB Entonces
			Imprimir "El número " numeroA " es mayor que " numeroB;
			
		SiNo
			Imprimir "El número " numeroB " es mayor que " numeroA;
		FinSi
		
	FinSi
FinAlgoritmo

//Caratula
Funcion muestraCaratula()
	Imprimir("**************************************");
	Imprimir("*   FUNDAMENTOS DE LA PROGRAMACION   *");
	Imprimir("*   ALUMNO: Rubén Ramírez Cervantes  *");
	Imprimir("*        MATRICULA: 2203007463       *");
	Imprimir("*          COMPARAR NUMEROS          *");
	Imprimir("**************************************");
	Escribir "";
FinFuncion