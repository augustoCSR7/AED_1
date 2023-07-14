#include "pilha.h"
#include <stdio.h>

void inicializarPilha(Pilha *pilha) {
    pilha->top = -1;
}

int pilhaVazia(Pilha *pilha) {
    return (pilha->top == -1);
}

int pilhaCheia(Pilha *pilha) {
    return (pilha->top == MAX_SIZE - 1);
}

void push(Pilha *pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: a pilha está cheia\n");
        return;
    }
    pilha->data[++pilha->top] = valor;
}

int pop(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: a pilha está vazia\n");
        return -1;
    }
    return pilha->data[pilha->top--];
}

void imprimirPilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia\n");
        return;
    }
    printf("Elementos da pilha: ");
    for (int i = pilha->top; i >= 0; i--) {
        printf("%d ", pilha->data[i]);
    }
    printf("\n");
}