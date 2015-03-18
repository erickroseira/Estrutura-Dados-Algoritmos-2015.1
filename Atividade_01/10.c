#include <stdio.h>
#include <stdlib.h>

//programa que calcula salario a partir do ganho/hora


float calculoSalario(float ganhoH, int nhoras ){
	float salario=0;
	salario = ganhoH*nhoras;
	return salario;
}


int main(int argc, char *argv[]) {
	
	float ganhoH = 0;
	int nhoras =0;
	
	
	printf("Digite seu ganho/hora: ");	
	scanf("%f", &ganhoH);
	
	printf("Digite a quantidade de horas trabalhadas: ");	
	scanf("%d", &nhoras);	
	


	printf("O seu salario é: %f", calculoSalario(ganhoH,nhoras) );
	
	return 0;
}
