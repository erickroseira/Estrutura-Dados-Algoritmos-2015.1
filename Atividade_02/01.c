#include <stdio.h>
#include <stdlib.h>

//programa que caulcula a media ponderada e exibe um conceito a partir da media


void mediaPonderada(float n1, float n2, float n3, float p1, float p2, float p3){
	
	float mediaPonderada =0;
	mediaPonderada = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	
	printf("Media: %f", mediaPonderada);
	
	if(mediaPonderada>0 && mediaPonderada<5){
		printf("Conceito E");
	}else if(mediaPonderada>=5 && mediaPonderada<6){
		printf("Conceito D");
	}else if(mediaPonderada>=6 && mediaPonderada<7){
		printf("Conceito C");
	}else if(mediaPonderada>=7 && mediaPonderada<8){
		printf("Conceito B");
	}else{
		printf("Conceito A");
	}
	


	
}



int main(int argc, char *argv[]) {
	
	float n1=0, n2=0, n3=0, p1=0, p2=0, p3=0;
	
	printf("Digite a nota 1: ");
    scanf("%f", &n1); 
	printf("Digite o peso 1: ");
    scanf("%f", &p1);   
	    
    
    printf("Digite a nota 2: ");
    scanf("%f", &n2); 
	printf("Digite o peso 2: ");
    scanf("%f", &p2);
	
    
    printf("Digite a nota 3: ");
    scanf("%f", &n3); 
	printf("Digite o peso 3: ");
    scanf("%f", &p3);
    			  
    mediaPonderada(n1,n2,n3,p1,p2,p3);
	
	
	
	return 0; 
}
