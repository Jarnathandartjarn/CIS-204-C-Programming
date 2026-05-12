#include <stdio.h>

main(){

    char board[3][3] = { {'X', 'O', 'X'},
                         {'X', 'O', 'X'},
                         {'O', 'X', 'O'}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            printf("%c ", board[i][j]);
    }
        printf("\n");
}


return 0;
}