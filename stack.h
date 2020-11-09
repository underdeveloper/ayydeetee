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
bool empty(Stack stk);

/* Pushes an item on top of stk. */
void push(Stack stk, int new_dat);

/* Pops the top item of stk. */
void pop(Stack stk);

/* Returns the top item of stk. */
int peek(Stack stk);

#endif