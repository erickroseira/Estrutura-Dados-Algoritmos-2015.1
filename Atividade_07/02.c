//definição da struct
struct elemento {
	int info;
	struct elemento* prox;
}

typedef struct elemento* Lista;
typedef struct elemento Elemento;




//função que verifica se duas listas sao iguais
int igual(Lista *l1, Lista l2){
		
	Elemento *aux1, *aux2;
	aux1 = *l1;
	aux2 = *l2;
	
	while(aux1 != NULL && aux2 != NULL){
			
			if(aux1->info != aux2->info){
				return 0;
			}else{
				aux1 = aux1->prox;
				aux2 = aux2->prox;
			}
	}
	
	return 1; // se chegar aqui é pq as duas listas sao iguais
}