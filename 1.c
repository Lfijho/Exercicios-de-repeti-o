//Faça um programa que leia 20 números quaisquer e conte quantos são negativos.


#include <stdio.h>

int main(void) {
    int num;
  int cont = 0;
  for ( int i = 0; i < 20; i++ )  { 
    scanf("%d", &num);
    if (num < 0) {
      cont++;
    }
  }
  printf("%d", cont);
}
