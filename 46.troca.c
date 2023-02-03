#include <stdio.h>

int troca (int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return 0;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    troca (&a, &b);
    printf("%d %d", a, b);
}