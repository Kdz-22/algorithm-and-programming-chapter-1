#include <stdlib.h>
#include <stdio.h>

int main (void){

float bme; //base menor
float bma; //base maior
float alt; //altura
float ar; //area

    printf("Valor da base maior: ");
    scanf("%f", &bma);

    printf("Valor da base menor: ");
    scanf("%f", &bme);

    printf("Valor da altura: ");
    scanf("%f", &alt);

ar = (bma + bme) * alt / 2;

    printf("Area = %.2f", ar);

    return 0;
}