#ifndef DEQUE_H
#define DEQUE_H

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct Deque {
    Node* front;
    Node* rear;
} Deque;

Deque* createDeque();
int isEmpty(Deque* deque);
void pushFront(Deque* deque, int data);
void pushRear(Deque* deque, int data);
int popFront(Deque* deque);
int popRear(Deque* deque);
void printDeque(Deque* deque);

#endif