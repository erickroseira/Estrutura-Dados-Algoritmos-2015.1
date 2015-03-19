#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada


float mediaPonderada(float n1, float n2, float n3, float p1, float p2, float p3){
	float mediaPonderada = 0;
	mediaPonderada = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	return mediaPonderada; 	
}


int main(int argc, char *argv[]) {
	
	float n1 =0, n2=0, n3=0, p1 =0, p2 =0, p3=0;
		
	
	printf("Digite a nota1: ");	
	scanf("%f", &n1);
	printf("Digite o peso da nota1: ");	
	scanf("%f", &p1);
	
	
	printf("Digite a nota2: ");	
	scanf("%f", &n2);
	printf("Digite o peso da nota2: ");	
	scanf("%f", &p2);
	
	
	printf("Digite a nota3: ");	
	scanf("%f", &n3);
	printf("Digite o peso da nota3: ");	
	scanf("%f", &p3);
	
	

	printf("A média ponderda entre das notas é: %f", mediaPonderada(n1,n2,n3,p1,p2,p3) );
	
	return 0;
}
