#include <stdio.h>
#include <stdlib.h>

//programa que recebe tres numeros e mostra-os em ordem crescente

void ordemCrescente(float a, float b, float c){
	
	   if (a>b && a>c && b>c){
	  	 	printf("%f %f %f",c,b,a);
	   }else if (a>b && a>c && c>b){
		   	printf("%f %f %f",b,c,a);
	   }else if (b>a && b>c && a>c) {
		   	printf("%f %f %f",c,a,b);
	   }else if (b>a && b>c && c>a){
		   	 printf("%f %f %f",a,c,b);
	   }else if (c>a && c>b && b>a){
	 	  	printf("%f %f %f",a,b,c);
	   }else{
	  	 	printf("%f %f %f",b,a,c);
	   }
       

	
}



int main(int argc, char *argv[]) {
	
	float n1=0, n2=0, n3=0;
	
	printf("Digite o numero 1: ");
    scanf("%f", &n1);   
	    
    
	printf("Digite o numero 2: ");
    scanf("%f", &n2);  
	
	printf("Digite o numero 3: ");
    scanf("%f", &n3);   
	    
    
    ordemCrescente(n1,n2,n3);        
	
    
	
	
	return 0; 
}
