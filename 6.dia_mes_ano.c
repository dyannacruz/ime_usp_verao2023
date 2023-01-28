#include <stdio.h>

int main(void)
{
  int dia, mes, ano;
  
  printf("Digite o dia (dd): ");
  scanf("%d", &dia); 
  printf("Digite o mes (mm): ");
  scanf("%d", &mes);
  printf("Digite o ano (aaaa): ");
  scanf("%d", &ano); 
  
  printf("Data requisitada: %d/%d/%d", dia, mes, ano); //Impressão

  return(0);
}