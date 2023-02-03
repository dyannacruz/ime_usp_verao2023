#include <stdio.h>

int exponenciacao(int base, int expoente) {
    
    if (expoente == 0) {
        return 1;
    }
    return base * exponenciacao(base, expoente - 1);
}

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
}