%{

%}

l[a-zA-Z]
d[0-9]

%%

ident;	
numeros;
"int"	{return(1)}
"float" {return(2)}
"char" {return(3)}
"main" {return(4)}
"if" {return(5)}
"else" {return(6}
"while" {return(7)}
"do" {return(8)}
"return" {return(9)}
"for" {return(10)}
"identificadores" {return(11)}
(d)* {return(12)}
(l)* {return(13)}
\n {return(14)}
";" {return(15)}
"," {return(16)}
"(" {return(17)}
")" {return(18)}
"{" {return(19)}
"}" {return(20)}
">=" {return(21)}
">" {return(22)}
"<=" {return(23)}
"<" {return(24)}
"=" {return(25)}
"==" {return(26)}
"!=" {return(27)}
"+" {return(28)}
"-" {return(29)}
"*" {return(30)}
"/" {return(31)}
.	;

%%

main()

