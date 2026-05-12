#include <stdio.h>
#include <math.h>
// Jonathan Falvo
// Chpt2 PA
    int main(){
        double cylVol; // Volume
        double cylArea; // Area
        double cylRad; // Radius
        double cylHeight; // Height

        printf("Good day user. To start, please input a number for the cylindrical radius.\n"); // User input for radius
        scanf("%lf", &cylRad); // Radius Read
        printf("Please now input a number for the cylindrical height.\n"); // User input for height
        scanf("%lf", &cylHeight); // Height Read
        
        cylVol = M_PI * pow(cylRad, 2) * cylHeight; // Volume Calculation
        cylArea = (2 * M_PI * cylRad * cylHeight) + (2 * M_PI * pow(cylRad, 2)); // Area Calculation (Corrected)

        /* I had a feeling that one of those formulas were written inorrectly. Might have overlooked it
        the first time I wrote this piece of code*/

		printf("Enter radius of cylinder: %0.2lf\n", cylRad); // Output for radius
		printf("Enter height of cylinder: %0.2lf\n", cylHeight); // Output for height
		printf("Volume (cubic inches): %0.2lf\n", cylVol); // Output for volume
		printf("Area (cubic inches): %0.2lf\n", cylArea); // Output for area
        
        return 0;
    }