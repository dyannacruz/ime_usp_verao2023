#include <stdio.h>

int main(void)
{
  float a, b, c, media;
  
  printf("Digite o valor de a: ");
  scanf("%f", &a); 
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c); 
  
  media = ((a+b+c)/3);
  printf("Data requisitada: %f", media); //Impressão

  return(0);
}