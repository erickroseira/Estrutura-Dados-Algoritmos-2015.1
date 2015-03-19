#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre este salário.*/


float calculoSalario(float salario){
	
	float salarioGrat = 0;
	float salarioImposto=0;
	
	salarioGrat = ((salario*(0.05))+salario);
	salarioImposto = (salarioGrat) - (salarioGrat*0.07);
	return salarioImposto; 	
}


int main(int argc, char *argv[]) {
	
	float salario =0, percentual=0;		
	
	printf("Digite o salário base do funcionario: ");	
	scanf("%f", &salario);
	
	
	

	printf("O novo salario do funcionario é: %f", calculoSalario(salario) );
	
	return 0;
}
