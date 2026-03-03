#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    char pattern[] = "cat"; // ['c', 'a', 't']
    char target[] = "application"; // ['a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n'] 11th Position outside of array

    int patternLen = strlen(pattern); // 3
    int targetLen = strlen(target); // 11

    bool found = false;

    for(int i = 0; i < targetLen; i++){
        bool match = false;

        if(i + patternLen > targetLen){
            break;
        }

        for(int j = 0; j < patternLen; j++) { // re-initialize j to 0 // i = 0, j = 0
            if(target[i + j] != pattern[j]){
                match = false;
                break; // Breaks out of interior loop
            }
            else if(target[i+j] == pattern[j])
                match = true;
        }

        if(match == true){
            found = true;
            break;
        }
    }

    if(found == true){
        printf("Found a match!\n");
    }
    else {
        printf("Found no matches.\n");
    }
    
    return 0;

}