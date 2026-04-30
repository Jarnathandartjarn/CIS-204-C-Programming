#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node{
    int data;
    struct Node *next;
} Node;

typedef struct{ 
    Node *head;
    int size;
} LinkedList;

LinkedList* list_create();
void list_push(LinkedList* list, int value);
void list_print(LinkedList *list);
int list_get(LinkedList *list, int index);
int list_remove(LinkedList* list, int index);
void list_destroy(LinkedList *list);

#endif