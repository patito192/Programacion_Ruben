Algoritmo compararNumeros
	Definir numeroA como entero;
	Definir numeroB como entero;
	
	Imprimir "Ingresa tu primer numero:";
	Leer numeroA;
	
	Imprimir "Ingresa tu segundo numero:";
	Leer numeroB;
	
	si numeroA == numeroB Entonces
		
		Imprimir "El primer n�mero y el segundo n�mero son iguales: " numeroA " = " numeroB;
		
	SiNo
		
		si numeroA > numeroB Entonces
			Imprimir "El n�mero " numeroA " es mayor que " numeroB;
			
		SiNo
			Imprimir "El n�mero " numeroB " es mayor que " numeroA;
		FinSi
		
	FinSi
	
	
	
	
	
FinAlgoritmo
