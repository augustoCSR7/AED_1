#include <stdio.h>
#include "queue.h"

int main() {
    Queue *queue = createQueue(5);

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);

    printf("Fila: ");
    printQueue(queue);

    printf("Elemento removido: %d\n", dequeue(queue));
    printf("Frente da fila: %d\n", front(queue));
    printf("Fundo da fila: %d\n", rear(queue));

    destroyQueue(queue);

    return 0;
}