#include <stdio.h>

int main()
{
    int hora_inicial, hora_final, tempo;
    scanf("%d %d", &hora_inicial, &hora_final);

    tempo = (hora_final - hora_inicial);
    
    if (hora_final < hora_inicial){
        24 - hora_inicial + hora_final;
        printf("%d", (24 - hora_inicial + hora_final));
    }else if (tempo == 0){
        tempo + 24;
        printf("%d", tempo + 24);
    }else{ 
        printf("%d", tempo);
    }
}