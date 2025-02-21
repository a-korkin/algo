#include "btree.h"

// typedef struct node_t {
//     int value;
//     node_t *left;
//     node_t *right;
// } node;
//
// typedef struct btree_t {
//     node_t *root;
// } btree;
//
//

node_bt *bt_create_node(int value) {
    node_bt *node = (node_bt *)malloc(sizeof(node_bt));
    if (node == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory for node");
        exit(1);
    }
    node->left = node->right = NULL;
    node->value = value;
    return node;
}

btree *bt_init(int value) {
    btree *bt = (btree *)malloc(sizeof(btree));
    if (bt == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory for btree");
        exit(1);
    }
    node_bt *root = bt_create_node(value);
    bt->root = root;
    bt->len = 1;

    return bt;
}

void bt_add(btree *bt, int value) {
    if (bt->root->value == value) {
        return;
    }
    node_bt *node = bt_create_node(value);
    if (value < bt->root->value) {
        if (bt->root->left == NULL) {
            bt->root->left = node;
            return;
        }
        node_bt *cur = bt->root->left;
        while (cur) {
        }
    }
}

void bt_show(btree *bt) {
    printf("len: %d\n", bt->len);
}

