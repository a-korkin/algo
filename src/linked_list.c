#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

llist *ll_init(void) {
    llist *list = (llist *)malloc(sizeof(llist));
    if (list == NULL) {
        fprintf(stderr, "Error: failed allocate memory for linked list\n");
        exit(1);
    }
    list->head = list->tail = NULL;
    return list;
}

node *ll_create_node(int value) {
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL) {
        fprintf(stderr, "Error: failed allocate memory for node\n");
        exit(1);
    }
    n->next = NULL;
    n->value = value;
    return n;
}

void ll_push(llist *list, int value) {
    node *last;
    node *new_node = ll_create_node(value);
    // if (list->head == NULL) 
    //     list->head = n;
    // if (list->tail == NULL)
    //     list->tail = n;
    //
    // if (list->tail != NULL) 
    //     list->tail->next = n;
    //
    // list->tail = n;
    // list->size++;

    if (list->size == 0) {
        list->head = list->tail = new_node;
    } else {
        last = list->tail;
        list->tail = new_node;
        last->next = new_node;
    }
    list->size++;
}

void ll_show(llist *list) {
    if (list->size == 0) {
        printf("list is empty\n");
    }
    node *node = list->head;
    while (node) {
        printf("size: %d, node value: %d\n", list->size, node->value);
        node = node->next;
    }
}

int ll_pop(llist *list) {
    int result = 0;
    if (list->size == 0) return 0;

    if (list->size == 1) {
        node *node = list->head;
        result = node->value;
        list->head = list->tail = NULL;
        free(node);
        list->size--;
        return result;
    }

    node *prev = list->head;
    int i = 1;
    while (prev->next) {
        i++;
        if (i == list->size) {
            node *d = prev->next;
            result = d->value;
            prev->next = NULL;
            list->size--;
            free(d);
            return result;
        }
        prev = prev->next;
    }
    return result;
}

void ll_insert_at(llist *list, int idx, int value);
void ll_remove_at(llist *list, int idx);
