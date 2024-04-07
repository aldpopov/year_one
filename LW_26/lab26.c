#include <stdio.h>
#include <string.h>
#include "stack_list.h"


int get_int(void) {
    int num;
    
    while (1) {
        printf("Enter value: ");
        if (scanf("%d", &num) == 1) {
            break;
        } else {
            printf("Invalid input. Please enter an integer.\n");
            while(getchar() != '\n');
        }
    }
    
    return num;
}

int main()
{
    int value;
    Stack *s = stack_create();
    Stack *s_2 = stack_create();
    Stack *r = stack_create();
    char ans[100];
    printf("Type y between values to update your first stack. Type e to start working with second stack.\n");
    while (1) {
        scanf("%s", ans);
        if (strcmp(ans, "y") == 0) {
            value = get_int();
            stack_push(s, value);

        }
        if (strcmp(ans, "p") == 0) {
            stack_print(s);
        }
        if (strcmp(ans, "e") == 0) {
            break;
        }
    }
    printf("Type y between values to update your second stack. Type e to see sorted third stack.\n");
    while (1) {
        scanf("%s", ans);
        if (strcmp(ans, "y") == 0) {
            value = get_int();
            stack_push(s_2, value);

        }
        if (strcmp(ans, "p") == 0) {
            stack_print(s_2);
        }
        if (strcmp(ans, "e") == 0) {
            printf("Sorted new stack:\n");
            break;
        }
    }
    *r = merge_sort(s, s_2);
    stack_print(r);
    stack_destroy(r);

    return 0;
}