#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

LISTA* criar_lista(int tamanho) {
    LISTA* lista = (LISTA*)malloc(sizeof(LISTA));
    lista->vetor = (int*)malloc(tamanho * sizeof(int));
    lista->quantidade = tamanho;
    return lista;
}

void liberar_lista(LISTA* lista) {
    free(lista->vetor);
    free(lista);
}

void inserir_elemento(LISTA* lista, int elemento) {
    lista->vetor[lista->quantidade++] = elemento;
}

void inserir_elemento_ordenado(LISTA* lista, int elemento) {
    int i;
    for (i = lista->quantidade - 1; i >= 0 && lista->vetor[i] > elemento; i--) {
        lista->vetor[i + 1] = lista->vetor[i];
    }
    lista->vetor[i + 1] = elemento;
    lista->quantidade++;
}

void imprimir_lista_iterativo(LISTA* lista) {
    int i;
    for (i = 0; i < lista->quantidade; i++) {
        printf("%d ", lista->vetor[i]);
    }
    printf("\n");
}

int buscar_sequencial(LISTA* lista, int elemento) {
    int i;
    for (i = 0; i < lista->quantidade; i++) {
        if (lista->vetor[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int buscar_sequencial_ordenado(LISTA* lista, int elemento) {
    int i;
    for (i = 0; i < lista->quantidade; i++) {
        if (lista->vetor[i] == elemento) {
            return i;
        } else if (lista->vetor[i] > elemento) {
            return -1;
        }
    }
    return -1;
}

int busca_binaria_iterativa(LISTA* lista, int elemento) {
    int esquerda = 0;
    int direita = lista->quantidade - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (lista->vetor[meio] == elemento) {
            return meio;
        } else if (lista->vetor[meio] < elemento) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1;
}

int busca_binaria_recursiva_aux(LISTA* lista, int elemento, int esquerda, int direita) {
    if (esquerda > direita) {
        return -1;
    }

    int meio = (esquerda + direita) / 2;
    if (lista->vetor[meio] == elemento) {
        return meio;
    } else if (lista->vetor[meio] < elemento) {
        return busca_binaria_recursiva_aux(lista, elemento, meio + 1, direita);
    } else {
        return busca_binaria_recursiva_aux(lista, elemento, esquerda, meio - 1);
    }
}

int busca_binaria_recursiva(LISTA* lista, int elemento) {
    return busca_binaria_recursiva_aux(lista, elemento, 0, lista->quantidade - 1);
}

void imprimir_lista_recursivo_aux(LISTA* lista, int indice) {
    if (indice >= lista->quantidade) {
        printf("\n");
        return;
    }

    printf("%d ", lista->vetor[indice]);
    imprimir_lista_recursivo_aux(lista, indice + 1);
}

void imprimir_lista_recursivo(LISTA* lista) {
    imprimir_lista_recursivo_aux(lista, 0);
}

int buscar_maior_iterativo(LISTA* lista) {
    int i;
    int maior = lista->vetor[0];
    for (i = 1; i < lista->quantidade; i++) {
        if (lista->vetor[i] > maior) {
            maior = lista->vetor[i];
        }
    }
    return maior;
}

int buscar_maior_recursivo_aux(LISTA* lista, int indice, int maior) {
    if (indice >= lista->quantidade) {
        return maior;
    }

    if (lista->vetor[indice] > maior) {
        maior = lista->vetor[indice];
    }

    return buscar_maior_recursivo_aux(lista, indice + 1, maior);
}

int buscar_maior_recursivo(LISTA* lista) {
    return buscar_maior_recursivo_aux(lista, 1, lista->vetor[0]);
}

int buscar_menor_iterativo(LISTA* lista) {
    int i;
    int menor = lista->vetor[0];
    for (i = 1; i < lista->quantidade; i++) {
        if (lista->vetor[i] < menor) {
            menor = lista->vetor[i];
        }
    }
    return menor;
}

int buscar_menor_recursivo_aux(LISTA* lista, int indice, int menor) {
    if (indice >= lista->quantidade) {
        return menor;
    }

    if (lista->vetor[indice] < menor) {
        menor = lista->vetor[indice];
    }

    return buscar_menor_recursivo_aux(lista, indice + 1, menor);
}

int buscar_menor_recursivo(LISTA* lista) {
    return buscar_menor_recursivo_aux(lista, 1, lista->vetor[0]);
}

int soma_elementos_iterativo(LISTA* lista) {
    int i;
    int soma = 0;
    for (i = 0; i < lista->quantidade; i++) {
        soma += lista->vetor[i];
    }
    return soma;
}

int soma_elementos_recursivo_aux(LISTA* lista, int indice, int soma) {
    if (indice >= lista->quantidade) {
        return soma;
    }

    soma += lista->vetor[indice];
    return soma_elementos_recursivo_aux(lista, indice + 1, soma);
}

int soma_elementos_recursivo(LISTA* lista) {
    return soma_elementos_recursivo_aux(lista, 1, lista->vetor[0]);
}

int produto_elementos_iterativo(LISTA* lista) {
    int i;
    int produto = 1;
    for (i = 0; i < lista->quantidade; i++) {
        produto *= lista->vetor[i];
    }
    return produto;
}

int produto_elementos_recursivo_aux(LISTA* lista, int indice, int produto) {
    if (indice >= lista->quantidade) {
        return produto;
    }

    produto *= lista->vetor[indice];
    return produto_elementos_recursivo_aux(lista, indice + 1, produto);
}

int produto_elementos_recursivo(LISTA* lista) {
    return produto_elementos_recursivo_aux(lista, 1, lista->vetor[0]);
}
