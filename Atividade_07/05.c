//definição da struct
struct elemento {
	int info;
	struct elemento* prox;
	struct elemento* ant;
}

typedef struct elemento* Lista;
typedef struct elemento Elemento;

//função de inserção no inicio da lista
int insere(Lista* lst, int info){
	if(lst == NULL) return 0;
	Elemento *no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	
	no->info = info;
	no->prox = *lst;
	no->ant = NULL;
	
	if(*lst != NULL)      //verifica se a lista já estava populada e caso esteja manda o antigo inicio aponta para o novo inicio
		*lst->ant = no;
	
	return 1;
}

//função de busca por posição
int consulta(Lista *lst, int posicao, int *dado){
	if(lst == NULL || posicao<=0) return 0;
	Elemento *aux = *lst;
	
	int contador = 1;
	
	while (aux != NULL && contador < posicao){
		 contador++;
		 aux = aux->prox;
	}
	
	if(aux != NULL){       //quer dizer que achou o elemento procurado
		*dado = aux->info;	
		return 1;        
	}else{
		return 0;
	}
}











//função de remoção no inicio
int remove(Lista* lst){
	if(lst == NULL || *lst ==NULL) return 0;
	
	Elemento *aux = *lst;
	*lst = *lst->prox;
	
	if(no->prox != NULL)   //se a lista ja estiver populado faz com no->prox aponte para NULL.
		no->prox->ant = NULL;
	
	free(no);
	return 1;
}