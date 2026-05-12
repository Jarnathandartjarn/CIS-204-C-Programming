#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
                               //  i:
    char main[] = "cc";       //   {'c', 'a', 'c'}  // Our string to be compared
    char compare[] = "c";    //   {'c', 'a', 't'}  // Our string that is supposed to be based off of
                               //  j:
 
    int mainLen = strlen(main);     // 3              // The length of main string put into numbers
    int compLen = strlen(compare);  // 3              // The length of compare string put into numbers

    int count = 0;                                    // How many times there is a match
    bool match = false;                               // If a match is found

    for(int i = 0; i < mainLen; i++){        /* i = 0 since it needs to start at the beginning of the loop, i is less than the
                                                length of mainLen and i++ means it will incrememnt each go around */
        
        if((i +  compLen) > mainLen){
            break;
        }

        for(int j = 0; j < compLen; j++){    // j = 1
            if(main[i + j] == compare[j])
                match = true;
            else {
                match = false;
                break;
            }
        }

        if(match){
            count++;
        }

    }

    printf("There are %d matches in total.\n", count);


    return 0;
}