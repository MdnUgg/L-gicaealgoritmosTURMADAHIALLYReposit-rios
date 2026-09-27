#include <stdio.h>

void exercicio4(void) {
    int v[8], x, y;

    for (int i = 0; i < 8; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    do {
        printf("Digite a posicao X (0 a 7): ");
        scanf("%d", &x);
    } while (x < 0 || x >= 8);

    do {
        printf("Digite a posicao Y (0 a 7): ");
        scanf("%d", &y);
    } while (y < 0 || y >= 8);

    printf("Soma de v[%d] e v[%d] = %d\n", x, y, v[x] + v[y]);
}

int main(void) {
    exercicio4();
    return 0;
}
