#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"

BSTree bst() {
    BSTree new_bst;
    new_bst.root = NULL;
    return new_bst;
}

bool skew_left_bst_node(tree_node *node) {
    return (node->left != NULL && node->right == NULL);
}

bool skew_right_bst_node(tree_node *node) {
    return (node->left == NULL && node->right != NULL);
}

bool leaf_bst_node(tree_node *node) {
    return (node->left == NULL && node->right == NULL);
}

bool empty_bst(BSTree *bst) {
    return bst->root == NULL;
}

bool skew_left_bst(BSTree *bst) {
    tree_node *crawler = bst->root;
    bool flag = true;
    while (crawler != NULL && flag) {
        printf("Loop.\n");
        if (skew_left_bst_node(crawler)) {
            crawler = crawler->left;
        } else {
            flag = false;
        }
    }
    return flag;
}

bool skew_right_bst(BSTree *bst) {
    tree_node *crawler = bst->root;
    bool flag = true;
    while (crawler != NULL && flag) {
        if (skew_right_bst_node(crawler)) {
            crawler = crawler->right;
        } else {
            flag = false;
        }
    }
    return flag;
}

bool search_key_bst(BSTree *bst, int key) {
    tree_node *crawler = bst->root;
    bool flag = true;
    while (crawler->key != key && flag) {
        if (crawler->key > key) {
            crawler = crawler->left;
        } else {
            crawler = crawler->right;
        }
        if (crawler == NULL) {
            flag = false;
        }
    }
    return flag;
}

void insert_bst(BSTree *bst, int key, int value) {
    tree_node *crawler = bst->root;
    tree_node *new_node = (tree_node *)malloc(sizeof(tree_node));
    new_node->key = key;
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = NULL;
    if (empty_bst(bst)) {
        bst->root = new_node;
    }
    else {
        while (new_node->parent == NULL) {
            if (crawler->key > key) {
                crawler = crawler->left;
            } else {
                crawler = crawler->right;
            }
            if (crawler == NULL) {
                if (crawler->parent->key > key) {
                    crawler->parent->left = new_node;
                } else {
                    crawler->parent->right = new_node;
                }
                new_node->parent = crawler->parent;
            }
        }
    }
}