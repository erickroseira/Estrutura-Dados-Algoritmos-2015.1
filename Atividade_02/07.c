#include <stdio.h>
#include <stdlib.h>

//programa que recebe quatro numeros e de acordo com a opção do ultimo imprime os tres primeiros em ordem crescente, decrecente ou o maior entre os dois

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

void ordemDecrescente(float a, float b, float c){
	
	  if (a>b && a>c && b>c){
	  	 	printf("%f %f %f",a,b,c);
	   }else if (a>b && a>c && c>b){
		   	printf("%f %f %f",a,c,b);
	   }else if (b>a && b>c && a>c) {
		   	printf("%f %f %f",b,a,c);
	   }else if (b>a && b>c && c>a){
		   	 printf("%f %f %f",b,c,a);
	   }else if (c>a && c>b && b>a){
	 	  	printf("%f %f %f",c,b,a);
	   }else{
	  	 	printf("%f %f %f",c,a,b);
	   }
}

void maiorEntre(float a, float b, float c){
	
	if (a>b && a>c){
		printf("%f %f %f",b,a,c);
	}else if(b>a && b>c){
		printf("%f %f %f",a,b,c);
	}else{
		printf("%f %f %f",b,c,a);
	}
}



int main(int argc, char *argv[]) {
	
	float A=0, B=0, C=0;
	int I=0;
	
	printf("Digite o numero 1: ");
    scanf("%f", &A);   	    
    
	printf("Digite o numero 2: ");
    scanf("%f", &B);  
	
	printf("Digite o numero 3: ");
    scanf("%f", &C);
	
	printf("Digite a opcao: 1 ou 2 ou 3")   ;
	scanf("%d", &I);
	    
    if(I==1){
    	ordemCrescente(A,B,C);  
	}else if(I==2){
		ordemDecrescente(A,B,C);  
	}else{
		maiorEntre(A,B,C);
	}
          
	
    
	
	
	return 0; 
}
