%token int id
%token pq
%token q
%token lla
%start PROGRAM
%%
PROFRAM: DECLS MAIN;
DECLS:
	| DECLS DECL;
LISTA_ID: id
	|LISTA_ID q id;
