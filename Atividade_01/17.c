#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,
sabendose que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base*/


float calculoSalario(float salario){
	
	float salarioFinal = 0;
	
	salarioFinal = (salario + 50) - (salario*0.1);
	
	return salarioFinal; 	
}


int main(int argc, char *argv[]) {
	
	float salario =0, percentual=0;		
	
	printf("Digite o salário base do funcionario: ");	
	scanf("%f", &salario);
	
	
	

	printf("O novo salario do funcionario é: %f", calculoSalario(salario) );
	
	return 0;
}
