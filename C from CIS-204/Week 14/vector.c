#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

Vector* vector_create(){
    Vector *temp = malloc(sizeof(Vector));
    if(temp == NULL) exit(1);
    
    temp->capacity = 2;
    temp->size = 0;

    temp->data = malloc(sizeof(int) * temp->capacity);
    if(temp == NULL) exit(1);

    return temp;
}

int vector_push(Vector *target, int value){
    
    if(target->size == target->capacity){
        target->capacity *= 2;
        int *temp = realloc(target->data, target->capacity * sizeof(int));
        
        if(temp == NULL){ 
            free(target->data); 
            exit(1); 
        }
        
        target->data = temp;
        
    }
    
    int next_avail_index = target->size;
    target->data[next_avail_index] = value;
    target->size++;
}

int vector_get(Vector *target, int index){
    if(index < 0 || index >= target->size){
        printf("Errpr: index out of bounds\n");
        exit(1);
    }
    return target->data[index];
}

void vector_destroy(Vector *target){
    free(target->data);
    free(target);
}