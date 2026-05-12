#ifndef VECTOR_H
#define VECTOR_H

typedef struct{
    int *data; // this will store our list of numbers
    int size; // utliziation: the number of items in the list
    int capacity; // the total number of possible elements that can be...
} Vector;

    Vector* vector_create();

    int vector_push(Vector *target, int value);
    
    int vector_get(Vector *target, int index);

    void vector_pop(Vector *target);
    
    void vector_destroy(Vector *target);

#endif