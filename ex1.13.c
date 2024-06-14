#include <stdio.h>
#include <stdlib.h>

int main (void){

float n1; //numero 1
float n2; //numero 2
float adc; //adição
float sub; //subtração
float mult; //multiplicação
float div; //divisão

    printf("Primeiro numero: ");
    scanf("%f", &n1);

    printf("Segundo numero: ");
    scanf("%f", &n2);

adc = n1 + n2;
sub = n1 - n2;
mult = n1 * n2;
div = n1 / n2;

    printf("%.2f + %.2f = %.2f\n", n1, n2, adc);
    printf("%.2f - %.2f = %.2f\n", n1, n2, sub);
    printf("%.2f * %.2f = %.2f\n", n1, n2, mult);
    printf("%.2f / %.2f = %.2f", n1, n2, div);

    return 0;
}