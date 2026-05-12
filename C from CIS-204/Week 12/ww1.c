#include <stdio.h>

typedef struct{
    char personName[256];         // Name of the person (string, no units)
    char nameForDietPlan[256];    // Name used in the diet plan (string, no units)
    float BMR;                    // Basal Metabolic Rate (kcal/day)
    float height;                 // Height of the person (centimeters, cm)
    float weight;                 // Current weight (kilograms, kg)
    float BMI;                    // Body Mass Index (kg/m^2)
    float muscleMass;             // Muscle mass (kilograms, kg or percentage % depending on calculation)
    float minWeight;              // Minimum healthy weight (kilograms, kg)
    float maxWeight;              // Maximum healthy weight (kilograms, kg)
    float currentWeight;          // Current weight (kilograms, kg)
    float goalWeight;             // Target weight (kilograms, kg)
    int restHeartRate;            // Resting heart rate (beats per minute, bpm)
    double bloodGlucose;          // Blood glucose level (milligrams per deciliter, mg/dL)
    double bloodKetones;          // Blood ketone level (millimoles per liter, mmol/L)
} ketoNeato;

int main(){
return 0;
}