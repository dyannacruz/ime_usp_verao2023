#include <stdio.h>

int main()
{
    int resto50, resto10, resto5, resto1; //Variáveis
    int n50, n10, n5, n1;
    int saque;
    scanf("%d", &saque);
    
    n50 = saque / 50;
    resto50 = saque % 50;
    
    n10 = resto50 / 10;
    resto10 = n10 % 10;
    
    n5 = resto10 / 5;
    resto5 = n5 % 5;
    
    n1 = resto5;
    resto1 = n1 - n1;

    printf("%d\n", n50); //Impressóes
    printf("%d\n", n10);
    printf("%d\n", n5);
    printf("%d\n", n1);
}