#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct llnode {
    int data;
    short index;
    struct lknode *next;
} llnode;

typedef struct LkList {
    llnode *head;
} LkList;

/* Initializes an empty linked list. */
LkList lklist();

/* Checks whether a list was empty. */
bool empty_ll(LkList);

/* Adds a new node to the front of the list. */
void add_to_front_ll(LkList*);


#endif