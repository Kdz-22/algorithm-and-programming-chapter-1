#include <stdlib.h>
#include <stdio.h>

int main(void){

int dma; //daigonal maior
int dme; //diagonal menor
int ar; //area

    printf("Valor da diagonal maior: ");
    scanf("%d", &dma);

    printf("Valor da diagonal menor: ");
    scanf("%d", &dme);

ar = (dma * dme)/2; //formula area do losango

    printf("Area = %d", ar);

    return 0;
}