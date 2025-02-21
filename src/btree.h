#ifndef BTREE_H
#define BTREE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node_t {
    int value;
    struct node_t *left;
    struct node_t *right;
} node_bt;

typedef struct btree_t {
    node_bt *root;
    int len;
} btree;

btree *bt_init(int value);
void bt_add(btree *bt, int value);
void bt_show(btree *bt);

#endif //BTREE_H
