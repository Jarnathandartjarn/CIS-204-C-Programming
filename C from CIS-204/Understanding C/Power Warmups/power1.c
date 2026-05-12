#include <stdio.h>
#include <math.h>
// Function Prototype
double powerFromVI(double voltage, double current);
double voltageFromPI(double power, double current);
double currentFromPV(double power, double voltage);

int main(){
    printf("Electrical Engineering Equations\n");
    printf("Voltage = Power / Current");
    printf("Current = Power / Voltage");
    printf("Power = Voltage * Current");

    int voltage = voltageFromPI(100.0, 2.0);
    int current = currentFromPV(100.0, 50.0);
    int power = powerFromVI(120.0, 5.0);

return 0; 
}

double powerFromVI(double voltage, double current){
    return voltage * current;
}

double currentFromPV(double power, double voltage){
    return power / voltage;
}

double voltageFromPI(double power, double current){
    return power / current;
}