#include <stdio.h>

int main (void){
    int wage;

    printf("What is the hourly wage?\n");
    scanf("%d", &wage);
    printf("Salary is ");
    printf("%d\n", wage * 40 *52 );
    printf("Congratulations! MONEHHH!\n");

    return 0;
}