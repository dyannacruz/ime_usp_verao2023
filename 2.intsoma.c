#include <stdio.h>

int main (void)
{
  int a, b, soma; // Variáveis
  
  printf("Digite o valor de a: ");
  scanf("%d", &a); //Recebe inteiro a
  
  printf("Digite o valor de b: ");
  scanf("%d", &b); //Recebe inteiro b
  soma = a + b; //Efetua a soma de a+b 
  
  printf("O resultado da soma = %d\n", soma); //Impressão do resultado
  
  return(0);
}