#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é %i\n", soma);

  int subtração = numero1 - numero2;
  printf("A subtração dos numeros é %i\n", subtração);

  int multiplicacao = numero1 * numero2;
  printf("A mutiplicacao dos numeros é %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  printf("A divisao dos numeros é %f\n", divisao);
  
  int resto = numero1 % numero2;
  printf("O resto da divisao é %i\n", resto);

  // numero1 = numero1 + 1
  // incremento
  printf("O incremento do numero1 é %i\n", numero1++);
  printf("O incremento do numero1 é %i\n", ++numero1);

  // numero1 = numero1 - 1
  // decremento
  printf("O decremento do numero1 é %i\n", numero1--);
  printf("O decremento do numero1 é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do numero1 é %f\n", raiz_quadrada);
  double potencia = pow(numero1, 3);
  printf("A 3a potencia do primeiro numero1 é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O log2 do primeiro numero1 é %f\n", logaritmo2);

  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180));
  printf("O seno do primeiro numero1 é %f\n", seno);
  
  return 0;
}