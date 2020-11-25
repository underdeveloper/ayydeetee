#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

Queue queue() {
    Queue new_q;
    new_q.front = NULL;
    new_q.rear = NULL;
    return new_q;
}

bool empty_q(Queue *q) {
    return (q->front == NULL);
}

void enqueue(Queue *q, char new_data) {
    q_item *new_item;
    new_item = (q_item *)malloc(sizeof(q_item));

    new_item->data = new_data;
    new_item->next = NULL;
    if (empty_q(q)) {
        q->front = new_item;
        q->rear = new_item;
    } else {
        q->rear->next = new_item;
        q->rear = new_item;
    };
    printf("Enqueued '%c' at the rear of the queue.\n", new_data);
}

char dequeue(Queue *q) {
    if (empty_q(q)) {
        printf("Tried to dequeue, however queue was empty.\n");
        return ' ';
    } else {
        char old_front_data = q->front->data;
        q_item *new_front = q->front->next;
        free(q->front);
        q->front = new_front;
        
        printf("Dequeued from queue.\n");
        return old_front_data;
    }
}
