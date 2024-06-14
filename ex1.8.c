#include <stdio.h>
#include <stdlib.h>

int main (void){

int largura;
int altura;

int Pe;
int Ar;

    printf("Valor da largura: ");
    scanf("%d", &largura);

    printf("Valor da altura: ");
    scanf("%d", &altura);

Pe = (2 * largura) + (2 * altura);
Ar = largura * altura;

    printf("Perimetro = %d\n", Pe);
    printf("Area = %d", Ar);

    return 0;
}