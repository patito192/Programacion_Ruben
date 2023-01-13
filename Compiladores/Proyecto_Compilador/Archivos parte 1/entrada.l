t->l(l|d)*	1
|d+	2
|=	3


ap.id: entada.l
valor-num: 15

%{
	int num_linea=0;
	int valor_num=0;
	struct Nodo*ap-id;
%}
%%
{l}({l}|{d})*	{ap-id=Maneja-Id(yytext);
			return(1);
		}
{d}+		{valor_num=ato:(yytext);
		return(2);
		}
"="		{return(3);}
" "		;
\n		{num_lineas++;}
.		{error(yytexto,num_linea)}
