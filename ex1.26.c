#include <stdio.h>
#include <stdlib.h>

int main(void){

float ceu; //celsius
float fire; //Fahrenheit

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &ceu);

fire = (1.8 * ceu) + 32;

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", ceu, fire);

    return 0;
}