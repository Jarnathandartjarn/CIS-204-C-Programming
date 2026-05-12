#include <stdio.h>
#include <math.h>

int main () {
    int countdown;
    countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown = countdown - 1;
    }
    printf("Ignition!\n");

return 0;
}