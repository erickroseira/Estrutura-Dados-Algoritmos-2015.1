#include "pilha.h"



#define MAX 50
struct pilha{
	int n;
	float vet[MAX];
};




//criação da pilha
Pilha* cria(void){
	Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
	if(pilha != null){
		pilha->n = -1;
		
	}
	
	return pilha; 
}

//inserção na pilha
void push (Pilha *parsfnm, float v){
	if(p->n < MAX){
		p->n++;
		p->vet[p->n] = v;
	}
}

//retirar elemento da pilha
float pop(Pilha *p){
	
	p->n--;
	return p->vetor[(p->n)+1];
	
}

//verifica se esta vazia
int vazia(Pilha *p){
	if(p->n >= 0) return 0;
	return 1;
}

//libera memoria alocada pela pilha
void libera(Pilha *p){
	free(p);
}