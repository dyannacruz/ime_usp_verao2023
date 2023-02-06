#include <stdio.h>

int main() {
    
int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, n = 0, e = 0; // c = canditado // e = eleitores // n = nulos

printf("Digite o número do candidato (1, 2, 3, 4) ou -1 para encerrar a votação: ");
scanf("%d", &voto);

while (voto != -1) {
    if (voto == 1) {
        c1++;
    } else if (voto == 2) {
        c2++;
    } else if (voto == 3) {
        c3++;
    } else if (voto == 4) {
        c4++;
    } else {
        n++;
    }
    e++;
    printf("Digite o número do candidato (1, 2, 3, 4) ou -1 para encerrar a votação: ");
    scanf("%d", &voto);
}

    printf("eleitores: %d\n", e);
    printf("candidato 1: %d\n", c1);
    printf("candidato 2: %d\n", c2);
    printf("candidato 3: %d\n", c3);
    printf("candidato 4: %d\n", c4);
    printf("nulos: %d\n", n);

        return 0;
}
