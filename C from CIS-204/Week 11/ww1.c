#include <stdio.h>

int fPSwap(int uno, int dos);

int main (){

    int a; // Value a or 1
    int b; // Value b or 2

    printf("Please enter an integer in for value a: ");
    scanf("%d", &a);
    printf("You have entered in %d for value a.\n", a);

    printf("Please enter an integer in for value b: ");
    scanf("%d", &b);
    printf("You have entered in %d for value b.\n", a);

    printf("We will now 'pretend' to swap %d and %d with a function\n", a, b);

    fPSwap(a, b);

    printf("However, the values are still likely the same as we are using pass-by-value and\nnot pass-by-reference. We are back to having %d and %d.\n", a, b);

return 0;
}

int fPSwap(int uno, int dos){
    int temp = uno;
    uno = dos;
    dos = temp;

    printf("The values are currently (in the function) %d and %d.", uno, dos);
return 0;
}