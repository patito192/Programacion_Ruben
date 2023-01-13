%{int suma=0;
%}
d[0-9]
%%
{d}+{suma=suma+ato:(yytext);}
.	;
\n	;
