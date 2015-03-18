#include <stdio.h>
#include <stdlib.h>

//programa que informa se um numero é par ouu impar

void parImpar(int a){
	
	   if (a%2 ==0 ){
			
		printf("Par");
		
	   }else{
	   	printf("Impar");
	   }
       
	
}



int main(int argc, char *argv[]) {
	
	int n1=0;
	
	printf("Digite o numero 1: ");
    scanf("%d", &n1);   
	    
    
    parImpar(n1);        
	
    
	
	
	return 0; 
}
