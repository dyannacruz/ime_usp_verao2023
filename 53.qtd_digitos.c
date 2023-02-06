#include <stdio.h>

int conta_digitos(int numero) {
    if (numero == 0) {
    return 0;
    }else{
    return 1 + conta_digitos(numero / 10);
}
}

int main () {
    int numero, count;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    count = conta_digitos(numero);
    printf("Resultado: %d", count);
    return 0;
}