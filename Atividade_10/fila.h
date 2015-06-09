#define N 100


typedef struct fila Fila;

Fila* cria();
void insere(Fila* f, float v);
float retira(Fila* f);
int vazia(Fila* f);
void libera(Fila* f);
