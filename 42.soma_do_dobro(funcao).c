#include <stdio.h>

int soma_dobro(int x, int y) {
    return x*2 + y*2;
}
int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d", soma_dobro(x, y));
}