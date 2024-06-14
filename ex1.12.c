#include <stdlib.h>
#include <stdio.h>

int main (void){

float vq; //valor qualquer

    printf("Entre com um valor qualquer: ");
    scanf("%f", &vq); //

    printf("%f\n", vq);
    printf("%.2f\n", vq);
    printf("%.3f", vq);

    return 0;
}