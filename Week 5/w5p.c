// Jonathan Falvo
// Chpt 3 PA
#include <stdio.h>


int main(){

double pounds; // Pound variable
double heightInch; // Height in inches variable
double weightKG; // Weight in kilograms variable
double heightMeter; // height in meters variable
double bMI; // Body Mass Index variable

printf("Enter weight in pounds\n"); // Prompt user for weight in pounds
scanf("%lf", &pounds); // Gather variable pounds from user

printf("Enter height in inches\n"); // Prompt user for height in inches
scanf("%lf", &heightInch); // Gather variable height in inches from user

weightKG = pounds * 0.45359237; // Calculation for weight in kilograms
heightMeter = heightInch * 0.0254; // Calculation for height in meters
bMI = weightKG / (heightMeter * heightMeter); // Calculation for Body Mass Index

/* I have included the outputs as taken from the image on the Moodle page for this assignment as being part of
each portion of the if branch. I am happy to correct this should I need to, but, this seemed like the most straightforward way to me. */

if (bMI < 18.5) { // Part 1 of the if statements.
    printf("Enter weight in pounds: %lf\n", pounds);
    printf("Enter height in inches: %lf\n", heightInch);
    printf("BMI is %lf\n", bMI);
    printf("Underweight\n");
}
else if (bMI < 25.0) { // Part 2 of the if statements.
    printf("Enter weight in pounds: %lf\n", pounds);
    printf("Enter height in inches: %lf\n", heightInch);
    printf("BMI is %lf\n", bMI);
    printf("Normal\n");
}
else if (bMI < 30.0) { // Part 3 of the if statements.
    printf("Enter weight in pounds: %lf\n", pounds);
    printf("Enter height in inches: %lf\n", heightInch);
    printf("BMI is %lf\n", bMI);
    printf("Overweight\n");
}
else { // Part 4 of the if statements.
    printf("Enter weight in pounds: %lf\n", pounds);
    printf("Enter height in inches: %lf\n", heightInch);
    printf("BMI is %lf\n", bMI);
    printf("Obese\n");
}

return 0;

} 