Algoritmo compararNumeros
	Definir numeroA como entero;
	Definir numeroB como entero;
	
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
