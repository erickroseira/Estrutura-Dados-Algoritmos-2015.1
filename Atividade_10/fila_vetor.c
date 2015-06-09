#include "fila.h"

struct fila {
    int ini, fim;
    float vet[N];
};

Fila* cria(){
    Fila *fila = (Fila*) malloc(sizeof(Fila));
    fila->ini = 0;
    fila->fim = 0;
    return fila;
}


int vazia(Fila* f){

    if(f->ini == f->fim)
        return 1;
    return 0;
}

void insere(Fila *f, float v){

    int ult_pos;
    if(f->fim == N){

        printf("Fila Cheia!");
        exit(1);

    }

	ult_pos = (f->ini+ f->fim)%N;        //aqui ele calcula a ultima posicao livre de forma circular
    f->vet[ult_pos] = v;				 //insere o elemento nesta ultima posicao
    f->fim++;							

}

float retira(Fila *f){

	float valor;
	 
	if(vazia(f)){
		printf("Fila Vazia. Insira Elementos");
		exit(1);
	}
	
	valor = f->vet[f->ini];
	f->ini = (f->ini+1)%N;
	f->fim--;
	return valor;

}

void libera(Fila* f){
    free(f);
}


//funcao para imprimir os valores armazenados na fila
void imprime(Fila* f){	
   int cont;
   for (cont=f->ini;cont<f->fim;cont++){
        printf("Valor: %f \n",f->vet[cont]);
   }
}
