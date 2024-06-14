#include <stdlib.h>
#include <stdio.h>

int main (void){

int lado;
int area;
int perimetro;

    printf("Valor lado: ");
    scanf("%d", &lado);

perimetro = 4 * lado;
area = lado * lado;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;
}