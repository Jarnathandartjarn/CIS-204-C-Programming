#include <stdio.h>

    int main(void){
        int rectangleLength;
        int rectangleWidth;

        printf("Please input the rectangle length.\n");
        scanf("%d", &rectangleLength);
        printf("Please input the rectangle width\n");
        scanf("%d", &rectangleWidth);

        printf("The number of inches^2 in the perimeter are");
        printf(" %d\n", rectangleLength * rectangleWidth);
    
        return(0);
    }