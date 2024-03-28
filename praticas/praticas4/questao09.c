/*
Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>
#include <math.h>

int main(){

  int anos;
  int meses;
  int dias;
  
  printf("Entre com os anos: ");
  int deu_certo = scanf("%i", &anos);
  
  printf("Entre com os meses: ");
  deu_certo = scanf("%i", &meses);
  
  printf("Entre com os dias: ");
  deu_certo = scanf("%i", &dias);
  
  int idade_em_dias = anos * 365 + meses * 30 + dias;
  printf("A idade em dias é %i\n", idade_em_dias);
  
  return 0;
}