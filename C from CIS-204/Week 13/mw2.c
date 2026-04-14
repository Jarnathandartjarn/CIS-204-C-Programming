#include <stdio.h>

typedef struct{
    char playerName[256];
    char characterName[256];
    int characterAge;
    char characterWeapon[256];
}character;

void fPlayercall(character fPlayer1){
    printf("Player name: %s\n", fPlayer1.playerName);
    printf("Character name: %s\n", fPlayer1.characterName);
    printf("Character Age: %d\n", fPlayer1.characterAge);
    printf("Character Weapon: %s\n", fPlayer1.characterWeapon);
}

int main(){

character player1 = {
    playerName: "Jonathan",
    characterName: "The guy",
    characterAge: 29,
    characterWeapon: "M27 IAR"
};

fPlayercall(player1);

return 0;
}