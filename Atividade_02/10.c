#include <stdio.h>
#include <stdlib.h>

//programa que imprime data no formato DD/MM/AAAA – mês por extenso e hora:minuto.


void verificaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
	
	if(ano1>ano2){	
		printf("%d/%d/%d",dia1,mes1,ano1);
	}else if(ano2>ano1){	
		printf("%d/%d/%d",dia2,mes2,ano2);
   }else{
   	
   		if(mes1>mes2){
			printf("%d/%d/%d",dia1,mes1,ano1);
	    }else if(mes2>mes1){
	    	printf("%d/%d/%d",dia2,mes2,ano2);
		}else{
			
			if(dia1>dia2){
					printf("%d/%d/%d",dia1,mes1,ano1);	
			}else{
					printf("%d/%d/%d",dia2,mes2,ano2);
			}
			
		}
   	
   	
   }
	
	
	
	
}



int main(int argc, char *argv[]) {
	
	int dia1=0, mes1=0, ano1=0, dia2=0, mes2=0, ano2=0;	

	printf("Para a primeira data \n");
	printf("Informe o dia mes e ano \n");
	scanf("%d %d %d", &dia1, &mes1, &ano1);
	
	
	printf("\n Para a segunda data \n");
	printf("Informe o dia mes e ano");
	scanf("%d %d %d", &dia2, &mes2, &ano2);
	
	verificaData(dia1, mes1, ano1, dia2, mes2, ano2);
	
	return 0; 
}
