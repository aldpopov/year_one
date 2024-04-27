#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} List;

List *list_create();
Node *insert_h(Node *parent, int value);
Node *insert_t(Node *parent, int value);
void list_push(List *s, int value);
void list_print(List *s);
int list_size(List *s);
void list_pop_h(List *s);
bool list_is_empty(List *s);
void list_destroy(List *s);
void list_delete(List *s, int index);
void middle_delete(List *s, int k);

#endif