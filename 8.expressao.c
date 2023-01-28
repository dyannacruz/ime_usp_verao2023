#include <stdio.h>

int main(void)
{
    float a, b, c, d, x;
    printf("Digite um valor para a: ");
    scanf("%f", &a);
    printf("Digite um valor para b: ");
    scanf("%f", &b);
    printf("Digite um valor para c: ");
    scanf("%f", &c);
    
    x = (2*((a-c)/8)-b*5);
    printf("O resultado da expressão x é: %f", x);
    return 0;
}
