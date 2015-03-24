#include <stdio.h>

int main(){
	
	int participantes[]={1,2,3,4,5,6,7,8,9,10};
	int *escolhido = participantes; 
	int *ponteiro = NULL;
	
	
	participantes[0]=55;
	participantes[1]= participantes[2];
	participantes[2]= *escolhido;
	ponteiro = escolhido;
	printf("O escolhido foi o numero: %i",participantes[2]);
	printf("Valor do Ponteiro: %i",*ponteiro);
	//printf("\n%d , %d", sizeof(escolhido), sizeof(participantes));
	
	return 0;	
}
