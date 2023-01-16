#include<stdio.h>
#include<stdlib.h>
#include "lex.yy.c"
//#include "TablaHash.h"
FILE *yyin;

int main(void){
	
	extern int num_l;
	struct Nodo *TablaSimbolos[29];
	
	yyin = fopen("prueba.txt", "r");
	if(yyin == NULL){
		printf("No se pudo abrir el archivo\n");
		exit(1);
	}
	
	InicializaTabla(TablaSimbolos);
	int token;
	while(!feof(yyin)){
		yylex();
	}

	printf("Termina analisis lexico. Se encontraron %d saltos de linea\n", num_l);
	
	
	fclose(yyin);
	return 0;
	
}

int yywrap() { return 1; }
