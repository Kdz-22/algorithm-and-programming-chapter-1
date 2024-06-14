#include <stdlib.h>
#include <stdio.h>

int main (void){

float rc; //raio do circulo
float dia; //diametro
float circ; //circunferencia
float ar; //area

    printf("Valor do raio do circulo: ");
    scanf("%f", &rc);

dia = 2 * rc;

circ = 2 * 3.141592 * rc;

ar = 3.141592 * rc * rc;

    printf("Diametro = %.2f\n", dia);
    printf("Circunferencia = %.2f\n", circ);
    printf("Area = %.2f", ar);

    return 0;
}