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

/* Returns true when stack is empty. */
bool empty_stk(Stack);

/* Pushes an item on top of stack. */
void push(Stack*, int);

/* Pops the top item of stack, also returns the popped item.*/
int pop(Stack*);

/* Returns the top item of stack. */
int peek(Stack*);

#endif