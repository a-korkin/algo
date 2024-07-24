#include <stdio.h>
#include "linked_list.h"

void show_menu(void) {
    printf("-----------------------------------------------\n");
    printf("Choice option for example:\n");
    printf("1) linked list\n");
    printf("-----------------------------------------------\n");
}

void show_options_ll(void) {
    printf("-----------------------------------------------\n");
    printf("1) push         2) show\n");
    printf("3) insert at    4) pop      5) remove at\n");
    printf("-----------------------------------------------\n");
}

void insert_ll(int *idx, int *value) {
    printf("Enter index and integer value: ");
    scanf("%d %d", idx, value);
}

void remove_ll(int *idx) {
    printf("Enter index: ");
    scanf("%d", idx);
}

void demo_ll(void) {
    int value, option, idx;
    llist_t *list = init();
    show_options_ll();
    while ((option = getchar()) && option != 'n' && option != EOF) {
        if (option == '\n') continue;
        switch (option) {
            case '1': 
                printf("Enter integer value: ");
                while (scanf("%d", &value) == 1) {
                    push(list, value);
                    printf("Enter integer value: ");
                    if ((option = getchar()) && option == '\n') continue;
                }
                break;
            case '2':
                show(list);
                break;
            case '3':
                insert_ll(&idx, &value);
                insert_at(list, idx, value);
                break;
            case '4':
                printf("Poped value: %d\n", pop(list));
                break;
            case '5':
                remove_ll(&idx);
                remove_at(list, idx);
                break;
            default: continue;
        }
        show_options_ll();
    }
}

int main(void) {
    int option;
    char ch;
    show_menu();
    while (scanf("%d", &option) != 1) {
        printf("Incorrect option\n");
        show_menu();
        if ((ch = getchar()) && ch == '\n') continue;
    }

    switch (option) {
        case 1:
            demo_ll();
            break;
        default: break;
    }

    return 0;
}

