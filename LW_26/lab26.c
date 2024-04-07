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
    Stack *t_stack = stack_create();
    
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
    
    while(!stack_is_empty(s) && !stack_is_empty(s_2)) {
        if(s->head->data >= s_2->head->data) {
            stack_push(t_stack, s->head->data);
            stack_pop(s);
        } else if(s->head->data < s_2->head->data) {
            stack_push(t_stack, s_2->head->data);
            stack_pop(s_2);
        }
    }

    while(!stack_is_empty(s) && stack_is_empty(s_2)) {
        stack_push(t_stack, s->head->data);
        stack_pop(s);
    }
    
    while(stack_is_empty(s) && !stack_is_empty(s_2)) {
        stack_push(t_stack, s_2->head->data);
        stack_pop(s_2);
    }
    
    Stack *r_stack = stack_create();

    while (!stack_is_empty(t_stack)) {
        stack_push(r_stack, t_stack->head->data);
        stack_pop(t_stack);
    }
    free(t_stack);
    stack_print(r_stack);
    stack_destroy(r_stack);
    stack_destroy(s);
    stack_destroy(s_2);
    return 0;
}
