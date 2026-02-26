#include <stdio.h>

int main () {

for(int j = 3; j > 0; --j) {            /* j or outer number is equal to 3, j is greater than 0 and will operate to 1,
                                           j will "decrement" each iteration of the loop */
    for(int i = 3; i > 0; --i) {
    printf("%d-%d\n", j, i); 
}
}
    

return 0;
}