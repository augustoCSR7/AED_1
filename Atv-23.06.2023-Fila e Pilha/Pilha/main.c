#include "pilha.h"
#include <stdio.h>

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);
    imprimirPilha(&pilha);

    int elemento = pop(&pilha);
    printf("Elemento removido: %d\n", elemento);

    imprimirPilha(&pilha);

    return 0;
}