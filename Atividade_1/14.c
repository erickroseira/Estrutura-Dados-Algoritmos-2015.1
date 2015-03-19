#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendose que este
sofreu um aumento de 25%.*/

float calculoSalario(float salario){
	
	float novoSalario = 0;
	novoSalario = (salario*0.25)+salario;
	return novoSalario; 	
}


int main(int argc, char *argv[]) {
	
	float salario =0;		
	
	printf("Digite o salário do funcionario: ");	
	scanf("%f", &salario);
		
	
	

	printf("O novo salario do funcionario é: %f", calculoSalario(salario) );
	
	return 0;
}
