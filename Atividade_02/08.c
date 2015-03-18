#include <stdio.h>
#include <stdlib.h>

//programa que que funciona como calculadora...

void operacao(float a, float b, int opcao){
	 float resultado =0;
	
	  if(opcao==1){
	  	resultado = a+b; 	  		  	
	  }else if(opcao==2){
	  	resultado = a-b;
	  }else if(opcao==3){
	  	resultado=a*b;
	  }else{
	  	resultado=a/b;
	  }
	  
	  printf("Resultado: %f", resultado);
	  
}

void raizQuadrada(float num){
	printf("Raiz Quadrada: %f", sqrt(num));
}





int main(int argc, char *argv[]) {
	
	float A=0, B=0;
	int opcao=0;
	
	
	
	
	printf("[1] - Somar dois numeros. \n ");
	printf("[2] - Subtrair dois numeros. \n ");
	printf("[3] - Multiplicar dois numeros. \n ");
	printf("[4] - Dividir dois numeros. \n ");
	printf("[5] - Raiz quadrada de um numero. \n ");
	
	
	printf("Digite a opcao: 1 ou 2 ou 3");
	scanf("%d", &opcao);
	
	if(opcao != 5){
	
	
		printf("Digite o numero 1: ");
    	scanf("%f", &A);   	    
    
		printf("Digite o numero 2: ");
    	scanf("%f", &B);  
    
    	operacao(A,B,opcao);
	
    }else{
    	printf("Digite o numero: ");
    	scanf("%f", &A);   	
    	raizQuadrada(A);
	}
	    
   	
	
    
	
	
	return 0; 
}
