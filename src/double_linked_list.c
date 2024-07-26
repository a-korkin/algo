#include <stdlib.h>
#include <stdio.h>
#include "double_linked_list.h"

llist_t *init(void) {
    llist_t *list = (llist_t *) malloc(sizeof(llist_t));
    if (!list) {
        fprintf(stderr, "Error: couldn't allocate memory for list\n");
        exit(1);
    }
    list->head = list->tail = NULL;
    list->size = 0;
    return list;
}
node_t *create_node(int value) {
    node_t *node = (node_t *) malloc(sizeof(node_t));
    if (!node) {
        fprintf(stderr, "Error: couldn't allocate memory for node\n");
        exit(1);
    }
    node->prev = node->next = NULL;
    node->value = value;
    return node;
}

void check_list_exists(llist_t *list) {
    if (!list) {
        fprintf(stderr, "Error: list is not initialized\n");
        exit(1);
    }
}

void push(llist_t *list, int value) {
    check_list_exists(list);
    node_t *node = create_node(value);
    if (!list->head) {
        list->head = node;
    }
    if (list->tail) {
        list->tail->next = node;
    }
    list->tail = node;
    list->size++;
}

void show(llist_t *list) {
    check_list_exists(list);
    int i;
    node_t *node = list->head;
    for (i = 0; i < list->size; i++) {
        fprintf(stdout, "%2d: value = %d\n", i, node->value);
        node = node->next;
    }
}

