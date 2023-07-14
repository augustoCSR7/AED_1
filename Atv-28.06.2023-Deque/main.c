#include <stdio.h>
#include "deque.h"

int main() {
    Deque* deque = createDeque();

    pushFront(deque, 1);
    pushFront(deque, 2);
    pushRear(deque, 3);
    pushRear(deque, 4);

    printf("Deque: ");
    printDeque(deque);

    int front = popFront(deque);
    printf("Popped front element: %d\n", front);

    int rear = popRear(deque);
    printf("Popped rear element: %d\n", rear);

    printf("Deque after popping: ");
    printDeque(deque);

    return 0;
}