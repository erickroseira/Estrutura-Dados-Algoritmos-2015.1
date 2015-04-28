#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

//declaração da struct Matriz
struct matriz{
	
	int linha;
	int coluna;
	int* vetor_elem;
	
};


//alocação de memória da matriz
Matriz* cria(int linha, int coluna){
	
  Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
  mat->linha = linha;
  mat->coluna = coluna;
  mat->vetor_elem = (int*) malloc(linha*coluna*sizeof(int)); // alocando espaço na memória para o vetor.. é o mesmo que vetor_elem[linha][coluna]
  
  return mat;
	
}

//funcao de liberação de memoria da struct
void libera(Matriz* mat){
	
	free(mat->vetor_elem);
	free(mat);
	
}




void atribui(int linha, int coluna, Matriz* matriz, float valor){
	
	int index = (linha*matriz->coluna) + coluna;
	matriz->vetor_elem[index] = valor;	//atribui um valor a determinada linha e coluna
}


int acessa(int linha, int coluna, Matriz* matriz){

	int index = linha*matriz->coluna + coluna;
	return matriz->vetor_elem[index];	// acessa e retorna um valor de determinada linha e coluna
			
}

int linhas(Matriz* matriz){
	
	return matriz->linha;										//retorna o numero de linhas
}


int colunas(Matriz* matriz){
	
	return matriz->coluna;									//retorna o numero de colunas
	
}

void eSimetrica(Matriz* matriz){
	
	int simetrica = 1;
	
	if(linhas(matriz) != colunas(matriz)){
		
		printf("Nao simetrica.");
		
	}else{
		
		int i = 0, j=0;
		for(i=0; (i< matriz->linha); i++) {
    		for(j=0; (j<i); j++) {
    			if (acessa(i,j, matriz) != acessa(j,i, matriz))		// verificando se os elementos em posicoes simetricas sao iguais         	
    				simetrica = 0;												
    		}
    	
    		if(simetrica==0){														//se nao for simétrica dá um break no loop
    			break;
    		}
  		}
  		
  		(simetrica==1) ? printf("Simetrica\n"): printf("Nao Simetrica\n");
		
	}
	
	
}

Matriz* matrizTransposta(Matriz* matriz){
	
	Matriz* matriz_trans = cria(matriz->linha, matriz->coluna);		//cria dinamicamente a matriz transposta e aloca memoria
	int auxiliar = 0;											    //variavel auxiliar para guardar temporariamente determinado valor
	int i =0, j =0;
	
	for(i=0; i<matriz_trans->linha; i++){
		for(j = 0; j< matriz_trans->coluna; j++){
			
			if(i!=j){
				auxiliar = acessa(i,j, matriz);						//equivalente a auxiliar = matriz[i][j];
				atribui(i,j,matriz_trans,acessa(j,i,matriz));        //equivalente a matriz_trans[i][j] = matriz[j][i];
				atribui(j,i,matriz_trans,auxiliar);					//equivalente a  matriz_trans[j][i] =auxiliar;
			}else{
				atribui(i,j,matriz_trans,acessa(i,j,matriz));
			}
		}
		
		
	}
	
	return matriz_trans;
	
}
