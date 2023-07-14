#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

Deque* createDeque() {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    deque->front = NULL;
    deque->rear = NULL;
    return deque;
}

int isEmpty(Deque* deque) {
    return deque->front == NULL;
}

void pushFront(Deque* deque, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (isEmpty(deque)) {
        deque->front = newNode;
        deque->rear = newNode;
    } else {
        newNode->next = deque->front;
        deque->front->prev = newNode;
        deque->front = newNode;
    }
}

void pushRear(Deque* deque, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (isEmpty(deque)) {
        deque->front = newNode;
        deque->rear = newNode;
    } else {
        newNode->prev = deque->rear;
        deque->rear->next = newNode;
        deque->rear = newNode;
    }
}

int popFront(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty.\n");
        return -1;
    }

    Node* frontNode = deque->front;
    int data = frontNode->data;

    if (deque->front == deque->rear) {
        deque->front = NULL;
        deque->rear = NULL;
    } else {
        deque->front = deque->front->next;
        deque->front->prev = NULL;
    }

    free(frontNode);
    return data;
}

int popRear(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty.\n");
        return -1;
    }

    Node* rearNode = deque->rear;
    int data = rearNode->data;

    if (deque->front == deque->rear) {
        deque->front = NULL;
        deque->rear = NULL;
    } else {
        deque->rear = deque->rear->prev;
        deque->rear->next = NULL;
    }

    free(rearNode);
    return data;
}

void printDeque(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty.\n");
        return;
    }

    Node* current = deque->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}