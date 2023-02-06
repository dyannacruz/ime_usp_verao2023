#include <stdio.h>

int soma_digitos(int numero) {
    if (numero == 0) {
        return 0;
    }else{
        return (numero % 10 + soma_digitos(numero / 10));
    }
}

int main () {
    int numero, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    soma = soma_digitos(numero);
    printf("%d", soma);
    return 0;
}