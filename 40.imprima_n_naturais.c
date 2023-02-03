#include <stdio.h>

void imprime_naturais(int numero_a_imprimir, int n)
{
    if (numero_a_imprimir > n) {
        return;
    }
    printf("%d\n", numero_a_imprimir);
    imprime_naturais(numero_a_imprimir + 1, n);
}

int main () {
    int n;
    scanf("%d", &n);
    
    imprime_naturais(1, n);
    
}