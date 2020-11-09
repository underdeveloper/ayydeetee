#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {
    Stack stk_A = stack();

    if (empty_stk(stk_A)) {
        printf("This stack is empty.\n");
    } else {
        printf("This stack is not empty.\n");
    };

    push(&stk_A, 5);

    if (empty_stk(stk_A)) {
        printf("This stack is empty.\n");
    } else {
        printf("This stack is not empty. The top of the stack is %d.\n", peek(&stk_A));
    };

    pop(&stk_A);
    
    if (empty_stk(stk_A)) {
        printf("This stack is empty.\n");
    } else {
        printf("This stack is not empty. The top of the stack is %d.\n", peek(&stk_A));
    };
    return 0;
}