#include <stdlib.h>
#include <stdio.h>

int main(void){

int n1;
int suces;
int antec;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &n1);

suces = n1 + 1;
antec = n1 - 1;

    printf("Sucessor de %d: %d\n", n1, suces);
    printf("Antecessor de %d: %d", n1, antec);

    return 0;
}
