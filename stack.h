#ifndef STACK_H
#define STACK_H

typedef struct stk_item {
    int data;
    struct stk_item *below;
} stk_item;

typedef struct Stack {
    stk_item *top;
} Stack;

/* Initializes an empty stack. */
Stack stack(); 

/* Returns true when stk is empty. */
bool empty(Stack);

/* Pushes an item on top of stk. */
void push(Stack*, int);

/* Pops the top item of stk, also returns the popped item.*/
int pop(Stack*);

/* Returns the top item of stk. */
int peek(Stack*);

#endif