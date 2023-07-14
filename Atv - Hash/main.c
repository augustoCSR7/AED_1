#include <stdio.h>
#include "hash.h"

int main() {
    HashTable* hashTable = createHashTable();

    // Inserção de elementos na tabela de hash
    insert(hashTable, 5, 10);
    insert(hashTable, 15, 20);
    insert(hashTable, 25, 30);
    insert(hashTable, 35, 40);
    insert(hashTable, 45, 50);
    insert(hashTable, 55, 60);

    // Exibição dos elementos da tabela de hash
    display(hashTable);

    // Procura de um elemento na tabela de hash
    int keyToSearch = 15;
    int result = search(hashTable, keyToSearch);
    if (result != -1) {
        printf("Elemento encontrado: (%d, %d)\n", keyToSearch, result);
    } else {
        printf("Elemento não encontrado.\n");
    }

    // Remoção de um elemento da tabela de hash
    int keyToRemove = 25;
    removeNode(hashTable, keyToRemove);
    printf("Após a remoção do elemento %d:\n", keyToRemove);
    display(hashTable);

    // Liberação da memória alocada pela tabela de hash
    destroyHashTable(hashTable);

    return 0;
}