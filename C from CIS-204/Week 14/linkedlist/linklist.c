#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

LinkedList* list_create(){
    LinkedList *temp = malloc(sizeof(LinkedList));

    if(temp == NULL){
        exit(1);
    }

    temp->head = NULL;
    temp->size = 0;

    return temp; // return the memory address that we just allocated on the heap and destroys
                 // temporary linked list pointer
}

void list_push(LinkedList* list, int value){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        exit(1);
    }

    n->data = value;
    n->next = NULL;

    if(list->head == NULL){
        list->head = n;
    } else{
        Node *curr = list->head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }

    list->size++;

}

int list_get(LinkedList *list, int index){
    Node *curr = list->head;

    for(int i = 0; i < index; i++){
        curr = curr->next;
    }
    return curr->data;

}

void list_print(LinkedList *list){
    Node *curr = list->head;

    while(curr != NULL){
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

void list_destroy(LinkedList *list){

    Node *curr = list->head;
    while(curr != NULL){
        Node *next = curr->next;
        free(curr);
        curr = next;
    }

    free(list);
}