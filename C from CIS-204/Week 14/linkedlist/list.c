#include <stdio.h>
#include "linklist.h"

int main(){

    LinkedList* list = list_create();
    
    list_push(list, 10);
    list_print(list);
    
    list_push(list, 20);
    list_print(list);
    
    list_push(list, 30);
    list_print(list);
    
    list_push(list, 40);
    list_print(list);
    
    list_push(list, 50);
    list_print(list);
    
    list_push(list, 60);
    list_print(list);

    list_get(list, 2);

    printf("list get(list, 2) returns %d\n", list_get(list, 2));
    list_destroy(list);
    
return 0;
}