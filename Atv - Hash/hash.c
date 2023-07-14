#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

HashTable* createHashTable() {
    HashTable* hashTable = (HashTable*)malloc(sizeof(HashTable));
    for (int i = 0; i < SIZE; i++) {
        hashTable->array[i] = NULL;
    }
    return hashTable;
}

Node* createNode(int key, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insert(HashTable* hashTable, int key, int value) {
    int index = key % SIZE;
    Node* newNode = createNode(key, value);

    if (hashTable->array[index] == NULL) {
        hashTable->array[index] = newNode;
    } else {
        Node* current = hashTable->array[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int search(HashTable* hashTable, int key) {
    int index = key % SIZE;

    if (hashTable->array[index] == NULL) {
        return -1;  // Element not found
    } else {
        Node* current = hashTable->array[index];
        while (current != NULL) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;  // Element not found
    }
}

void removeNode(HashTable* hashTable, int key) {
    int index = key % SIZE;

    if (hashTable->array[index] == NULL) {
        return;  // Element not found
    } else {
        Node* current = hashTable->array[index];
        Node* previous = NULL;

        while (current != NULL) {
            if (current->key == key) {
                if (previous == NULL) {
                    hashTable->array[index] = current->next;
                } else {
                    previous->next = current->next;
                }
                free(current);
                return;
            }
            previous = current;
            current = current->next;
        }
    }
}

void display(HashTable* hashTable) {
    for (int i = 0; i < SIZE; i++) {
        printf("[%d]: ", i);
        Node* current = hashTable->array[i];
        while (current != NULL) {
            printf("(%d, %d) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL\n");
    }
}

void destroyHashTable(HashTable* hashTable) {
    for (int i = 0; i < SIZE; i++) {
        Node* current = hashTable->array[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(hashTable);
}