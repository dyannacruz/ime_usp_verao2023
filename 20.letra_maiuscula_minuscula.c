#include <stdio.h>

int main()
{
    char caractare;
    scanf("%c", &caractare);
    
    if (caractare == 'a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'x'||'z'||'w'||'y') 
    printf("MINUSCULA");
    else
    printf("MAIUSCULA");
}