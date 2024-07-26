#ifndef __DOUBLE_LINKED_LIST_H
#define __DOUBLE_LINKED_LIST_H

typedef struct node {
    int value;
    struct node *prev;
    struct node *next;
} node_t;

typedef struct {
    node_t *head;
    node_t *tail;
    int size;
} llist_t;

llist_t *init(void);
node_t *create_node(int value);
void push(llist_t *list, int value);
void show(llist_t *list);

#endif //__DOUBLE_LINKED_LIST_H

