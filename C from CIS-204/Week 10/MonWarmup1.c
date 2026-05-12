// Did utilize ChatGPT for understanding this. Will make a new file from scratch without looking so I truly grasp it

#include <stdio.h>

int main(){

char arr1 [] = {'a','b','c','d','e','f'};
int n = 6;

printf("Array will now flip in descending order\n\n");

for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
        if(arr1[j] > arr1[j+1]){
            char temp = arr1[j];
            arr1[j] = arr1[j+1];
            arr1[j + 1] = temp;
        }
    }
}

for(int i = 0; i < n; i++){
    printf("%c", arr1[i]);
}

return 0;
}