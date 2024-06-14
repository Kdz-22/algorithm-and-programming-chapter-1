#include <stdlib.h>
#include <stdio.h>

int main (void){

float fire; //fahrenheit
float ceu; //celsius

    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &fire);

ceu = (fire - 32) / 1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", fire, ceu);

    return 0;
}