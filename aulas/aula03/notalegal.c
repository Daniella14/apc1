#include <stdio.h>

int main () {
  printf("\x1b[36m---------------------------\n");
  printf("    N O T A L E G A L      \n");
  printf("---------------------------\x1b[0m\n");
  printf("ITEM           QTD VALOR   \n");
  printf("%-15s %3i %8.2f\n", "Banana nanica", 1, 15.00);
  printf("%-15s %3i %8.2f\n", "Maca fuji", 1, 10.00);
  printf("%-15s %3i %8.2f\n", "Uva globo", 5, 26.00);
 // printf("Banana nanica  1     15.00 \n");
 // printf("Maca fuji      10     50.00 \n");
 // printf("Uva globo      5     26.00 \n");
  printf("---------------------------\n");
  printf("\x1b[36mTOTAL.........: R$%8.2f\x1b[0m\n" ,  91.00);
  return 0;
  
}