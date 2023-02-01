#include <stdio.h>

int main() 
{
    int letra_criptografada;
    int num1, num2, num3;
    scanf("%d", &letra_criptografada);
    
    num1 = letra_criptografada / 100;
    num2 = letra_criptografada / 10 % 10; //operação
    num3 = letra_criptografada % 10;
    
    if (num2 == 0 || num2 == 5) {
        num1 + num3;
        printf("%d\n", num1 + num3);
    } else if (num2 == 1 || num2 == 6) {
        num1 - num3;
        printf("%d\n", num1 - num3);
    } else if (num2 == 2 || num2 == 7) {
        num1 * num3;
        printf("%d\n", num1 * num3);
    } else if (num2 == 3 || num2 == 8) {
        num1 / num3;
        printf("%d\n", num1 / num3);
    } else if (num2 == 4 || num2 == 9) {
        num1 % num3;
        printf("%d\n", num1 % num3);
    } else {
        printf("Invalido");
    }
    
}