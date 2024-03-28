/*
Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/
#include <stdio.h>

int main() {
  int base = 4;
  int altura = 6;

  int area = base * altura / 2;

  printf(" A area do triangulo e %i\n", area);

  return 0;
}