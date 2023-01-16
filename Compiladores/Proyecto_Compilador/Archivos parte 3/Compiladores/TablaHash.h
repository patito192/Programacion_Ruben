struct Nodo{
	char *Nombre;
	int tipo;
	int linea;
	
	struct Nodo *sig;
};

struct Nodo *TablaSimbolos[29];

void InicializaTabla(struct Nodo *TablaSimbolos[29]);
int Llave(char *nom);
struct Nodo *InsertaId(char *id, int tipo);
void EliminaId(char *id);
void LiberaTabla(struct Nodo *TablaSimbolos[29]);

void InicializaTabla(struct Nodo *TablaSimbolos[29]){
	int i=0;
	for(i=0;i<29;i++)
		TablaSimbolos[i]=NULL;
}

int Llave(char *nom){
	int i=0, llave=0;
	for(i=0;i<strlen(nom);i++)
		llave=llave+nom[i];
	llave=llave%29;
	return llave;
}

struct Nodo *Inserta(struct Nodo *TablaSimbolos[29], char *Nom, int tipo, int linea){
	int i;
	i=Llave(Nom);
	TablaSimbolos[i]=(struct Nodo *)malloc(sizeof(struct Nodo));
	TablaSimbolos[i]->Nombre=malloc(strlen(Nom));
	strcpy(TablaSimbolos[i]->Nombre, Nom);
	TablaSimbolos[i]->tipo=tipo;
	TablaSimbolos[i]->linea=linea;
}

void EliminaId(char *id){

}



















