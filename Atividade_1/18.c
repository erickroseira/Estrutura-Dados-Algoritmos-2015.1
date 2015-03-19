#include <stdio.h>
#include <stdlib.h>


//Faça um programa que calcule e mostre a área de um triângulo. Supondo que: Área = (base *altura) / 2.

float areaTriangulo(float base, float altura){
	
	float area = 0;
	
	area = ((base)*(altura))/2;
	
	return area; 	
}


int main(int argc, char *argv[]) {
	
	float base =0, altura=0;		
	
	printf("Digite a base do triangulo: ");	
	scanf("%f", &base);
	
	printf("Digite a altura do triangulo: ");	
	scanf("%f", &altura);	
	
	

	printf("A area do triangulo é: %f", areaTriangulo(base, altura) );
	
	return 0;
}
