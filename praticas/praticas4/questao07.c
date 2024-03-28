/*
 Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h>
#include <math.h>

int main(){

  int distancia;
  int angulo;
  
  printf("Entre com a distancia: ");
  int deu_certo = scanf("%i", &distancia);
  
  printf("Entre com o angulo: ");
  deu_certo = scanf("%i", &angulo);
  
  float altura = sin(angulo) * distancia;
  printf("A altura alcançada é %.2f\n", altura);
  
  return 0;

}