#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

List *list_create() {
    List *s = (List *) malloc(sizeof(List));
    s->head = NULL;
    s->tail = NULL;
    return s;
}

Node *insert_h(Node *parent, int value)
{
    Node *new_node = (Node *) malloc(sizeof(Node));

    new_node->data = value;
    new_node->next = parent;

    return new_node;
}

Node *insert_t(Node *parent, int value) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;
    parent->next = new_node;
    return new_node;   
}

void list_push(List *s, int value)
{
    if(s->head == NULL) {
        s->head = s->tail = insert_h(s->head, value);
    } else {
        s->tail = insert_t(s->tail, value);
    }
}

void list_print(List *s) {
    Node *marker = s->head;
    while(marker != NULL) {
        printf("%d\n", marker->data);
        marker = marker->next;
    }
    free(marker);
}

int list_size(List *s) {
    Node *marker = s->head;
    int counter = 0;
    while(marker != NULL) {
        counter++;
        marker = marker->next;
    }
    free(marker);
    return counter;
}

void list_pop_h(List *s)
{
    Node *tmp = s->head->next;
    free(s->head);
    s->head = tmp;
}

bool list_is_empty(List *s)
{
    return (s->head == NULL);
}

void list_destroy(List *s)
{
    while (!list_is_empty(s))
        list_pop_h(s);
    if(list_is_empty(s))
        free(s);
}

void list_delete(List *s, int index) {
    if(index <= (list_size(s) - 1) && index > 0) {
        Node *target = s->head;
        for(int i = 0; i < index; i++) {
            target = target->next;   
        }
        Node *marker = s->head;
        while(marker->next != target) {
            marker = marker->next;
        }
        marker->next = target->next;
        free(target);
        if(index == list_size(s)) {
            s->tail = marker;
        }
    } else if(index == 0) {
        list_pop_h(s);
    }
}


void middle_delete(List *s, int k) {
    if(k <= list_size(s) && k >= 0) {
        int counter = 0;
        int mid_index;
        while (counter < k) {
            int size = list_size(s);
            mid_index = (size - 1) / 2;
            list_delete(s, mid_index);
            counter++;
        }
    }    
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
    List *s = list_create();
    char ans[100];
    int value;
    printf("Type y between values to update your list. Type e to end.\n");
    while (1) {
        scanf("%s", ans);
        if (strcmp(ans, "y") == 0) {
            value = get_int();
            list_push(s, value);
        }
        if (strcmp(ans, "p") == 0) {
            list_print(s);
        }
        if (strcmp(ans, "e") == 0) {
            break;
        }
    }
    printf("Now enter k value.\n");
    value = get_int();
    middle_delete(s, value);
    list_print(s);
    list_destroy(s);
    return 0;
}
