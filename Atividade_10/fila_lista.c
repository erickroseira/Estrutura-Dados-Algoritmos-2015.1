#include "fila.h"


struct no{
    float info;
    struct no* prox;
};
typedef struct no No;

struct fila {
    No* ini;
    No* fim;
};




Fila* cria(){
	Fila* fila= (Fila*)malloc(sizeof(Fila));
	fila->ini= fila->fim= NULL;
	return fila;
}

int vazia(Fila* f){

    if(f->ini == NULL && f->fim == NULL)		//se f->ini e f->fim iguais a NULL, fila vazia
        return 1;
    return 0;
}

void insere(Fila *f, float v){

	
	No* no= (No*) malloc(sizeof(No));	//aloca um novo n�
	no->info=v;								
	no->prox= NULL;							//novo n� aponta para null
	if(f->fim!= NULL)
		f->fim->prox=no;
	else{

		f->ini=no;
		f->fim=no;						
	}

}

float retira(Fila *f){

	No* n;
	float v;
	if(vazia(f)){						//verifica se est� vazia
		printf(" Filavazia." );
		exit(1);
	}
	n= f->ini;							//n recebe o inicio da fila
	v= n->info;							//v recebe o valor do no inicial da fila
	f->ini= n->prox;				    //faz o que o in�cio seja o pr�ximo n�.
	if(f->ini== NULL)
		f->fim= NULL;
	free(n);							//libera o antigo in�cio
	return v;
	
}

void libera(Fila* f){
				
	No* n= f->ini;
	while(n!= NULL){			//enquanto no � diferente de nullo
		No* aux=n->prox;			//no auxiliar recebe o pr�ximo
		free(n);				//libera o n� atual
		n=aux;					//n passa a receber o pr�ximo
	}
	free(f);					//libera a fila
}


//fun��o para imprimir os valores armazenados na fila
void imprime(Fila* f){	
	No* aux= f->ini;
	
	while(aux!= NULL){		
		printf("Valor: %f \n", aux->info);
	    aux=aux->prox;							
	}	
}
