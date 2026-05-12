#include <stdio.h>
#include <string.h>

int main() {
    char passCode [15];
    char correctPassCode[] = "1gn1t1on!";

    printf("Please enter your password\n");
    scanf("%14s", passCode);

    while (strcmp(passCode, correctPassCode) != 0) {
        printf("Access Denied!\n");
        scanf("%14s", passCode);
    }
    printf("Access Granted\n");
    printf("3\n");
    printf("2\n");
    printf("1\n");
    printf("Ignition\n");
    return 0;
}