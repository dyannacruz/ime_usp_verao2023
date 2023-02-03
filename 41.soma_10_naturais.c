#include <stdio.h>

int soma_naturais(int n) {
    if (n == 1) {
        return 1; }
            return n + soma_naturais(n - 1); }

int main () {
    int n;
        scanf("%d", &n);
        printf("%d", soma_naturais(n)); }