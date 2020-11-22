#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"

int main() {
    BSTree bst_a = bst();

    if (empty_bst(&bst_a)) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }

    insert_bst(&bst_a, 5, 2);
    
    if (empty_bst(&bst_a)) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
        printf("At root, value: %d, key: %d\n", bst_a.root->value, bst_a.root->key);
    }

    insert_bst(&bst_a, 7, 9);
    
    if (skew_left_bst(&bst_a)) {
        printf("Yes.\n");
        tree_node *crawler = bst_a.root;
    bool flag = true;
    while (crawler != NULL && flag) {
        printf("Loop.\n");
        if (skew_left_bst_node(crawler)) {
            crawler = crawler->left;
        } else {
            flag = false;
        }
    }
    tree_node *crawler = bst_a.root;
    bool flag = true;
    while (crawler != NULL)
    {
        printf("Loop.\n");
        if (skew_left_bst_node(crawler))
        {
            crawler = crawler->left;
        }
        else
        {
            flag = false;
        }
    }
        printf("At the furthest leaf, value: %d, key: %d\n", bst_a.root->value, bst_a.root->key);
    } else {
        printf("No.\n");
    }
}