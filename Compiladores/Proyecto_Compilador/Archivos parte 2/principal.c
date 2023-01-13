#include "ytab.c"
#include "lex.yy.c"
#include "Tablas.h"

FILE *yyin=null;

main(){
	yyin=fopen("Archivo_Prueba.txt","v");
	
	yyparse();
	.
	.
	.
}

yyerror(char*cad)
{
prinf("Error:%s",cad);
}
