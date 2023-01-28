#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int menor_num;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    menor_num = num1 < num2? num1 : num2;
    
    menor_num = menor_num < num3? menor_num : num3;
        printf("%d", menor_num);
}