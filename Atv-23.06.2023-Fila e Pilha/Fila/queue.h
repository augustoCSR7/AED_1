#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
    int capacity;
    int size;
    int front;
    int rear;
    int *elements;
} Queue;

Queue *createQueue(int capacity);
void enqueue(Queue *queue, int item);
int dequeue(Queue *queue);
int front(Queue *queue);
int rear(Queue *queue);
int isEmpty(Queue *queue);
int isFull(Queue *queue);
void printQueue(Queue *queue);
void destroyQueue(Queue *queue);

#endif