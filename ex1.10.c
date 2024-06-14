#include <stdlib.h>
#include <stdio.h>

int main (void){

int bma; //valor base maior
int bme; //valor base menor
int al; //valor altura
int ar; //valor area

    printf("Valor base maior: ");
    scanf("%d", &bma);

    printf("Valor base menor: ");
    scanf("%d", &bme);

    printf("Valor altura: ");
    scanf("%d", &al);

ar = (bma + bme) * al / 2; //area do trapézio

    printf("Area = %d", ar);

    return 0;
}