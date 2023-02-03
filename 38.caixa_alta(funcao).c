#include <stdio.h>

char caixa_alta (char letra) 
{
    if (letra >= 'a' && letra <= 'z') 
        {
        letra -= 32; // que seria o mesmo que --> letra = letra - 32; 
        }
        return letra;
}

int main () {
    char caractare;
    scanf(" %c", &caractare);
    printf("%c\n", caixa_alta(caractare));
    
    scanf(" %c", &caractare);
    printf("%c\n", caixa_alta(caractare));
    
    scanf(" %c", &caractare);
    printf("%c\n", caixa_alta(caractare));
}