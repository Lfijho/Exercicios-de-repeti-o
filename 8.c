// Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma.


#include <stdio.h>
#include <string.h>

int main(void) {
   int valor;
    scanf("%d", &valor);
    if ( valor > 0 ) printf("POSITIVO\n");

    else printf("NEGATIVO\n");
    while ( valor != 0 ) {
         scanf("%d", &valor);
        if ( valor > 0 ) printf("POSITIVO\n");
        
        else printf("NEGATIVO\n");
    }
}
