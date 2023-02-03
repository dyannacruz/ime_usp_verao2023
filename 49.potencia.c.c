/*
Recursividade:
    Uma função que chama a si mesma, direta ou indiretamente, é dita ser
    recursiva. A técnica recursiva permite a escrita de algoritmos mais claros e
    precisos, especialmente problemas que possuem natureza recursiva.
    O código abaixo mostra uma função recursiva em linguagem C para calcular a
    potência de um número inteiro:
*/

#include <stdio.h>

int potencia(int base, int expoente){
    if(expoente == 0)
        return 1;
            else
                return (base * potencia(base, expoente-1));
}

int main(){
int base = 2, expoente = 4, resultado;

resultado = potencia(base, expoente);
    printf("%d elevado a %d = %d", base, expoente, resultado);
        return 0;
}

/*
Em todas as funções recursivas existe:
    · Um caso base, ou condição de parada, cujo resultado é imediatamente conhecido.
    · Um passo recursivo em que se tenta resolver um sub-problema do problema
    inicial.
*/