//definição da struct
struct elemento {
	int info;
	struct elemento* prox;
}

typedef struct elemento* Lista;
typedef struct elemento Elemento;

Lista* copia(Lista *lst){
	
	
	Lista *copia;
	Elemento *no, *aux = *lst;
	
	*copia = *lst;
	while (aux != NULL){
		
		no = (Elemento*) malloc(sizeof(Elemento));
		no->info = aux->info;
		no->prox = aux->prox;
		
		aux = aux->prox;
	}
	
	return copia;
}
