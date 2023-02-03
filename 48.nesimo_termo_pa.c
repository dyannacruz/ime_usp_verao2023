//#include <stdio.h>
//int pa(int termo1, int razao, int n){
//    if (n == 1) {
//        return termo1; }
//    return razao + pa(termo1, razao, n-1);}
//int main() 
//{int termo1, razao, n;
//    scanf("%d %d %d", &termo1, &razao, &n);
//    printf("%d", pa(termo1, razao, n)); }

#include <stdio.h>

int main() {
    int termo1, razao, n;
    int termo_atual = 2, pa;
    
    scanf("%d %d %d", &termo1, &razao, &n);
    pa = termo1;
    
    while(termo_atual <= n) {
        pa = pa + razao;
        termo_atual = termo_atual + 1;
}
    printf("%d", pa);
}