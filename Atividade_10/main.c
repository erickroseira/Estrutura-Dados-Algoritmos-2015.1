#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "fila_lista.c"
#include "fila_vetor.c"

int main()
{
    Fila* f = cria();
    insere(f, 1);
    insere(f, 12);
    insere(f, 4);
    insere(f, 2.3);
    imprime(f);
    
    libera(f);
    return 0;
}
