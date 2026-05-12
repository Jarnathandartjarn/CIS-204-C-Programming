#include <stdio.h>

void apply_discount(float *fST, float fDP);

int main(){

    float subtotal = 100.0;

    printf("Original price: %.2lf", subtotal);

    apply_discount(&subtotal, 25.0);

    printf("Discounted price: %.2lf", subtotal);

    return 0;
}

void apply_discount(float *fST, float fDP){

    fDP = fDP / 100; // .25
    *fST = *fST * (1 - fDP);

}