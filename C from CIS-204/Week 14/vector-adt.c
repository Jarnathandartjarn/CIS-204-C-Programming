#include <stdio.h>
#include "vector.h"

int main(){

    // Create an empty vector
    Vector *v = vector_create(); // data = { , }; size = 0; capacity = 2;

    // add values to our vector
    vector_push(v, 10); 
    vector_push(v, 20); 
    vector_push(v, 30);
    
    // read values from our vectors
    printf("%d", vector_get(v,0)); // would return 10
    printf("%d", vector_get(v,1)); // would return 20
    printf("%d", vector_get(v,2)); // would return 30

    vector_destroy(v);

return 0;
}