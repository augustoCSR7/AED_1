#ifndef HASH_H
#define HASH_H

#define SIZE 10

typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

typedef struct HashTable {
    Node* array[SIZE];
} HashTable;

HashTable* createHashTable();
Node* createNode(int key, int value);
void insert(HashTable* hashTable, int key, int value);
int search(HashTable* hashTable, int key);
void removeNode(HashTable* hashTable, int key);
void display(HashTable* hashTable);
void destroyHashTable(HashTable* hashTable);

#endif  // HASH_H