#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"
#include "dynamic_array.h"

int main(void) {
    /*
     * linked list
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
    */

    printf("hello world\n");

    dynamic_array *da = da_init(7);
    *(da->data+2) = 33;
    da_show(da);
    da_append(da, 5);
    da_show(da);

    return 0;
}
