//************************************
// Rub�n Ram�rez Cervantes
// 2203007463
// bicinrubenbr@gmail.com
//
// Compilar y Ejecutar: Bot�n Play
//************************************

Algoritmo numerosPromedio
	//Declaraciones
	Definir numeroIngresado, contadorPromedio, contadorSuma, i Como Entero;
	
	//Contadores inizializado
	contadorPromedio = 0;
	contadorSuma = 0;
	//i inizializado
	i = 0;
	
	muestraCaratula();
	
	Imprimir "Si deseas finalizar escribe 0";
	Escribir "";
	
	Hacer
		//Se ingresa el n�mero
		Escribir Sin Saltar "Dime un n�mero:";
		Leer numeroIngresado;
		
		//Contador para la suma de los n�meros ingresados
		contadorSuma = contadorSuma + numeroIngresado;
		
		//Contador para saber el n�mero total de n�meros ingresados
		contadorPromedio = contadorPromedio + 1;
	Hasta Que numeroIngresado == 0
	
	//Sustractor para quitar el �ltimo n�mero 0 ingresado
	contadorPromedio = contadorPromedio - 1;
	
	//Se calcula el promedio
	Escribir "";
	Escribir "El promedio de tus n�meros ingresados es: " contadorSuma / contadorPromedio;
	
	//Fin del programa.
	Escribir "";
	Escribir "*** Fin del programa. ***";
	Escribir "";
FinAlgoritmo

//Caratula
Funcion muestraCaratula()
	Imprimir("**************************************");
	Imprimir("*   FUNDAMENTOS DE LA PROGRAMACION   *");
	Imprimir("*   ALUMNO: Rub�n Ram�rez Cervantes  *");
	Imprimir("*        MATRICULA: 2203007463       *");
	Imprimir("*         PROMEDIO DE NUMEROS        *");
	Imprimir("**************************************");
	Escribir "";
FinFuncion
