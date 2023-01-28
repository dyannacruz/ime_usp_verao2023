#include <stdio.h>

int main (void)
{
  int meses, calculo; // Variáveis
  
  printf("Digite a quantidade de meses: ");
  scanf("%d", &meses); //Recebe inteiro dos meses
  
  calculo = (meses * 30); //Efetua a conta
  printf("A quantidade de dias = %d\n", calculo); //Impressão do resultado

  return(0);
}