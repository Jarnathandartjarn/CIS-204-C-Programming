#include <stdio.h>

void fSwap (char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

char a = 'a';
char b = 'b';

printf("Good afternoon. We will be swapping the values that are initalized in the code via pointers in functions.\nWe have %c and %c to start out with.\n", a, b);

fSwap(&a, &b);

printf("If all has gone correctly, our two characters should now be reading as %c and %c\n", a, b);

return 0;
}