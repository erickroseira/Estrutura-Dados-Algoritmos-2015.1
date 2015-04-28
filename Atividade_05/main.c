#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Matriz* matriz;
	Matriz* matriz_trans;
	
	
	matriz = cria(2,2);

	//atribuindo valores a matriz de acordo com a posição	
	atribui(0,0,matriz,10);
	atribui(0,1,matriz,3);
	atribui(1,0,matriz,3);
	atribui(1,1,matriz,4);
	

	
	//acessa seus elementos
	printf("--------------Matriz Original----------------\n");
    printf("%d ",acessa(0,0, matriz));
	printf("%d \n",acessa(0,1, matriz));
	printf("%d ",acessa(1,0, matriz));
	printf("%d\n",acessa(1,1, matriz));
	
	
	
	//imprime o tamanho nXm da matriz
	printf("--------------Linhas e Colunas----------------\n");
	printf("Linhas: %d \n",linhas(matriz));
	printf("Colunas: %d \n",colunas(matriz));
	
	
	//verifica se é simétrica
	printf("--------------Simetria------------------------\n");
	eSimetrica(matriz);
	
	//cria dinamicamente a sua transposta e a imprime
	matriz_trans=matrizTransposta(matriz);
	printf("--------------Matriz Transposta--------------\n");
	printf("%d ",acessa(0,0, matriz_trans));
	printf("%d \n",acessa(0,1, matriz_trans));
	printf("%d ",acessa(1,0, matriz_trans));
	printf("%d\n",acessa(1,1, matriz_trans));
	
	
	return 0;
}
