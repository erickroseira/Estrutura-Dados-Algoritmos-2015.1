#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas

float mediaAritmetica(float n1, float n2, float n3){
	float media = 0;
	media =(n1+n2+n3)/3;
	return media; 	
}


int main(int argc, char *argv[]) {
	
	float n1 =0, n2=0, n3=0;
		
	
	printf("Digite a nota1: ");	
	scanf("%f", &n1);
	
	
	printf("Digite a nota2: ");	
	scanf("%f", &n2);
	
	
	printf("Digite a nota3: ");	
	scanf("%f", &n3);
	
	

	printf("A média aritmetica entre elas é: %f", mediaAritmetica(n1,n2,n3) );
	
	return 0;
}
