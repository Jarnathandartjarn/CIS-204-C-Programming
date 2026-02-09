// The program will display the number of digits in an integer between 0 - 9999

// Jonathan Falvo
// Week 4 Debugging Assignement

#include <stdio.h>

int main(void) {
   int num;
   
   printf ("Enter an integer between 0 - 9999: "); // Error 1. Missing opening bracket for printf.
   scanf("%d", &num);
      
   if (num > 999) { // Error 2. Semicolon that was added was incorrect. Code would end abruptly prematurely.
      printf("%d has 4 digits\n", num);
   } else if (num > 99) { // Error 3. Orientation of the greater than sign was in the incorrect direction. Creates logic error.
      printf("%d has 3 digits\n", num);
   } else if (num > 9) { // Error 4. num > 10 was incorrect. >= 10 could work, but it doesn't make sense in a methodical flow of using 9's to represent the addition of a digit. Therefore, num > 9 is the best choice.
      printf("%d has 2 digits\n", num);
   } else { // Error 5. The closing bracket was missing. The program "excrements" itself because it doesn't have a false statement to complement the true statement.
      printf("%d has 1 digit\n", num);
   }

   return 0;
}
