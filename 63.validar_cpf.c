#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cpf[15];
    int i, j, d1 = 0, d2 = 0, v1, v2; // sendo d  o digito e v verificacao
    
    printf("Digite o numero do CPF: ");
    
// leitura de caractares
    fgets(cpf, 15, stdin);
    
// remocao dos caractares
    for (i = 0, j = 0; cpf[i]; i++) {
        if (isdigit(cpf[i])) {
            cpf[j++] = cpf[i];
        }
    }
    
// adiciona o caractare 0 no final
    cpf[j] = '\0';

// verifica se o num do cpf tem 11 caractares    
    if (strlen(cpf) != 11) {
        printf("NAO\n");
        return 0;
    }
    
// calculo  do primeiro digito verificador
    for (i = 0; i < 9; i++) {
        d1 += (cpf[i] - '0') * (10 - i);
    }
    v1 = (d1 * 10) % 11;
    if (v1 == 10) {
        v1 = 0;
    }

// calculo  do segundo digito verificador
    for (i = 0; i < 10; i++) {
        d2 += (cpf[i] - '0') * (11 - i);
    }
    v2 = (d2 * 10) % 11;
    if (v2 == 10) {
        v2 = 0;
    }
    
// verificação
    if (v1 == cpf[9] - '0' && v2 == cpf[10] - '0') {
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }

    return 0;

}