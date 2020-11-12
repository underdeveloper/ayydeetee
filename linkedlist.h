#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct llnode {
    int data;
    struct llnode *next;
} llnode;

typedef struct LkList {
    llnode *head;
} LkList;

/* Initializes an empty linked list. */
LkList lklist();

/* Checks whether a list was empty. */
bool empty_ll(LkList*);

/* Adds a new node to the beginning of the list. */
void add_head_ll(LkList*, int);

/* Adds a new node to the end of the list. */
void add_tail_ll(LkList*, int);

/* Adds a new node to a specific location within the list. */
void add_mid_ll(LkList*, int, short);

/* Returns the data of a node in a specific location within the list. */
int return_loc_ll(LkList*, short);

/* Displays every data within the list. */
void print_ll(LkList*);

#endif