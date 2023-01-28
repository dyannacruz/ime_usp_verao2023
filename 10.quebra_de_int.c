#include <stdio.h>

int main(void) {
    int numero, num1, num2, num3;
    scanf("%d", &numero);
    
    num1 = numero / 100;
    num2 = numero /10 % 10;
    num3 = numero % 10;
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d", num3);
    
    return(0);
}