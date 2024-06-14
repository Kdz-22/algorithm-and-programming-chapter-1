#include <stdlib.h>
#include <stdio.h>

int main (void){

float base;
float alt;
float ar;

    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &alt);

ar = (base * alt) / 2;

    printf("Area = %.2f", ar);

    return 0;
}