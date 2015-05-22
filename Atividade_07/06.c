//definição da struct
struct elemento {
	int info;
	struct elemento* prox;
	struct elemento* ant;
}

typedef struct elemento* Lista;
typedef struct elemento Elemento;



//função de inserção no inicio de uma lista circular duplamente encadeada
int insere(Lista* lst, int info){
	if(lst == NULL) return 0;
	Elemento *no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	
	no->info = info;
	
	if(*lst == NULL){
		*lst = no;
		no->prox = no;
		no->ant = no;
	}else{
		Elemento *aux = *lst;
		while (aux->prox != *lst)
			aux = aux->prox;
		
		aux->prox = no;
		no->prox = *lst;
		no->ant = aux;		
		*lst = no;
	}
}


//função de remoção no inicio de uma lista circular duplamente encadeada
int remove (Lista *lst){
	if(lst ==NULL || *lst ==NULL) return 0;
	
	if(*lst == *lst->prox){ //ou seja se temos um unico elemento
		
		free(lst);
		*lst = NULL;
		return 1;
	}
	
	Elemento *aux = *lst;
	while (aux->prox != *lst)     //procuro quem aponta para o inicio
		aux = aux->prox;
	
	Elemento *inicio = *lst;
	aux->prox = inicio->prox;    //ultimo aponto para o 2º elemeto
	inicio->prox->ant = aux;    // o 2º aponta para o ultimo
	
	*lst = inicio->prox;		// 2º elemento passa a ser o novo inicio
	free(inicio);
	
	return 1;
}







