#include <stdio.h>
#include <string.h>

int main(){

    char main[20];
    char compare[20];

    printf("Please create a password: ");
    scanf("%s", main);
    printf("Please create a mock word to compare if your password is correct: ");
    scanf("%s", compare);

    if(strcmp(main, compare) == 0){ // if(mainLen != compLen){ was my original line. I realize that C is weird with strings and needs strcpy and strcmp (strcmp in this case)
        printf("Passwords do match.");
    }else{
        printf("Passwords do not match!");
    }

    char main2[20];
    char compare2[20];

    printf("\nNow, let's do it in a loop. Please create a password: ");
    scanf("%s", main2);
    printf("Excellent. Please enter a password to compare to: ");
    scanf("%s", compare2);

    while(strcmp(main2, compare2) != 0){
        printf("Passwords do not match. Keep entering in passwords: ");
        scanf("%s", compare2);
    }

    printf("Passwords do match. Loop example complete.\n");

    return 0;
}