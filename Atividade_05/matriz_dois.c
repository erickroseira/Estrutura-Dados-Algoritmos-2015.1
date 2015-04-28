#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

//declaração da struct matriz usando vetores de ponteiros
struct matriz{
	
	int linha;
	int coluna;
	int** vetor_elem;
	
};


//alocação de memória da matriz
Matriz* cria(int linha, int coluna){
	
  Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
  mat->linha = linha;
  mat->coluna = coluna;
  mat->vetor_elem = (int**) malloc(linha*sizeof(int)); 
  
  int index;
  for(index =0; index<coluna; index++)
  	mat->vetor_elem[index] = (int*) malloc(coluna*sizeof(int));
  
  return mat;
	
}

//funcao de liberação de memoria da struct
void libera(Matriz* mat){
	
	int index;
	for(index =0; index<mat->linha; index++)
		free(mat->vetor_elem[index]);
	
	free(mat->vetor_elem);
	free(mat);
	
}



int acessa(int linha, int coluna, Matriz* matriz){

	
	return matriz->vetor_elem[linha][coluna];	// acessa e retorna um valor de determinada linha e coluna
			
}

void atribui(int linha, int coluna, Matriz* matriz, float valor){
	
		matriz->vetor_elem[linha][coluna] = valor;	//atribui um valor a determinada linha e coluna
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
  		
  		(simetrica==1) ? printf("Sim. E uma matriz Simetrica\n"): printf("Nao. Nao é uma matriz Simetrica\n");        //if ternario imprime se é ou nao simetrica
		
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
