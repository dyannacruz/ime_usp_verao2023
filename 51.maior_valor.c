#include <stdio.h>

int main() {
    int n, i, valor, maior = 0;
    
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Insira o valor inteiro: ");
        scanf("%d", &valor);
        
        if (valor > maior) {
            maior = valor;
        }
    }
    printf("O maior valor lido é: %d\n", maior);
    return 0;
}