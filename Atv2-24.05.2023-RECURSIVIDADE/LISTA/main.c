#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

int main() {
    srand(time(NULL));

    // Perguntar ao usuário o tamanho de uma LISTA
    int tamanho_lista;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanho_lista);

    // Criar a lista e preencher os valores de forma não ordenada
    LISTA* lista = criar_lista(tamanho_lista);
    int i;
    for (i = 0; i < tamanho_lista; i++) {
        inserir_elemento(lista, rand() % 100);
    }

    // Imprimir todos os elementos da lista
    printf("Lista: ");
    imprimir_lista_iterativo(lista);

    // Perguntar para o usuário sobre um número que ele quer buscar na lista
    int elemento_busca;
    printf("Digite o número que deseja buscar na lista: ");
    scanf("%d", &elemento_busca);

    // Mostrar o resultado da busca sequencial
    int indice_sequencial = buscar_sequencial(lista, elemento_busca);
    if (indice_sequencial != -1) {
        printf("O número %d foi encontrado na posição %d (busca sequencial).\n", elemento_busca, indice_sequencial);
    } else {
        printf("O número %d não foi encontrado na lista (busca sequencial).\n", elemento_busca);
    }

    // Criar uma segunda lista de tamanho 30 e preencher seus elementos de forma ordenada
    LISTA* segunda_lista = criar_lista(30);
    for (i = 0; i < 30; i++) {
        inserir_elemento_ordenado(segunda_lista, i * 2);
    }

    // Imprimir todos os elementos da segunda lista
    printf("Segunda Lista: ");
    imprimir_lista_iterativo(segunda_lista);

    // Perguntar para o usuário sobre um número que ele quer buscar na segunda lista
    printf("Digite o número que deseja buscar na segunda lista: ");
    scanf("%d", &elemento_busca);

    // Mostrar o resultado da busca sequencial, busca sequencial ordenada e busca binária
    indice_sequencial = buscar_sequencial(segunda_lista, elemento_busca);
    if (indice_sequencial != -1) {
        printf("O número %d foi encontrado na posição %d (busca sequencial).\n", elemento_busca, indice_sequencial);
    } else {
        printf("O número %d não foi encontrado na lista (busca sequencial).\n", elemento_busca);
    }

    int indice_sequencial_ordenado = buscar_sequencial_ordenado(segunda_lista, elemento_busca);
    if (indice_sequencial_ordenado != -1) {
        printf("O número %d foi encontrado na posição %d (busca sequencial ordenada).\n", elemento_busca, indice_sequencial_ordenado);
    } else {
        printf("O número %d não foi encontrado na lista (busca sequencial ordenada).\n", elemento_busca);
    }

    int indice_binaria_iterativa = busca_binaria_iterativa(segunda_lista, elemento_busca);
    if (indice_binaria_iterativa != -1) {
        printf("O número %d foi encontrado na posição %d (busca binária iterativa).\n", elemento_busca, indice_binaria_iterativa);
    } else {
        printf("O número %d não foi encontrado na lista (busca binária iterativa).\n", elemento_busca);
    }

    int indice_binaria_recursiva = busca_binaria_recursiva(segunda_lista, elemento_busca);
    if (indice_binaria_recursiva != -1) {
        printf("O número %d foi encontrado na posição %d (busca binária recursiva).\n", elemento_busca, indice_binaria_recursiva);
    } else {
        printf("O número %d não foi encontrado na lista (busca binária recursiva).\n", elemento_busca);
    }

    // Imprimir o maior elemento da primeira lista
    int maior_elemento = buscar_maior_iterativo(lista);
    printf("Maior elemento da primeira lista: %d\n", maior_elemento);

    // Imprimir o menor elemento da primeira lista
    int menor_elemento = buscar_menor_iterativo(lista);
    printf("Menor elemento da primeira lista: %d\n", menor_elemento);

    // Imprimir a soma dos elementos da primeira lista
    int soma = soma_elementos_iterativo(lista);
    printf("Soma dos elementos da primeira lista: %d\n", soma);

    // Imprimir o produto dos elementos da primeira lista
    int produto = produto_elementos_iterativo(lista);
    printf("Produto dos elementos da primeira lista: %d\n", produto);

    // Liberar a memória alocada para as listas
    liberar_lista(lista);
    liberar_lista(segunda_lista);

    return 0;
}
