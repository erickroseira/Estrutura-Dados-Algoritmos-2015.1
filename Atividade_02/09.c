#include <stdio.h>
#include <stdlib.h>

//programa que imprime data no formato DD/MM/AAAA – mês por extenso e hora:minuto.



int main(int argc, char *argv[]) {
	
	
	struct tm * tm;
	time_t t;

	char data[20];

	time(&t);
	tm = localtime(&t);
	strftime(data, 20, "%d-%m-%y - %m", tm);

	printf("%s - %s", data, __TIME__);
	 
	
	
	return 0; 
}
