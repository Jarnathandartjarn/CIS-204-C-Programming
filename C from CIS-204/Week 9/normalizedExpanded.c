// Jonathan Falvo
// Chpt 5 PA EXPANDED
#include <stdio.h>

int main() {

printf("\nEnter the number of values that will follow: ");                          // Prompt the user to enter the values
int n;                                                                              // Variable for how many values will be entered
scanf("%d", &n);                                                                    // The scanf to input how many values will be entered
printf("\nYou have entered in %d values\n", n);                                     // A printf to verify that the input was added correctly

double dArr[n];                                                                     // Our array for storing the double numbers

printf("\n");                                                                       // Whitespace for readability

for(int i = 0; i < n; i++){                                                         // For loop to start adding our double numbers
    printf("Enter double number %d: ", i + 1);                                      // A prompt to ask the user to input the double numbers
    scanf("%lf", &dArr[i]);                                                         // The scanf statement to input our double numbers
}

printf("\n\n");                                                                     // Whitespace for readability

for(int i = 0; i < n; i++){                                                         // For loop to read back numbers to make sure they were input correctly
    printf("The double numbers entered are: %.2lf\n", dArr[i]);                     // Reading back the numbers
}

printf("\n\n");                                                                     // Whitespace for readability

double norm1;                                                                       // This is our variable for storing the normalized number
double oArr[n];                                                                     // This is our new array for storing the normalized numbers

for(int i = 0; i < n; i++){                                                         // Loop for normalizing the numbers
    norm1 = dArr[i] / 100;                                                          // norm1 takes whatever "i" we are on, divdies it by 100, stores that, and then prints it in each loop
    oArr[i] = norm1;                                                                // In a real world setting, I imagine we would also be wanting to store these values in a new array
    printf("%.2lf\n", norm1);                                                       // We print out what the normalized "i" is
}

/* I did not realize whatsoever that dividing by 100 would actually round whatever the left side of the decimal was. I thought it was interesting that C rounds automatically (or math does, but,
   I am also not good at math)*/

/* I expanded some on the assignment and might be more than what you were wanting or epxecting, however, I was trying to understand it and by doing such,
   I ended up making a longer code than what was initially necessary. I am going to submit this as well as a refined version that is more specific to just
   what the assignment instructions were asking*/

/* I shared this with a friend who is much more advanced with C. I guess the printing of .2lf is what causes "rounding" (truncating and not rounding) */

return 0;
}