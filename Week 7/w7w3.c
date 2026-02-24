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
    
    int i;
    int igCode;
    igCode = 3;
    
    for(i = igCode; i > 0; --i) {
        printf("%d\n", i);
    }
    printf("Ignition");

    return 0;
}