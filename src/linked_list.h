#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

typedef struct node {
    int value;
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
int pop(llist_t *list);
void insert_at(llist_t *list, int idx, int value);

#endif //__LINKED_LIST_H

