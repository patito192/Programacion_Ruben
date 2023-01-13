l [a-z A-Z]
d [0-9]
%%
	identificadores
	numeros
	
	[0-9] + {return(1);}
	[0-9] + '.'[
	
	"int" {return(1);}
	"float" {return(2);}
	"char" {return(3);}
	"main" {return(4);}
	"if" {return(5);}
	"else" {return(6);}
	"while" {return(7);}
	"do" {return(8);}
	
	"" {return();}
%%
