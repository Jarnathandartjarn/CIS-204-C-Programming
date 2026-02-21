/*
This program compares two strings given as input. 
It outputs the number of characters that match in each string position. 
Assume each input string has less than 50 characters.
*/

/* I added whitespace between the note and the boilerplate. I also left several notes on this to break it down
   and further understand why this code works (or doesn't) */

#include <stdio.h>
#include <string.h>

int main(void) {
   char str1[50];                                       // String 1
   char str2[50];                                       // String 2
   int len;                                             // String Length
   int i;                                               // Loop iteration counter, for comparing strings
   int count = 0;                                       /* For counting the iterations of the for loop, 
                                                           will determine matches between two strings,
                                                           also, count is initialized here */
   
   printf("Enter string one: ");
   scanf("%s", str1);                                   /* Error 1: Ampersand does not work for character 
                                                           arrays */
   printf("Enter string two: ");
   scanf("%s", str2);
   
   // Find the shortest length among the input strings
   if (strlen(str1) < strlen(str2)) {                   /* String length will compare string 1 to string 2,
                                                           if string 1 has less characters than string 2,
                                                           len will equal string 1*/
      len = strlen(str1);                               // len will take on str1 since it is shorter than str2
   }
   else {
      len = strlen(str2);                               // len will take on str2 since it is shorter than str1
   }
      
   for (i=0; i < len; ++i) {                            /* Error 2: semi-colon needed after i = 0, not comma
                                                           Error 3: i (or 0) IS NOT greater than the 
                                                           string length, loop will not run */
      if (str1[i] == str2[i]) {                         // Error 4: i for an i, 1 will not compare with i
         count += 1;                                    /* Error 5: We want to increment by 1 each iteration, 
                                                           not 2 */
      }
   }
   
   if (count == 1) {
      printf("%d character matches\n", count);
   }
   else {
      printf("%d characters match\n", count);
   }

   return 0;
}