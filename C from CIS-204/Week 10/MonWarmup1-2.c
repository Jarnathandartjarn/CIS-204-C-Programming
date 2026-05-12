
// Some difficulty but better. One more time
#include <stdio.h>

int main(){

char varArr[] = {'a','b','c','d','e','f'};
int n = 6;

printf("The array will be flipped into descending order. The order is now: ");

for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
        if(varArr[j] < varArr[j+1]){
            char temp = varArr[j];
            varArr[j] = varArr[j+1];
            varArr[j+1] = temp; 
        }
    }
}

for(int i = 0; i < n; i++){
    printf("%c", varArr[i]);
}

return 0;
}