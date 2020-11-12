#ifndef QUEUE_H
#define QUEUE_H

typedef struct q_item {
    char data;
    struct q_item *next;
} q_item;

typedef struct Queue {
    q_item *front;
    q_item *rear;
} Queue;

/* Initializes an empty queue */
Queue queue();

/* Returns true when queue is empty. */
bool empty_q(Queue*);

/* Enqueues an item at the rear of queue. */
void enqueue(Queue*, char);

/* Dequeues the item at the front of queue, also returns the dequeued item. */
char dequeue(Queue*);



#endif