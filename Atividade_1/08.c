#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592


//Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere pi = 3:141592.

float areaCirculo(float raio){
	float area=0;
	area = pi*(raio*raio);
	return area;
}


int main(int argc, char *argv[]) {
	
	float raio = 0, area =0;
	
	
	printf("Digite o raio do circulo: ");	
	scanf("%f", &raio);
	
	

	printf("A area do circulo é: %f", areaCirculo(raio) );
	
	return 0;
}
