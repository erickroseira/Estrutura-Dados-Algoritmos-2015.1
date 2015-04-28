//métodos "públicos". Desta forma estes métodos estarão visíveis para outros arquivos que importem matriz.h


typedef struct matriz Matriz;												//usando typedef para se referir a struct criado com um apelido
Matriz* cria(int linha, int coluna);									
void libera(Matriz* mat);
int acessa(int linha, int coluna, Matriz* matriz);
void atribui(int linha, int coluna, Matriz* matriz, float valor);
int linhas(Matriz* matriz);
int colunas(Matriz* matriz);
void eSimetrica(Matriz *matriz);
Matriz* matrizTransposta(Matriz* matriz);

