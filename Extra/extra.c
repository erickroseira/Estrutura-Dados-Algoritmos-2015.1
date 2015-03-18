#include <stdio.h>
#include <stdlib.h>

/* Atividade Extra sobre determinar o maior numero entre 1,2,3 ou 4 opções de números, contendo uma função de teste para o código escrito e a validade
do mesmo. */

int dois (int a, int b){
	
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int tres(int a, int b, int c){
	int x = dois(a,b);
	return (x,c);
}


int quatro(int a, int b, int c, int d){
	
	int x = tres(a,b,c);
	return dois(x,d);
}

int verifica(){
	int a=1, b=2, c=3, d=4, maior=4, resultado =0;
	
	resultado = quatro(a,b,c,d);
	
	if(resultado == maior){
		return 1;
	}else{
		return 0;
	}
}


int main(int argc, char *argv[]) {
	
	dois(10,20);
	tres(10,20,30);
	quatro(10,20,30,40);	
	
	if(verifica()==1){
		printf("Correto");
	}
	
	return 0;
	
	
}