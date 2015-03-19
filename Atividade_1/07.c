#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que converta metros para centímetros.

float metrosToCentimetro(float metros){

	float centimetros=0;
	centimetros = metros * 100;
	return centimetros;

}





int main(int argc, char *argv[]) {
	
	float metros = 0, centimetros =0;
	
	
	printf("Digite a quantidade de metros: ");	
	scanf("%f", &metros);
	
	

	printf("Em centimetros é: %f", metrosToCentimetro(metros));
	
	return 0;
}
