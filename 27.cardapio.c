#include <stdio.h>

int main()
{
    int codigo, qtd;
    float total;
    scanf("%d %d", &codigo, &qtd);
    
    switch(codigo){
        case 1:
            total = 8.5*qtd;
            break;
        case 2:
            total = 9.0*qtd;
            break;
        case 3:
            total = 7.5*qtd;
            break;
        case 4:
            total = 11.0*qtd;
            break;
        case 5:
            total = 8.3*qtd;
            break;
    }
    printf("%.2f", total);
    
}