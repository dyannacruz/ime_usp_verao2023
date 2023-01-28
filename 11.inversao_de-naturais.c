#include <stdio.h>

int main(void) {
    int numero, num1, num2, num3;
    scanf("%d", &numero);
    
    num1 = numero / 100;
    num2 = numero /10 % 10;
    num3 = numero % 10;
    
    //printf("%d", num3*100+num2*10+num1);
    printf("%d%d%d", num3, num2, num1);
    
    return(0);
}