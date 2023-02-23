#include <stdio.h>

int main() {
    int num, prev = -1, count = 0;
    
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
    }
    count++;
    if (prev != -1 && num <= prev) {
        printf("nao %d\n", count - 1);
        return 0;
    }
    prev = num;
}

    printf("sim %d\n", count);
    return 0;
}