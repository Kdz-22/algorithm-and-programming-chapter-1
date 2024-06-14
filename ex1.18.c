#include <stdio.h>
#include <stdlib.h>

int main (void){

float dma; //diagonal maior
float dme; //daigonal menor
float ar; //area

    printf("Valor da diagonal maior: ");
    scanf("%f", &dma);

    printf("Valor da diagonal menor: ");
    scanf("%f", &dme);

ar = (dma * dme) / 2;

    printf("Area = %.2f", ar);

    return 0;
}