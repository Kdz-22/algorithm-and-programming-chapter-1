#include <stdio.h>
#include <stdlib.h>

int main (void){

float horaAula;
int aula;
float desconto;
float salarioL;
float memoria;
float memoria2;

    printf("Valor da hora/aula: ");
    scanf("%f", &horaAula);

    printf("Quantidade de aulas: ");
    scanf("%d", &aula);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &desconto);

memoria = desconto / 100;
memoria2 = horaAula * aula;
salarioL = memoria2 - (memoria * memoria2);

    printf("Salario Liquido: %.2f", salarioL);

    return 0;
}
