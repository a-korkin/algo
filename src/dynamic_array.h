#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stdlib.h>
#include <stdio.h>

typedef struct dynamic_array {
    int *data;
    int len;
    int cap;
} dynamic_array;

dynamic_array *da_init(int size);
void da_append(int v);
void da_show(dynamic_array *da);
#endif //DYNAMIC_ARRAY_H
