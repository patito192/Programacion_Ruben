
%{
	#include "TablaHash.h"
	int num_l = 0;
	int valorNum = 0;
	int ap_int = 0;
	char * prueba;
	int tokenpos = 0;  
	int cant_coment = 0; 
	#define COD_INT 1
	#define COD_FUNCTION 2
	#define COD_MAIN 3
	#define COD_THEN 4
	#define COD_IF 5
	#define COD_ELSE 6 
	#define COD_WHILE 7
	#define COD_DO 8 
	#define COD_RETURN 9
	#define COD_SALTO_LINEA 10
	#define COD_IDENTIFICADOR 11
	#define COD_NUMERO 12
	#define COD_CADENA 13
	#define COD_PUNTO_COMA 14
	#define COD_COMA 15
	#define COD_PARENT_ABRE 16
	#define COD_PARENT_CIERRA 17
	#define COD_LLAVE_ABRE 18
	#define COD_LLAVE_CIERRA 19
	#define COD_MAYOR_IGUAL 20
	#define COD_MENOR_IGUAL 21
	#define COD_MAYOR 22
	#define COD_MENOR 23
	#define COD_IGUAL 24
	#define COD_DIFERENTE 25
	#define COD_MAS 26
	#define COD_MENOS 27
	#define COD_MULT 28
	#define COD_DIV 29
	#define COD_ERROR -1
%}

/*Definiciones regulares*/

numero [0-9]
letra [a-zA-z]
id {letra}({letra}|{numero})*
bloque "("|")"|""{"|"}"
comparacion ">="|"<="|">"|"<"|"="|"!="
operador "+"|"-"|"*"|"/"

%%
[\t]		        {
				; //ignora espacios y tabuladores	
			}

"int"		        {
				printf("Encuentro: %s\n", yytext);
				//return(COD_INT);			
			}
			
"function"		{
				printf("Encuentro: %s\n", yytext);
				//return(COD_FUNCTION);			
			}

"main"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MAIN);
		}

"then"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_THEN);
		}
			
"if"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_IF);
		}
			
"else"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_ELSE);
		}

"while"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_WHILE);
		}
			
"do"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_DO);
		}
			
"return"	{
			printf("Encuentro: %s\n", yytext);
			//return(COD_RETURN);
		}
			
\n		{
			num_l++;
			//printf("Encuentro salto de linea: %s\n", yytext);
			//return(COD_SALTO_LINEA);
		}
			
{id}	        {
			printf("Encuentro identificador: %s\n", yytext);
			//return(COD_IDENTIFICADOR);
		}
								
{numero}+	{
			valorNum = atoi(yytext);
			printf("Encuentro numero: %s\n", yytext);
			//return(COD_NUMERO);
		}
								
"{letra}+"	{
		      //prueba = atoi(yytext);
		        printf("Encuentro cadena: %s\n", yytext);
		      //return(COD_CADENA);
		}
								
";"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_PUNTO_COMA);		
		}
		
","		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_COMA);		
		}

"("		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_PARENT_ABRE);		
		}
		
")"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_PARENT_CIERRA);		
		}
		
"{"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_LLAVE_ABRE);		
		}
		
"}"		{
		printf("Encuentro: %s\n", yytext);
			//return(COD_LLAVE_CIERRA);		
		}
		
">="		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MAYOR_IGUAL);		
		}
		
"<="		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MENOR_IGUAL);		
		}
		
">"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MAYOR);		
		}
		
"<"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MENOR);		
		}
		
"="		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_IGUAL);		
		}
		
"!="		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_DIFERENTE);		
		}
		
"+"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MAS);		
		}
		
"-"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MENOS);		
		}
		
"*"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_MULT);		
		}
		
"/"		{
			printf("Encuentro: %s\n", yytext);
			//return(COD_DIV);		
		}
		
.+		{
			printf("Simbolo no reconocido. ERROR!\n");
			//return(COD_ERROR);
		}
%%
