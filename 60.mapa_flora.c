#include <stdio.h>


int main() {
    int n, i, c = 0;
    char area;
    float porcento;

    printf("Digite o numero de areas: ");
    scanf("%d", &n);
    
    
    for (i = 0; i < n; i++) {
        scanf(" %c", &area);
        if (area == '#') {
            c++;
        }
    }
    
    porcento = (float) c / n * 100;
    
    printf("Número de áreas com maior densidade : %d\n", c);
    printf("Porcentagem de áreas com maior densidade : %.2f%%\n", porcento);
    
    return 0;
    
}