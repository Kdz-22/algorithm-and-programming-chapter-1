#include <stdio.h>
#include <stdlib.h>

int main (void){

int n1;
int n2;
int adicao;
int subtracao;
int multiplicacao;
int divisao;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    adicao = n1 + n2;

    subtracao = n1 - n2;

    multiplicacao = n1 * n2;

    divisao = n1 / n2;

    printf("%d + %d = %d\n", n1, n2, adicao);
    printf("%d - %d = %d\n", n1, n2, subtracao);
    printf("%d * %d = %d\n", n1, n2, multiplicacao);
    printf("%d / %d = %d\n", n1, n2, divisao);


    return 0;
}