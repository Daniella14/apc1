/* Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main(){

  int numero;
  
  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

  int eh_par = numero % 2 == 0;
  printf("O numero eh par? %i\n", eh_par);

  int eh_impar = numero % 2 != 0;
  printf("O numero eh impar? %i\n", eh_impar);

  return 0;
}
