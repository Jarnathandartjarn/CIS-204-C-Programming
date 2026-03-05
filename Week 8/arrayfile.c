#include <stdio.h>

int main(){


int scores[5] = {90, 80, 85, 95, 100};

printf("%d, %d, %d, %d, %d\n", scores[0], scores[1], scores[2], scores[3], scores[4]);

for (int i = 0; i < (5); i++){
    scanf("%d", &scores[i]);
}

for(int i = 0; i < 5; i++){
    printf("%d\n", scores[i]);
}

return 0;

}