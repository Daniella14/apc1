/*
Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/
#include <stdio.h>

int main(){
float nota1 = 9.0;
float nota2 = 8.0;

printf("Entre com a nota1: ");
scanf("%f", &nota1);

printf("Entre com a nota2: ");
scanf("%f" , &nota2);

float media = 0.4*nota1 + 0.6*nota2;

printf("A média final é %.1f" , media);

if(media >= 5.0) {
  printf("Aprovado\n");
  } else {
  printf("Reprovado\n");
  
}
  return 0;
}
