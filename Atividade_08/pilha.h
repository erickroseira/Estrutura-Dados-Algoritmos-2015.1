
struct no {
	float info;
	struct no* prox;
};

struct pilha{
	No* prim;
};
typedef struct pilha Pilha;
void push (Pilha *parsfnm, float v);
float pop(Pilha *p);
int vazia(Pilha *p);
void libera(Pilha* p);