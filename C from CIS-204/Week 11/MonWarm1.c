#include <stdio.h>
#include "fUserInput.h"

int fUserInput();

int main(){
    int mDif = fUserInput();
    printf("Your difference is: %d. Thanks for playing. Come again soon!\n", mDif);

    return 0;
}