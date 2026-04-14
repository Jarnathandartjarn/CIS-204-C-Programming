#include <stdio.h>
#include <string.h>

typedef struct{
    char personName[256];
    char nameForDietPlan[256];
    float BMR;
    float height;
    float BMI;
    float muscleMass;
    float currentWeight;
    float goalWeight;
    int restHeartRate;
    double bloodGlucose;
    double bloodKetones;
} ketoNeato;

void printKetoNeatoObj(ketoNeato fKetoman1){
    printf("personName: %s\n", fKetoman1.personName);
    printf("nameForDietPlan: %s\n", fKetoman1.nameForDietPlan);
    printf("BMI: %.2f\n", fKetoman1.BMI);
    printf("muscleMass: %.2f\n", fKetoman1.muscleMass);
    printf("currentWeight: %.2f\n", fKetoman1.currentWeight);
    printf("goalWeight: %.2f\n", fKetoman1.goalWeight);
    printf("restHeartRate: %d\n", fKetoman1.restHeartRate);
    printf("bloodGlucose: %.2f\n", fKetoman1.bloodGlucose);
    printf("bloodKetones: %.2f\n", fKetoman1.bloodKetones);
}

int main(){

printf("Revealing the keto stats in a function.\n");

ketoNeato Ketoman1 = {
        personName: "Ketopher Ketosis", 
        nameForDietPlan: "KillerKeto3000", 
        BMR: 1800.00, 
        height: 69.0,
        BMI: 22.2,
        muscleMass: 42.3,
        currentWeight: 300.0, 
        goalWeight: 180.0,
        restHeartRate: 82, 
        bloodGlucose: 120.2, 
        bloodKetones: 2.4
    };

printKetoNeatoObj(Ketoman1);

return 0;
}

