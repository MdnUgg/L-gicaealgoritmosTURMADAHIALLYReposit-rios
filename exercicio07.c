#include <stdio.h>

void exercicio7(void) {
    int v[10], maior, posicao;

    for (int i = 0; i < 10; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;
    for (int i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posicao = i;
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior (indice em C): %d\n", posicao);
}

int main(void) {
    exercicio7();
    return 0;
}
