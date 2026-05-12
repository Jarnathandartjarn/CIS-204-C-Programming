#include <stdio.h>

int add(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int three = 3;

    int result = add(1,2);
    printf("%d\n", result);
return 0;
}

