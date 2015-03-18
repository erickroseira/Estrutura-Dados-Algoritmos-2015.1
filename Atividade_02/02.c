#include <stdio.h>
#include <stdlib.h>

//programa que	exibe a mensagem de reprovado exame e aprovado e caso seja exame exibe precisa tira 6

void resultado(float n1, float n2, float n3){
	
	float media =0;
	media = (n1+n2+n3)/3;
	
	printf("A média é: %f", media);
	
	if(media>=0 && media<3){
		printf("Reprovado");
	}else if(media>=3 && media<7){
		printf("Exame");
		printf("Precisa tirar 6");
	}else if(media>=7 && media<=10){
		printf("Aprovado");
	}


	
}



int main(int argc, char *argv[]) {
	
	float n1=0, n2=0, n3=0;
	
	printf("Digite a nota1: ");
    scanf("%f", &n1);   
	    
    
	printf("Digite a nota2: ");
    scanf("%f", &n2);   
	
    
    printf("Digite a nota3: ");
    scanf("%f", &n3);   
	
    resultado(n1, n2, n3);
	
	
	
	return 0; 
}
