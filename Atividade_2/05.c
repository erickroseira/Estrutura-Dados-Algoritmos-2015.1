#include <stdio.h>
#include <stdlib.h>

//programa que recebe tres numeros obrigatoriamente em ordem crescente e um quarto e imprime-os em ordem crescente

void ordemCrescente(float a, float b, float c, float d){
	
	   if (a>d ){
	  	 	printf("%f %f %f %f",d,a,b,c);
	   }else if (d>a && d<b){
		   	printf("%f %f %f %f",a,d,b,c);
	   }else if (d>b && d<c) {
		   	printf("%f %f %f %f",a,b,d,c);
	   }else{
	   		printf("%f %f %f %f",a,b,c,d);
	   }
       
	
}



int main(int argc, char *argv[]) {
	
	float n1=0, n2=0, n3=0, n4=0;
	
	printf("Digite o numero 1: ");
    scanf("%f", &n1);   
	    
    
	printf("Digite o numero 2: ");
    scanf("%f", &n2);  
	
	printf("Digite o numero 3: ");
    scanf("%f", &n3);   

	printf("Digite o numero 4: ");
    scanf("%f", &n4); 	    
    
    ordemCrescente(n1,n2,n3,n4);        
	
    
	
	
	return 0; 
}
