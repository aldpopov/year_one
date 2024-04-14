#include <stdio.h>
#include <string.h>
#include "stack_list.h"

Stack *stack_create()
{
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->head = NULL;
    return s;
}

StackNode *insert_stack_node(StackNode *parent, Item value)
{
    StackNode *new_node = (StackNode *) malloc(sizeof(StackNode));

    new_node->data = value;
    new_node->next = parent;

    return new_node;
}

void stack_push(Stack *s, Item value)
{
    s->head = insert_stack_node(s->head, value);
}

void stack_pop(Stack *s)
{
    StackNode *tmp = s->head->next;
    free(s->head);
    s->head = tmp;
}

bool stack_is_empty(Stack *s)
{
    return (s->head == NULL);
}

void stack_destroy(Stack *s)
{
    while (!stack_is_empty(s))
        stack_pop(s);
    if(stack_is_empty(s))
    	free(s);
}

void stack_print(Stack *s)
{
    StackNode *marker = s->head;

    while(marker != NULL) {
        printf("%d\n", marker->data);
        marker = marker->next;
    }
}

int stack_size(Stack *s)
{
    StackNode *marker = s->head;
    int count = 0;

    while(marker != NULL) {
        count++;
        marker = marker->next;
    }
    
    return count;
}

Stack *stack_merge(Stack *s, Stack *s_2, Stack *res_stack)
{
    
    while (!stack_is_empty(s) && !stack_is_empty(s_2)) {
    	if(s->head->data >= s_2->head->data) {
    		stack_push(res_stack, s->head->data);
    		stack_pop(s);
    	} else if(s->head->data < s_2->head->data) {
    		stack_push(res_stack, s_2->head->data);
    		stack_pop(s_2);
    	}
    }
    
    while (!stack_is_empty(s) && stack_is_empty(s_2)) {
    	stack_push(res_stack, s->head->data);
    	stack_pop(s);
    }
    
    while (stack_is_empty(s) && !stack_is_empty(s_2)) {
    	stack_push(res_stack, s_2->head->data);
    	stack_pop(s_2);
    }
    
    return res_stack;
}

void stack_merge_sort(Stack *r)
{
    int size = stack_size(r);
    if (size < 2) return;
    int mid = stack_size(r) / 2;
    Stack *left = stack_create();
    Stack *right = stack_create();
    
    for (int i = mid; i < size; i++) {
    	stack_push(right, r->head->data);
    	stack_pop(r);
    }
    
    for (int i = 0; i < mid; i++) {
    	stack_push(left, r->head->data);
    	stack_pop(r);
    }
    
    stack_merge_sort(right);
    stack_merge_sort(left);
    
    Stack *sorted = stack_create();
    stack_merge(left, right, sorted);
    
    while (!stack_is_empty(sorted)) {
    	stack_push(r, sorted->head->data);
    	stack_pop(sorted);
    }
    
    stack_destroy(left);
    stack_destroy(right);
    stack_destroy(sorted);
}

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
    
    stack_merge_sort(s);
    stack_print(s);
    stack_destroy(s);
}
