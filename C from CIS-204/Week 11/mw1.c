#include <stdio.h>

int fUserInput();

int main(){
    int mDif = fUserInput();
    printf("Your difference is: %d. Thanks for playing. Come again soon!\n", mDif);

    return 0;
}

int fUserInput(void){
    int userInput;


    printf("Please input any integer (aside from 99). Once finished, please enter in 99: ");
    scanf("%d", &userInput);

    int lowest;
    int highest;

    lowest = userInput;
    highest = userInput;

    while(userInput != 99){

        if(userInput > highest){
            highest = userInput;
        }else if(userInput < lowest){
            lowest = userInput;
        }

        printf("You have entered the number %d.\nEnter another number (99 to quit): ", userInput);
        scanf("%d", &userInput);
    }
    
    printf("You have ended the loop.\nThe highest value entered was: %d, and the lowest value entered was %d.\n", highest, lowest);

    int dif;
    dif = highest - lowest;

    return dif;
}