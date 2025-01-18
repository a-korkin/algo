#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

typedef struct node {
    int value;
    struct node *next;
} node;

typedef struct {
    node *head;
    node *tail;
    int size;
} llist;

llist *ll_init(void);
node *ll_create_node(int value);
void ll_push(llist *list, int value);
void ll_show(llist *list);
int ll_pop(llist *list);
void ll_insert_at(llist *list, int idx, int value);
void ll_remove_at(llist *list, int idx);

#endif //__LINKED_LIST_H

