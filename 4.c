// Escreva um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive).


#include <stdio.h>

int main(void) {
    int num1 = 1;
  for ( int num = 0; num <= 10; num++ ) {
     if ( num % 2 != 0 ) {
       printf("%d\n", num);
     }
    num1++;
  }
  }
