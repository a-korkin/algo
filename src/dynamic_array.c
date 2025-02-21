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
    printf("len: %d, cap: %d\n", da->len, da->cap);
    for (i = 0; i < da->len; i++) {
        printf("%3d: %d\n", i+1, *(da->data+i));
    }
}

void da_append(dynamic_array *da, int value) {
    if (da->len < da->cap) {
        da->len++;
        *(da->data+da->len-1) = value;
        return;
    }
    int max_size = 1024;
    if (da->cap < max_size) {
        da->cap *= 2;
    } else {
        da->cap += da->cap * .25;
    }
    int *new_data = (int *)malloc(sizeof(int) * (da->cap));
    if (new_data == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory for data");
        exit(1);
    }
    int i;
    for (i = 0; i < da->len; i++) {
        *(new_data+i) = *(da->data+i);
    }
    da->len++;
    *(new_data+(da->len-1)) = value;
    free(da->data);
    da->data = new_data;
}
