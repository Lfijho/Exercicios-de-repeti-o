//Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.

#include <stdio.h>
#include <string.h>

int main(void) {
   int valor;
    int maior = 0;
    int menor = 2147483647;
    for ( int i = 0; i < 50; i++ ) {
        scanf(" %d", &valor);
        if ( valor > maior ) {
            maior = valor;
        }

        if ( valor < menor ) {
            menor = valor;
        }
    }
    printf("Esse é o maior:%d\n", maior);
    printf("Esse é o menor:%d\n", menor);
}
