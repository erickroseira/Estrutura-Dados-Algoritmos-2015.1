#include <stdio.h>
#include <stdlib.h>


//Faça um Programa que peça dois números e imprima a soma.

int main(int argc, char *argv[]) {
	
	int a = 0, b =0;
	
	
	printf("Escreva o primeiro numero");	
	scanf("%d", &a);
	printf("Escreva o segundo numero");	
	scanf("%d", &b);



	printf("A soma dos dois numeros é: %d", (a+b) );
	
	return 0;
}