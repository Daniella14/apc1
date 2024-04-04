/* 
Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
*/

#include <stdio.h>

int main(){
  int nota = 0;

  printf("Entre com a nota: ");
  int deu_certo = scanf("%i", &nota);

  if(nota == 1)
  printf("Ruim %i\n", nota);
    
  if(nota == 2)
  printf("Insuficiente %i\n", nota);
    
  if(nota == 3)
  printf("Suficiente %i\n", nota); 
  
  if(nota == 4)
  printf("Bom %i\n", nota);
    
  if(nota == 5)
  printf("Otimo %i\n", nota); 
    
    return 0;
  }

  

  



    
    
}