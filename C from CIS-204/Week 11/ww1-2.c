#include <stdio.h>

void fPSwap(int *uno, int *dos);

int main (){

    int a; // Value a or 1
    int b; // Value b or 2

    printf("Please enter an integer in for value a: ");
    scanf("%d", &a);
    printf("You have entered in %d for value a.\n", a);

    printf("Please enter an integer in for value b: ");
    scanf("%d", &b);
    printf("You have entered in %d for value b.\n", b);

    printf("We will now legitimately swap %d and %d with a function\n", a, b);

    fPSwap(&a, &b);

    printf("Since we are now using pointers for warmup 2, the values should now be %d and %d\n.", a, b);

return 0;
}

void fPSwap(int *uno, int *dos){
    int temp = *uno;
    *uno = *dos;
    *dos = temp;

return;
}