// Jonathan Falvo
// Chpt 5 PA

#include <stdio.h>

int main() {

printf("Enter the number of values that will follow: ");        // Prompt the user to enter the number of values
int n;                                                          // Variable for how many values will be entered
scanf("%d", &n);                                                // The scanf is here so that the user can input how many values we want to store

double dArr[n];                                                 // The array for storing our double values that will later be normalized

for(int i = 0; i < n; i++){                                     // For loop for inputing our double values into the array
    printf("Enter double number %d: ", i + 1);
    scanf("%lf", &dArr[i]);
}

printf("\nThe list of doubles normalized\n");                   // Printf statement for showing what our normalized numbers are with a whitespace for readability

for(int i = 0; i < n; i++){                                     // For loop to print the normalized numbers
    double norm1 = dArr[i] / 100;                               // The variable for storing our normalized number is each "i"
    printf("%.2lf ", norm1);                                    // Printf statement to print our truncated "normalized" numbers with variable norm1
}

printf("\n");                                                   // Whitespace for readability

return 0;
}