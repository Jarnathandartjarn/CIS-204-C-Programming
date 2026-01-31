#include <stdio.h>
#include <math.h>

int main() {
    
    int goofball;
    
    printf("Please enter a value for goofball\n");
    scanf("%d", &goofball);

    goofball += 20;
    printf("Congratulations, Goofball. Goofball is equal to %d!\n", goofball);

    return 0;    
}