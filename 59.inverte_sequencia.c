#include <stdio.h>

#define MAX 30

int main() {
    int i, vet[MAX], size = 0;
    
    printf("Digite os valores inteiros da sequencia (finalize com zero): \n");
    scanf("%d", &vet[size]);
    while (vet[size] != 0 && size < MAX) {
        size++;
        scanf("%d", &vet[size]);
    }
    
    printf("Sequencia invertida: \n");
    for (i = size-1; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }
    
    return 0;
}