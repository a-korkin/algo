#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"
#include "dynamic_array.h"

int main(void) {
    llist *list = ll_init();

    ll_push(list, 2);
    ll_push(list, 5);
    ll_push(list, 8);

    ll_show(list);

    ll_pop(list);
    ll_pop(list);
    // ll_pop(list);
    printf("==================\n");
    ll_show(list);

    free(list);

    dynamic_array *da = da_init(5);
    *(da->data+2) = 33;
    da_show(da);
    da_append(da, 5);
    da_show(da);
    da_append(da, 3);
    da_show(da);
    da_append(da, 7);
    da_show(da);
    da_append(da, 91);
    da_show(da);
    da_append(da, 3);
    da_show(da);
    da_append(da, 777);
    da_show(da);
    da_append(da, 1);
    da_show(da);
    da_append(da, 2);
    da_show(da);
    da_append(da, 3);
    da_show(da);
    da_append(da, 4);
    da_show(da);

    free(da);

    return 0;
}
