#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área em seguida mostre o dobro desta área para o usuário.

int quadradoArea(int lado){
	int area=0;
	area = lado*lado;
	
	return(area*area);
}


int main(int argc, char *argv[]) {
	
	int lado = 0, area =0;
	
	
	printf("Digite o tamanho do lado do quadrado: ");	
	scanf("%d", &lado);
	
	

	printf("O quadrado da area do circulo é: %d", quadradoArea(lado));
	
	return 0;
}
