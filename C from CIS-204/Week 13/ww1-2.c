#include <stdio.h>

void add(int a, int b, int *result){

    *result = a + b;

}

int main(){

int a;
int b;
int result;

printf("Good afternoon. We will now be adding values using a pointer function.\nEnter value 1: ");
scanf("%d", &a);
printf("Very good. Enter value 2: ");
scanf("%d", &b);
printf("Very good. Calculating now in our function that points.\n");

add(a, b, &result);

printf("If we have created the function correctly, our result should be %d + %d = %d\n", a, b, result);

return 0;
}