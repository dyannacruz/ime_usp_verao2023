#include <stdio.h>

int main()
{
    int hora1, minuto1, segundo1, total_segundo1;
    int hora2, minuto2, segundo2, total_segundo2;
    int diferenca;
    
    scanf("%d %d %d", &hora1, &minuto1, &segundo1);
    scanf("%d %d %d", &hora2, &minuto2, &segundo2);
    
    total_segundo1 = segundo1 + minuto1*60 + hora1*3600;
    total_segundo2 = segundo2 + minuto2*60 + hora2*3600;
    
    diferenca = total_segundo1 - total_segundo2;
    if (diferenca < 0) {
        diferenca = diferenca * -1;
    }
    
    printf("%d", diferenca);
    
    return 0;
}