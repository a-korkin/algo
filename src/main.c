#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

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
    return 0;
}
