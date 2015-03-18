#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

float media(float a, float b, float c, float d){

	float media =0;
	media=((a+b+c+d)/4);
	return media;


}



int main(int argc, char *argv[]) {
	
	float n1 = 0, n2 =0, n3=0, n4=0;
	
	
	printf("Escreva o primeira nota: ");	
	scanf("%f", &n1);
	printf("Escreva a segunda nota: ");	
	scanf("%f", &n2);
	printf("Escreva o terceira nota: ");	
	scanf("%f", &n3);
	printf("Escreva a quarta nota: ");	
	scanf("%f", &n4);

	


	printf("A média das quatro notas é: %f", media(n1,n2,n3,n4) );
	
	return 0;
}
