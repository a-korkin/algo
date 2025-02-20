#include "dynamic_array.h"

dynamic_array *da_init(int size) {
    dynamic_array *da = (dynamic_array *)malloc(sizeof(dynamic_array));
    if (da == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory for dynamic array");
        exit(1);
    }
    da->data = (int *)malloc(sizeof(int) * size);
    if (da->data == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory for data");
        exit(1);
    }
    da->len = da->cap = size;
    return da;
}

void da_show(dynamic_array *da) {
    int i;
    printf("values of dynamic array:\n");
    for (i = 0; i < da->len; i++) {
        printf("%02d: %d\n", i, *(da->data+i));
    }
}
void da_append(int v) {}
