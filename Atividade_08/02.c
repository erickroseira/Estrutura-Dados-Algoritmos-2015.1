#include "pilha.h"

struct no {
	float info;
	struct no* prox;
};

struct pilha{
	No* prim;
};

//criação da pilha
Pilha* cria(void){
	Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
	if(pilha != null)
		pilha->prim = NULL;	
	
	return pilha; 
}

//função que insere no inicio
No* insere_inicio(Pilha *p, float v){
	No *no = (No*) malloc(sizeof(No));
	if(no!=NULL){
		no->prox = p;
		no->inf = v;
	}
	p->prim = no;
	return no;
}

//função que remove do inicio
No* remove_inicio(Pilha *p, float v){
	No *aux = p->prim;
	p->prim = p->prim->prox;
	free(aux);
	return (p->prim);
}

//função push
void push (Pilha *parsfnm, float v){
	insere_inicio(p,v);
}

//função pop
float pop(Pilha *p){
	No *no = remove_inicio(p)
	return n->info;
}

//função que verifica se esta vazia
int vazia(Pilha *p){
	if(p == NULL) return 1;
	return 0;	
}

//função para liberar memoria alocada pela pilha
void libera(Pilha *p){
	if(p != null){
		No *aux;
		while(p->prim != NULL){
			aux = p->prim;
			p->prim = p->prim->prox;
			free(aux);
		}
	}
}