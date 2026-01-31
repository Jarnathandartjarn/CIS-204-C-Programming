#include <stdio.h>
#include <math.h>
// Jonathan Falvo
// Chpt2 PA
    int main(){
        float cylVol; // Volume
        float cylArea; // Area
        float cylRad; // Radius
        float cylHeight; // Height

        printf("Good day user. To start, please input a number for the cylindrical radius.\n"); // User input for radius
        scanf("%f", &cylRad); // Radius Read
        printf("Please now input a number for the cylindrical height.\n"); // User input for height
        scanf("%f", &cylHeight); // Height Read
        
        cylVol = M_PI * pow(cylRad, 2) * cylHeight; // Volume Calculation
        cylArea = (2 * M_PI * cylRad * cylHeight) + (2 * pow(M_PI, 2)); // Area Calculation

        printf("I'm sorry Dave, I can't do th... just kidding.\n"); // Goofy line of text
		printf("With the user inputs of:\n Radius: %0.2f\n Height: %0.2f\n", cylRad, cylHeight); // Reminding user of the numbers that they input
        printf("The calculations are:\n Volume (cubic inches): %0.2f\n Surface Area (square inches): %0.2lf\n", cylVol, cylArea); // Outputting the calculations
        printf("Thank you for coming! Goodbye user!\n"); // Signaling the program is over
        
        return 0;
    }