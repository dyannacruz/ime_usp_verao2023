#include <stdio.h>

int main()
{
    char caractare;
    scanf("%c", &caractare);
    
    caractare >= 'a' && caractare <='z' || caractare >= 'A' && caractare <='Z'? printf("LETRA") : printf("NUMERO");
}