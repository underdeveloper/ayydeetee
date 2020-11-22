#ifndef BST_H
#define BST_H

// This binary search tree implementation does not allow duplicate keys.

typedef struct tree_node {
    int key;
    int value;
    struct tree_node *left, *right, *parent;
} tree_node;

typedef struct BSTree {
    tree_node *root;
} BSTree; 

/* Creates an empty BST. */
BSTree bst();

/* Returns true when the node only has a left branch. */
bool skew_left_bst_node(tree_node*);

/* Returns true when the node only has a right branch. */
bool skew_right_bst_node(tree_node*);

/* Returns true when the node has no more branches, i.e. it is a leaf. */
bool leaf_bst_node(tree_node*);

/* Returns true when the tree is empty. */
bool empty_bst(BSTree*);

/* Returns true when the tree skews left. */
bool skew_left_bst(BSTree*);

/* Returns true when the tree skews right. */
bool skew_right_bst(BSTree*);

/* Traverses through the tree, depth first, to find whether a key exists or not. */
bool search_key_bst(BSTree*, int);

/* Inserts a new value into the BST, according to a key. */
void insert_bst(BSTree*, int, int);

/* Traverses through the tree, depth first, to find whether a value exists or not. */
bool depth_first_traverse_bst(BSTree*, int);

/* Deletes a certain value from the BST. 
   Returns 1 if successfully done, 0 if the value is not found within the tree. */ 
int delete_bst(BSTree*, int);

/* Returns the key of a value within the BST. */
int key_from_value_bst(BSTree*, int);

/* Returns the value of a key of the BST. */
int value_from_key_bst(BSTree*, int);

#endif