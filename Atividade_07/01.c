//definição da struct
struct elemento {
	int info;
	struct elemento* prox;
}

typedef struct elemento* Lista;
typedef struct elemento Elemento;


//1)a) Função de inicialização

Lista* criaLista(){
	Lista *lst = (Lista*) malloc(sizeof(Lista));
	if(lst != NULL)
		*lst = NULL;
	return lst;
}

//b) Função de inserção

int insere(Lista *lst, int info){
	
	if(lst == NULL) return 0;
	Elemento *no = (Elemento*) malloc(sizeof(Lista));
	if (no == NULL) return 0;
	no->info = info;
	no->prox = *lst;
	*lst = no;
	return 1;	
}

//c) função que percorre os elementos da lista

void percorrer(Lista *lst){
	Elemento *aux = *lst;
	while(aux != NULL)
		aux=aux->prox;	
}

//d) Função que verfica se a lista esta vazia;

int verifica_vazia(Lista *lst){
	if(lst == NULL) return 1;
	if(*lst == NULL) return 1;
	return 0;
}

//e) função de busca

int busca(Lista *lst, int *dado, int posicao){
	if(lst == NULL || posicao <=0) return 0; //lista vazio ou posicao <=0, retorna zero como falha
	Elemento *aux = *lst;
	
	
	int contador = 1;
	
	while(contador < posicao && aux != NULL){
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

//f) função que retira um elemento da lista

int remove(Lista *lst){
	if(lst == NULL || (*lst) == NULL) return 0;
	
	Elemento *aux = *lst;
	*lst = *lst->prox;		
	free(aux);
	return 1;
}

//g)função para liberar a lista

void liberar(Lista * lst){
	if(lst!=NULL){
		
		Elemento *aux;
		while(*lst!=NULL){
			no=*lst;
			*lst = *lst->prox;
			free(no);
		}
		
		free(lst);
		
	}
}