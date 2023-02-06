#include <stdio.h>

int main () {
    char c;
    
    while (1) {
        printf("Digite um caractare: ");
        scanf(" %c", &c);
        
        if (c == '0') {
            break;
        }
        
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
            printf("-1\n");
        }else if (c >= 'a' && c <= 'z') {
            printf("1\n");
        }else{
            printf("2\n");
        }    
            
        }
    return 0;
}