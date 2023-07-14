#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue *createQueue(int capacity) {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->size = 0;
    queue->front = 0;
    queue->rear = -1;
    queue->elements = (int *)malloc(capacity * sizeof(int));
    return queue;
}

void enqueue(Queue *queue, int item) {
    if (isFull(queue)) {
        printf("A fila está cheia.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->elements[queue->rear] = item;
    queue->size++;
}

int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia.\n");
        return -1;
    }
    int item = queue->elements[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

int front(Queue *queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia.\n");
        return -1;
    }
    return queue->elements[queue->front];
}

int rear(Queue *queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia.\n");
        return -1;
    }
    return queue->elements[queue->rear];
}

int isEmpty(Queue *queue) {
    return (queue->size == 0);
}

int isFull(Queue *queue) {
    return (queue->size == queue->capacity);
}

void printQueue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia.\n");
        return;
    }
    int i = queue->front;
    int count = 0;
    while (count < queue->size) {
        printf("%d ", queue->elements[i]);
        i = (i + 1) % queue->capacity;
        count++;
    }
    printf("\n");
}

void destroyQueue(Queue *queue) {
    free(queue->elements);
    free(queue);
}