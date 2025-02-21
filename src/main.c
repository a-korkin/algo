#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"
#include "dynamic_array.h"
#include "algo.h"

int main(void) {
    /*
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
    */

    int a[3] = {1,3,4};
    int b[4] = {2,5,7,8};
    int *c = merge_sorted_arrays(a, 3, b, 4);
    for (int i = 0; i < 3 + 4; i++) {
        printf("%d ", *(c + i));
    }
    printf("\n");
    free(c);

    return 0;
}
