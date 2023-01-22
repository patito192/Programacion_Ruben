Algoritmo numerosPromedio
	//Declaraciones
	Definir numeroIngresado, contadorPromedio, contadorSuma, i Como Entero;
	
	//Contadores inizializado
	contadorPromedio = 0;
	contadorSuma = 0;
	//i inizializado
	i = 0;
	
	Imprimir "Si deseas finalizar escribe 0";
	Escribir "";
	
	Hacer
		//Se ingresa el número
		Escribir Sin Saltar "Dime un número:";
		Leer numeroIngresado;
		
		//Contador para la suma de los números ingresados
		contadorSuma = contadorSuma + numeroIngresado;
		
		//Contador para saber el número total de números ingresados
		contadorPromedio = contadorPromedio + 1;
	Hasta Que numeroIngresado == 0
	
	//Sustractor para quitar el último número 0 ingresado
	contadorPromedio = contadorPromedio - 1;
	
	//Se calcula el promedio
	Escribir "";
	Escribir "El promedio de tus números ingresados es: " contadorSuma / contadorPromedio;
	
	//Fin del programa.
	Escribir "";
	Escribir "*** Fin del programa. ***";
	Escribir "";
	
FinAlgoritmo
