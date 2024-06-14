#include <stdlib.h>
#include <stdio.h>

int main(void){

float valorDoP;
float precoVenda;

    printf("Valor do produto: ");
    scanf("%f", &valorDoP);

precoVenda = valorDoP - (valorDoP * 0.09);

    printf("Preco de venda com 9%% de desconto: %.2f", precoVenda);

    return 0;
}