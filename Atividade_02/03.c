#include <stdio.h>
#include <stdlib.h>

//programa que recebe dois numeros e mostra o maior

float maior(float a, float b){
	
	if(a>b){
		return a;
	}else{
		return b;
	}


	
}



int main(int argc, char *argv[]) {
	
	float n1=0, n2=0;
	
	printf("Digite o numero 1: ");
    scanf("%f", &n1);   
	    
    
	printf("Digite o numero 2: ");
    scanf("%f", &n2);   
	
          
	
    printf("O maior numero: %f ",maior(n1, n2));
	
	
	
	return 0; 
}
