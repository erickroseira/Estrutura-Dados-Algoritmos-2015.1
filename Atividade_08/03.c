#include "pilha.h"




//função para imprimir os valores armazenados utilizando vetor
void push (Pilha *p){
	
	int i;
	for(i=p->n; i>=0; i--){
		printf("%d ", p->vet[i]);
	}
	
}




//função para imprimir os valores armazenados utilizando lista
void imprimir(Pilha *p){
	if(p != null){
		No *aux = p->prim;
		while(aux != NULL){
			printf("%d ", aux->info);
			aux = aux->prox;
		}
	}
}