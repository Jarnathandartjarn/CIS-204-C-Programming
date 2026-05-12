#include <stdio.h>

int main() {
char *teams = {"Porsche RS1", "CarBahn with Peregrine", "McCumbee and McAleer"};

int points[] = {2000, 1880, 1910, 900};              // 900, 1910, 1880, 2000

int numElements = sizeof(points)/sizeof(points[0]); // n = 4

for(int i = 0; i < numElements/2; i++){             // i = 1
    int temp = points[i];                           // temp = 1880
    points[i] = points[numElements - 1 - i];            // points[n-1-i] = 1910
    points[numElements - 1 - i] = temp;                 // points[n-1-i] = 1880
                                                    
}

for(int i = 0; i < numElements; i++){
    // printf("Team: %s, | Points: %d\n", drivers[i], points[i]);
    printf("Points: %d\n", points[i]);
}
return 0;
}
//    i                i'
//    0     1     2    3       i =0
// [2000, 1880, 1910, 900]     temp = 2000
// [900, 1910, 1880, 2000]    