#ifndef PILHA_H
#define PILHA_H

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Pilha;

void inicializarPilha(Pilha *pilha);
int pilhaVazia(Pilha *pilha);
int pilhaCheia(Pilha *pilha);
void push(Pilha *pilha, int valor);
int pop(Pilha *pilha);
void imprimirPilha(Pilha *pilha);

#endif  // PILHA_H