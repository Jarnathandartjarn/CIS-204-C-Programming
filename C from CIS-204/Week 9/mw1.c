#include <stdio.h>

int main(){

    int arr1[] = {15, 23, 29, 35, 67};
    int arr2[5];

    for(int i = 0; i < 5; i++){
        arr2[i] = arr1[i];
        printf("%d\n", arr2[i]);
    }

return 0;
}