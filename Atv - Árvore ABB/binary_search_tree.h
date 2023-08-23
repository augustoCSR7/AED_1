#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

// Estrutura do nó da Árvore
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Função para criar um novo nó
struct Node* createNode(int data);

// Função para inserir um valor na Árvore
struct Node* insert(struct Node* root, int data);

// Função para imprimir a Árvore usando percurso pré-ordem
void preOrder(struct Node* root);

// Função para imprimir a Árvore usando percurso em-ordem
void inOrder(struct Node* root);

// Função para imprimir a Árvore usando percurso pós-ordem
void postOrder(struct Node* root);

// Função para buscar um valor na Árvore
struct Node* search(struct Node* root, int data);

#endif
