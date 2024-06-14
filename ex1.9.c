#include <stdlib.h>
#include <stdio.h>

int main (void){

int ar;
int base;
int altura;

    printf("Valor da base: ");
    scanf("%d", &base);

    printf("Valor da altura: ");
    scanf("%d", &altura);

ar = (base * altura)/2;

    printf("Area = %d", ar);

    return 0;
}