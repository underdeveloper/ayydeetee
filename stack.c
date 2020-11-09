#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

Stack stack() {
    Stack new_stk;
    new_stk.top = NULL;
    return new_stk;
};

bool empty(Stack stk) {
    return (stk.top == NULL);
}

void push(Stack stk, int new_dat) {
    stk_item *new_item = (stk_item *)malloc(sizeof(stk_item));
    new_item->below = stk.top;
    new_item->data = new_dat;
    stk.top = new_item;
}