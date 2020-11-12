#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

int main() {
    LkList L1 = lklist(); // {}
    add_head_ll(&L1, 5); // {5}
    add_tail_ll(&L1, 6); // {5, 6}
    add_head_ll(&L1, 3); // {3, 5, 6}
    add_tail_ll(&L1, 4); // {3, 5, 6, 4}
    add_head_ll(&L1, 2); // {2, 3, 5, 6, 4}
    add_mid_ll(&L1, 10, 3); // {2, 3, 10, 5, 6, 4}
    add_mid_ll(&L1, 13, 100); // {2, 3, 10, 5, 6, 4, 13}
    print_ll(&L1);
    
    printf("At index 400, we find the node %d.\n", return_loc_ll(&L1, 400));
    getchar();
    return 0;
}