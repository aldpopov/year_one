#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef int Item;

typedef struct stacknode {
    Item data;
    struct stacknode *next;
} StackNode;

typedef struct {
    StackNode *head;
} Stack;

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
}

void stack_print(Stack *s)
{
    StackNode *marker = s->head;

    while(marker != NULL) {
        printf("%d\n", marker->data);
        marker = marker->next;
    }
    free(marker);
}

void stack_reverse(Stack *s)
{
    Stack *temp_stack = stack_create();

    while (!stack_is_empty(s)) {
        stack_push(temp_stack, s->head->data);
        stack_pop(s);
    }
    *s = *temp_stack;
    stack_destroy(temp_stack);
}

Stack merge_sort(Stack *s, Stack *s_2)
{
    Stack *res_stack = stack_create();

    while(!stack_is_empty(s) && !stack_is_empty(s_2)) {
        if(s->head->data >= s_2->head->data) {
            stack_push(res_stack, s->head->data);
            stack_pop(s);
        } else if(s->head->data < s_2->head->data) {
            stack_push(res_stack, s_2->head->data);
            stack_pop(s_2);
        }
    }

    while(!stack_is_empty(s) && stack_is_empty(s_2)) {
        stack_push(res_stack, s->head->data);
        stack_pop(s);
    }
    
    while(stack_is_empty(s) && !stack_is_empty(s_2)) {
        stack_push(res_stack, s_2->head->data);
        stack_pop(s_2);
    }

    stack_reverse(res_stack);
    return *res_stack;
}

#endif
