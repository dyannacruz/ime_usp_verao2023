#include <stdio.h>
#include <stdlib.h>

int main() {
    char notas[12][3] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    
    int posicao;
    printf("Digite a posição no vetor: ");
    scanf("%d", &posicao);
    
    printf("Escala maior de %s: ", notas[posicao]);
    printf("%s\n", notas[posicao]);
    printf("%s\n", notas[(posicao + 2) % 12]);
    printf("%s\n", notas[(posicao + 4) % 12]);
    printf("%s\n", notas[(posicao + 5) % 12]);
    printf("%s\n", notas[(posicao + 7) % 12]);
    printf("%s\n", notas[(posicao + 9) % 12]);
    printf("%s\n", notas[(posicao + 11) % 12]);
    
    return 0;
    
}