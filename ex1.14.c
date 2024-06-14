#include <stdlib.h>
#include <stdio.h>

int main (void){

float lado; 
float per; //perimetro
float ar; //area

    printf("Valor lado: ");
    scanf("%f", &lado);

per = 4 * lado;
ar = lado * lado;

    printf("Perimetro = %.2f\n", per);
    printf("Area = %.2f", ar);

    return 0;
}