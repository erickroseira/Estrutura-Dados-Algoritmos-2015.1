#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor
do aumento e o novo salário.*/

float calculoSalario(float salario, float percentual){
	
	float novoSalario = 0;
	novoSalario = (salario*(percentual/100))+salario;
	return novoSalario; 	
}


int main(int argc, char *argv[]) {
	
	float salario =0, percentual=0;		
	
	printf("Digite o salário do funcionario: ");	
	scanf("%f", &salario);
	
	printf("Digite o percentual de aumento do salario do funcionario: ");	
	scanf("%f", &percentual);
		
	
	

	printf("O novo salario do funcionario é: %f", calculoSalario(salario,percentual) );
	
	return 0;
}
