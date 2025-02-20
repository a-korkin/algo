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
        printf("%02d: %d\n", i+1, *(da->data+i));
    }
}

void da_append(dynamic_array *da, int value) {
    int *new_data = (int *)malloc(sizeof(int) * (da->len + 1));
    if (new_data == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory for data");
        exit(1);
    }
    int i;
    for (i = 0; i < da->len; i++) {
        *(new_data+i) = *(da->data+i);
    }
    da->len++;
    da->cap++;
    *(new_data+(da->len-1)) = value;
    free(da->data);
    da->data = new_data;
}
