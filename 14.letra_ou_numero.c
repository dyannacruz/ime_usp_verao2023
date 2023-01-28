#include <stdio.h>

int main(){
    char caractare;
    scanf("%c", &caractare);
    
    if (caractare >= '0' && caractare <= '9'){
        printf("NUMERO");
    }
    else if (caractare >= 'a' && caractare <= 'z' || caractare >= 'A' && caractare <= 'Z' ){
        printf("LETRA");
    }
    else {
        printf("NAO NUMERO");
    }

}
