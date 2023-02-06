#include <stdio.h>

void converte_hora(int total_segundos, int *h, int *m, int *s) {
    if (total_segundos >= 0) {

    *h = total_segundos / 3600;
    *m = (total_segundos % 3600) / 60;
    *s = (total_segundos % 3600) % 60;
    return; }
}

int main () {
    int total_segundos, h, m, s;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total_segundos); 
    
    converte_hora(total_segundos, &h, &m, &s); 
    printf("%02d %02d %02d", h, m, s); 
    return 0; 
}
  