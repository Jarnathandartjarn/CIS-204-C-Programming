#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
   char password[20];
   int i;
   int count;

   scanf("%s", password);

   count = 0;

   for (i = 0; password[i] != '\0'; i++) {
      if (isdigit(password[i])) {
         count = count + 1;
      }
   }
   
   if (count <= 6 && strlen(password) >= 8) {
      printf("Valid");
   }
   else {
      printf("Invalid");
   }

   return 0;
}