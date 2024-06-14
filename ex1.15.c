#include <stdio.h>
#include <stdlib.h>

int main (void){

float lar;
float alt;
float per;
float ar;

    printf("Valor largura: ");
    scanf("%f", &lar);

    printf("Valor altura: ");
    scanf("%f", &alt);

per = (2 * lar) + (2 * alt);
ar = lar * alt;

    printf("Perimetro = %.2f\n", per);
    printf("Area = %.2f", ar);

    return 0;
}