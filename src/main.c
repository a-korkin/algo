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
    printf("            1) add      2) show\n");
    printf("            3) push     4) pop\n");
    printf("-----------------------------------------------\n");
}

void demo_ll(void) {
    int value, option;
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

