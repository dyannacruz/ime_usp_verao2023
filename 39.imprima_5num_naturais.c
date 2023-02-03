#include <stdio.h>

void imprime_naturais(int numero_a_imprimir)
{
    if (numero_a_imprimir > 5) {
        return;
    }
    printf("%d\n", numero_a_imprimir);
    imprime_naturais(numero_a_imprimir + 1);
}

int main () {
    imprime_naturais(1);
    
}