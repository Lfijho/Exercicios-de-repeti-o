//Escreva um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100.


#include <stdio.h>

int main(void) {
  int cem = 100;
  for ( int num = 0; num <= 9; num++) {
    cem = cem +1;
      printf("%d\n", cem);  
  }
}
