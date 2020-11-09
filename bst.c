#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"

BSTree bst() {
    BSTree new_bst;
    new_bst.height = 0;
    new_bst.root = NULL;
    
    return new_bst;
}

bool empty_bst(BSTree binstr) {
    return (binstr.root == NULL);
}

// Not finished. Will do later.
bool search_key_bst(BSTree *binstr, int key) {
    tree_node *true_root = binstr->root;
    if (empty_bst(*binstr)) {
        return false;
    } else {
        tree_node *leaf = binstr->root;
        if (binstr->root->key == key) {
            return true;
        } else if (binstr->root->left == NULL){

        }
    }
}

void insert_bst(BSTree binstr) {
    return;
}