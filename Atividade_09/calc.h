struct calc{
	char f[21];
	Pilha* p;
};


typedef struct calc Calc;
Calc* cria_calc​(char* f);
void operando​(Calc* c, float v);
void operador​(Calc* c, char op);
void libera_calc​(Calc* c);
