#include <stdio.h>

void GetUserValues(int userVals[], int numInts);
int IntsLessThanOrEqualToThreshold(int userValues[], int maxVal, int numValues, int resValues[]);

int main (){

int numInts;                                                   // For storing how many integers we will be using
printf("Enter the number of integers that follow: ");          // Prompt the user to enter the number of integers

while(scanf("%d", &numInts) != 1){                             // I set up a loop because I am tired of code where characters are accepted
    printf("Not an integer, please input an integer.\n");      // Integer WAS NOT entered

    while(getchar() != '\n');                                  /* This specific part was looked up on ChatGPT
                                                                  It appears that this clears a buffer overflow for
                                                                  characters and parts of the variable that we don't need
                                                                  for a simple integer. %d and input will still only read
                                                                  the integer portion, but we still have memory waste. */
}

int scanVal[numInts];                                           // Our variable for entering those in those integers, an array
int userVals[20];                                               // The allotted size for our array

GetUserValues(userVals, numInts);                               // Function for getting the integers into our array

int maxVal;                                                     // Our value we want our max to be
printf("Enter the threshold value: ");                          // Prompt the user to enter the threshold value

while(scanf("%d", &maxVal) != 1){                               // loop for making sure an integer is entered
    printf("Not an integer, please input an integer.\n");       // Integer WAS NOT entered

    while(getchar() != '\n');                                   // Clearing buffer
}

int resValues[20];                                              // The results array
int count;

count = IntsLessThanOrEqualToThreshold(userVals, maxVal, numInts, resValues); // Function for determing values <= the threshold

return 0;
}

void GetUserValues(int userVals[], int numInts){                // Function for inputing into the array
    for(int i = 0; i < numInts; ++i){                           // For loop
        printf("Enter number %d: ", i + 1);                     // Prompt user to enter values
        while(scanf("%d", &userVals[i]) != 1){                  // Scan for anything so long as it starts with an integer
            printf("Not an integer, please input an integer.\n"); // DID NOT enter an integer

            while(getchar() != '\n');                           // Clears the buffer
        }
    }
}

int IntsLessThanOrEqualToThreshold(int userValues[], int maxVal, int numValues, int resValues[]){   /* Function for getting values   
                                                                                                       <= the final value */
    int count = 0;                                              // For adding to our results array

    for(int i = 0; i < numValues; i++){                         // For loop to loop through the array so we get our resulting array
        if(userValues[i] <= maxVal){                            // The array from GetUserValues is now compared to our max value
            resValues[count] = userValues[i];                   // The resulting values are added to an outputting array
            count++;                                            // 
        }
    }

printf("Values below the threshold of %d: ", maxVal);           // Inform of the number of values following
for(int i = 0; i < count; i++){                                 // looping for printing our new array
    printf("%d ", resValues[i]);                                // printing our new array values
}

printf("\n");

return count;
}