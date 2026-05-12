#include <stdio.h>

int main(){

    int arr1[5] = {15, 23, 29, 35, 67};
    int arr2[5] = {128, 764, 305, 981, 442};
    int x = 0;

    for(int i = 0; i < 5; i++){
        x = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = x;
    }

    printf("Array 1 is now: ");
    for(int i = 0; i < 5; i++){
        printf("%d", arr1[i]);
        if(i != 4){
            printf(", ");
        } else {
            printf(" --- Array 1 is completed.");
        }
    }

    printf("\nArray 2 is now: ");
    for(int i = 0; i < 5; i++){
        printf("%d", arr2[i]);
        if(i != 4){
            printf(", ");
        } else {
            printf(" --- Array 2 is completed.");
        }
    }
    printf("\n");
return 0;
}