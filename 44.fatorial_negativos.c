#include <stdio.h>

int fatorial(int n) 
{
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return n * fatorial(n - 1);
    } else {
        return -1;
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));
    return 0;
}