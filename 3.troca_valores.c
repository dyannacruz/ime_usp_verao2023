#include <stdio.h>

int main (void)
{
  int a, b, a1, b1; // Variáveis
  
  printf("Digite o valor de a: ");
  scanf("%d", &a); //Recebe inteiro a
  
  printf("Digite o valor de b: ");
  scanf("%d", &b); //Recebe inteiro b
  a1 = b; //Efetua a troca
  b1 = a; //Efetua a troca
  
  printf("O resultado da troca = \n%d\n%d\n", a1, b1); //Impressão do resultado
  
  return(0);
}