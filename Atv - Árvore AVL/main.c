#include <stdio.h>
#include "avl_tree.h"

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 22);
    root = insert(root, 18);
    root = insert(root, 46);
    root = insert(root, 12);
    root = insert(root, 80);

    printf("Árvore em pré-ordem: ");
    preOrder(root);
    printf("\n");

    printf("Árvore em em-ordem: ");
    inOrder(root);
    printf("\n");

    printf("Árvore em pós-ordem: ");
    postOrder(root);
    printf("\n");

    int valueToSearch = 12;
    struct Node* searchResult = search(root, valueToSearch);
    if (searchResult != NULL) {
        printf("%d encontrado na Árvore.\n", valueToSearch);
    } else {
        printf("%d não encontrado na Árvore.\n", valueToSearch);
    }

    return 0;
}
