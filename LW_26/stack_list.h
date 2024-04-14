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

Stack *stack_create();
StackNode *insert_stack_node(StackNode *parent, Item value);
void stack_push(Stack *s, Item value);
void stack_pop(Stack *s);
bool stack_is_empty(Stack *s);
void stack_destroy(Stack *s);
void stack_print(Stack *s);
int stack_size(Stack *s);
Stack *stack_merge(Stack *s, Stack *s_2, Stack *res_stack);
void stack_merge_sort(Stack *r);

#endif
