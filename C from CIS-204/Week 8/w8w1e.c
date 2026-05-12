#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int difference = 0;

    char str1[]= "ABC";
    char str2[]= "ABZ";
   
    int ints1[] = {65, 66, 67};
    int ints2[] = {65, 66, 90};

    for(int i=0; i < 3; i++){

        int int1 = ints1[i];
        int int2 = ints2[i];

        // char1 != char2
        difference = (int1 - int2);
        if(difference != 0){
            break;
        }
    }

    printf("difference:    %d\n", difference);
    printf("strcmp return: %d\n", strcmp(str1, str2));

    if(strcmp(str1, str2) == 0){
        printf("The strings are the same.");
    }
    else if(difference > 0) {
        printf("The first string is \"greater\".\n");
    }
    else // implies difference < 0
        printf("The second string is \"greater\".\n");


    return 0;
}