#include <stdio.h>
#include <stdlib.h>

int main(void){

int ano;
int nasceu;
int idade;

    printf("Ano do nascimento: ");
    scanf("%d", &nasceu);

    printf("Ano atual: ");
    scanf("%d", &ano);

idade = ano - nasceu;

    printf("Idade aproximada: %d anos", idade);

    return 0;
}
