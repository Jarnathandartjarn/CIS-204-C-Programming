#include <stdio.h>

int main(){

    int *arr1[5] = {15, 23, 29, 35, 67};
    int *arr2[5] = {128, 764, 305, 981, 442};

    int * temp = arr1;
    arr1 = arr2;
    arr2 = temp;

    printf("Array 1: ");
    for(int i = 0; i < 5; i++){
        printf("%d", arr1[i]);
    }

    printf("Array 2: ");
    for(int i = 0; i < 5; i++){
        printf("%d", arr2[i]);
    }

return 0;
}