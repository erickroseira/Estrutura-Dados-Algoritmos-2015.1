#include <stdio.h>
#include <stdlib.h>

//programa transforma temperatura F em C


float FarenheitoCelisu(float temperaturaF){
	
	float celsius=0;
	
	celsius = ((5*temperaturaF)/9);
		
	return celsius;
	
}



int main(int argc, char *argv[]) {
	
	float celsius=0;

	printf("Informe a temperatura em Farenheits \n");
	scanf("%f", &celsius);
	
	

	printf("Temperatura em Celsius: %f", FarenheitoCelisu(celsius));
	
	
	
	return 0; 
}
