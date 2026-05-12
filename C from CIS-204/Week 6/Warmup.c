#include <stdio.h>
#include <string.h>

int main() {
    char passCode [15];
    char correctPassCode[] = "1gn1t1on!";

    printf("Please enter your password\n");
    scanf("%14s", passCode);

    if (strcmp(passCode, correctPassCode) == 0) {
        printf("Access Granted\n");
    } 
    else {
        printf("Access Denied\n");
    }
        return 0;
}