#include "pilha.h"
#include "calc.h"


struct calc{
	char f[21];
	Pilha* p;
};


Calc* cria_calc(char* f){
	Calc* calculadora = (Calc*) malloc(sizeof(Calc));	//alocação dinamica da estrutra calculadora
	strcpy(calculadora->f,f); 							//copia o formato para a string de destino
	calculadora->p = cria(); 							// cria uma pilha nula inicialmente.		
	return calculadora;
}

void operando(Calc* c, float v){
	push(c->p,v);							 //empilha o valor v passado para a função.
	printf(c->f,v);
}

void operador(Calc* c, char op){
	float n1, n2, resultado;
	if (vazia(c->p)){                         //caso a pilha esteja vazia é atribuido zero aos operandos.
		n2 = 0.0;
		n1 = 0.0;
	}else{									 //caso tenha operandos desempilha-os
		n2 = pop(c->p);		
		n1 = pop(c->p);
	}
	
	switch (op) { 								
		case '+': resultado = n1+n2; break;
		case '-': resultado = n1-n2; break;
		case '*': resultado = n1*n2; break;
		case '/': resultado = n1/n2; break;
	}
	push(c->p,resultado); 					//empilha o resultado
	printf(c->f,resultado); 				//imprime o resutado
}


//libera a calculadora...free
void libera_calc(Calc* c)
{
 libera(c->p);					//libera a pilha
 free(c);						//libera a struct calculadora
}