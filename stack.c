#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

Stack stack() {
    Stack new_stk;
    new_stk.top = NULL;
    return new_stk;
};

bool empty_stk(Stack stk) {
    return (stk.top == NULL);
}

void push(Stack *stk, int new_data) {
    stk_item *new_item;
    new_item = (stk_item *)malloc(sizeof(stk_item));

    new_item->data = new_data;
    new_item->below = stk->top;
    stk->top = new_item;
    printf("Pushed %d on top of the stack.\n", new_data);
}

int pop(Stack *stk) {
    if (empty_stk(*stk)) {
        printf("Tried to pop stack, however stack was empty.\n");
        return -1;
    } else {
        int old_top_data = stk->top->data;
        stk_item *new_top = stk->top->below;
        free(stk->top);
        stk->top = new_top;

        printf("Stack popped.\n");
        return old_top_data;
    };
}

int peek(Stack *stk) {
    if (empty_stk(*stk)) {
        printf("Tried to peek the top of the stack, however stack was empty.\n");
        return -1;
    } else {
        return (stk->top->data);
    };
}