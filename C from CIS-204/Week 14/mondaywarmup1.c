#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    int willPower;
    float willToLive;
    bool inKetosis;
    char *name;
} KetoHero;

KetoHero* CreateChar(int willPower, float willToLive, bool inKetosis, char *name){
    
    KetoHero* tempChar = (KetoHero*)malloc(sizeof(KetoHero));

    tempChar->willPower = willPower;
    tempChar->willToLive = willToLive;
    tempChar->inKetosis = inKetosis;
    tempChar->name = (char*)malloc(strlen(name) + 1);
    strcpy(tempChar->name, name);

    return tempChar;
}

int main ();

    printf("Wecome to character creator 5k. Let us begin.\n")

    KetoHero* = CreateChar(0, 100.0, false, "Donut Dan");

    printf("name: %s\n", myHero->name);
    printf("willPower: %d\n", myHero->willPower);
    printf("willToLive: %.2f\n", myHero->willToLive);
    printf("inKetosis: %s\n", )

return 0;