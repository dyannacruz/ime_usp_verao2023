#include <stdio.h>

int main() 
{
    int a, b, c;
    int a_quadrado, b_quadrado, c_quadrado;
    scanf("%d %d %d", &a, &b, &c);
    
    a_quadrado = a*a;
    b_quadrado= b*b;
    c_quadrado = c*c;

    if ( a_quadrado == b_quadrado + c_quadrado) {
        printf("1 %d", a_quadrado); 
    } else if ( b_quadrado == a_quadrado + c_quadrado) {
        printf("1 %d", b_quadrado);
    } else if ( c_quadrado == a_quadrado + b_quadrado) {
        printf("1 %d", c_quadrado);
    } else {
        printf("0"); }
}
