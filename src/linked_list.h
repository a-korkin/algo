#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

typedef struct node {
    int value;
    struct node *next;
} node_t;

typedef struct {
    node_t *head;
    int size;
} llist_t;

#endif //__LINKED_LIST_H

