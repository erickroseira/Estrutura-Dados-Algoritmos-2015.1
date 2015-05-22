//definição da struct
struct elemento {
	int info;
	struct elemento* prox;
}

typedef struct elemento* Lista;
typedef struct elemento Elemento;


//torna lista encadeada em circular
void TornaCircular(Lista *lst){
	if(lst !=NULL){
		Elemento *aux = *lst;
		
		while(aux->prox !=NULL)
			aux = aux->prox;
		aux->prox = *lst;
	}
}

//torna a lista circular em linear
void TornaLinear(Lista *lst){
	if(lst != NULL){
		Elemento *aux = *lst;
		
		while(aux->prox != *lst)
			aux = aux->prox;
		aux->prox = NULL;
	}
}

//função que retorna o tamanho da Lista Cirular
int TamanhoCircular(Lista *lst){
	
	if(lst == NULL || *lst == NULL) return 0;
	Elemento *aux = *lst;
	
	int contador = 0;
	do{
		aux = aux->prox;
		contador++;
	}while(aux != *li);
	
	return contador;
}