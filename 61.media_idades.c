#include <stdio.h>

int main() {
    int idade, somaIdades = 0, numPessoas = 0;
    float mediaIdades;
    
    printf("Digite as idades (0 para encerrar): \n");
    scanf("%d", &idade);
    while (idade != 0) {
        somaIdades += idade;
        numPessoas++;
        scanf("%d", &idade);
    }
    
    if (numPessoas > 0) {
        mediaIdades = (float)somaIdades / numPessoas;
        printf("A idade média é: %.2f\n", mediaIdades);
    }else{
        printf("Não há dados sificientes para calcular a idade média\n");
    }
    return 0;
}