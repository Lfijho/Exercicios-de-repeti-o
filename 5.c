// Faça um programa que leia o dia da semana (Domingo, Segunda, Terça, Quarta, Quinta, Sexta e Sabado). Esse dia deve ser um texto. Se for Sábado ou Domingo imprimir “Final de Semana”, senão imprimir “Dia Útil”. Dica: Utilizar as funções de comparação de string.



#include <stdio.h>
#include <string.h>

int main(void) {
    char dia[10];
    int num = 0;

    printf("Digite o dia da semana: ");
    scanf("%s", dia);

    if (strcmp(dia, "Segunda") == 0) {
        num = 1;
    } else if (strcmp(dia, "Terça") == 0) {
        num = 2;
    } else if (strcmp(dia, "Quarta") == 0) {
        num = 3;
    } else if (strcmp(dia, "Quinta") == 0) {
        num = 4;
    } else if (strcmp(dia, "Sexta") == 0) {
        num = 5;
    } else if (strcmp(dia, "Sábado") == 0) {
        num = 6;
    } else if (strcmp(dia, "Domingo") == 0) {
        num = 7;
    } else {
        printf("Dia inexistente\n");
    }
      if ( num >=1 && num <=5) {
        printf("Dia útil\n");
    }
    else {
        printf("Final de semana\n");
    }


    return 0;
}
