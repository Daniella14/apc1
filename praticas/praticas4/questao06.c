/* Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main(){

  int a = 1;
  int b = -5;
  int c = 6;

  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%i", &a);

  printf("Entre com o valor de b: ");
  deu_certo = scanf("%i", &b);

  printf("Entre com o valor de c: ");
  deu_certo = scanf("%i", &c);

  float delta = b*b - 4*a*c;
  float raiz1 = (-b + sqrt(delta)) / (2*a);
  float raiz2 = (-b - sqrt(delta)) / (2*a);

  double raiz = sqrt(delta);
  
  printf("As raízes são %.2f e %.2f\n", raiz1, raiz2 );
  
  return 0;

  
  
}