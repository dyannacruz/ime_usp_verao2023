#include <stdio.h>

int main (void) {
  int a, a1, a2; // Variáveis
  
  printf("Digite o valor de a: ");
  scanf("%d", &a); //Recebe inteiro a
  
  a1 = a-1; //Efetua a conta do Antecessor
  a2 = a+1; //Efetua a conta do Sucessor
  
  printf("Antecessor = %d\n", a1); //Impressão do resultado
  printf("Sucessor = %d\n", a2); //Impressão do resultado
  
  return(0);
}