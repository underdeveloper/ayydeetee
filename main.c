#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "queue.h"

int main() {
    Stack stk_A = stack();
    push(&stk_A, 5);
    pop(&stk_A);

    Queue q_B = queue();
    enqueue(&q_B, 'A');
    
    return 0;
}