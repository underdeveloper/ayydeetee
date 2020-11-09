#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {
    Stack stk_A = stack();
    if (empty(stk_A)) {
        printf("This stack is empty.\n");
    };
    push(stk_A, 5);
    if (empty(stk_A)) {
        printf("This stack is empty.\n");
    };
    return 0;
}