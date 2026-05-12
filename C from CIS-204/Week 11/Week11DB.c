/*
This program removes the odd elements from an array.
The RemoveOdds() function has three parameters: the array size and two integer arrays. 
The function  fills the second array with the even elements of the first array and returns the number of elements in the second array.
*/

// Jonathan Falvo
// Week 10 Debug Assignment

#include <stdio.h>
int RemoveOdds(int arraySize, int numberArray[], int evenNumberArray[]);
                                                                         
int main(void) {                                                         // Our main function
                                                                         
   int i;                                                                // indexing variable
   int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};                            // Array is setup correctly
   int result[20];                                                       // Result is given enough memory to allocate our results
   int numberOfEvens;                                                    // The number we will want to output at the end
                                                                         
   numberOfEvens = RemoveOdds(9, input, result);                         // Error 1, no comma was between input and result. Created a single
                                                                         // undeclared variable
                                                                         
   for (i = 0; i < numberOfEvens; i++) {                                 // Error-ish 6, not entirely sure why we had an extra
                                                                         // printf statement and the array going backwards, worked,
                                                                         // but it seemed unnecessary to me
      printf("%d, ", result[i]);                                         // Printing our evens
   }                                                                     
                                                                         
   return 0;                                                             // Free of errors, the code is over
}       

// Return the size of evenNumberArray - the number of even found
int RemoveOdds(int arraySize, int numberArray[], int evenNumberArray[]) {// Error 2, voiding the function with a integer return does not compute
                                                                         // Error 3, evenNumberArray[] needed to be declared to be usable in our
                                                                         // function
   int i;               // for loop over numberArray                     // Variable for indexing
   int count = 0;       // count the number of even                      // Counting how many even matches we have
                                                                         
   for (i = 0; i < arraySize; i++) {                                     // Our for loop
      if (numberArray[i] % 2 == 0) {                                     // Error 4, logic was written for odd numbers, not
                                                                         // even numbers
         evenNumberArray[count++] = numberArray[i];                      // Adding numbers to an array for the sake of
                                                                         // count
      }                                                                  
   }                                                                     
                                                                         
   return count;                                                         // Error 5, count was needed since we want to know
                                                                         // how many times even numbers were found, NOT the size
                                                                         // of an array
}             