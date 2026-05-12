#include <stdio.h>
#include <string.h>

int main() {

    char subject[20];
    char verb[20];
    char object[20];

    printf("Please enter a subject: ");
    scanf("%s", subject);
    printf("\nPlease enter a verb: ");
    scanf("%s", verb);
    printf("\nPlease enter an object: ");
    scanf("%s", object);

    printf("The following sentence will read: \"%s %s %s.\" \n", subject, verb, object);

    return 0;
}