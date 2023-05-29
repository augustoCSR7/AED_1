#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int* vetor;
    int quantidade;
} LISTA;

LISTA* criar_lista(int tamanho);
void liberar_lista(LISTA* lista);
void inserir_elemento(LISTA* lista, int elemento);
void inserir_elemento_ordenado(LISTA* lista, int elemento);
void imprimir_lista_iterativo(LISTA* lista);
int buscar_sequencial(LISTA* lista, int elemento);
int buscar_sequencial_ordenado(LISTA* lista, int elemento);
int busca_binaria_iterativa(LISTA* lista, int elemento);
int busca_binaria_recursiva(LISTA* lista, int elemento);
void imprimir_lista_recursivo(LISTA* lista);
int buscar_maior_iterativo(LISTA* lista);
int buscar_maior_recursivo(LISTA* lista);
int buscar_menor_iterativo(LISTA* lista);
int buscar_menor_recursivo(LISTA* lista);
int soma_elementos_iterativo(LISTA* lista);
int soma_elementos_recursivo(LISTA* lista);
int produto_elementos_iterativo(LISTA* lista);
int produto_elementos_recursivo(LISTA* lista);

#endif
