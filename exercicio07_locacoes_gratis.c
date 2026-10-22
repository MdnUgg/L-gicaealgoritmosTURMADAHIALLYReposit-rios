#include <stdio.h>

#define TAMANHO 500

void calcular_locacoes_gratis(const int filmes[], int gratis[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        gratis[i] = filmes[i] / 15;
    }
}

void exercicio07(void) {
    int filmes[TAMANHO], gratis[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite a quantidade de filmes do cliente %d: ", i + 1);
        scanf("%d", &filmes[i]);
    }

    calcular_locacoes_gratis(filmes, gratis, TAMANHO);

    printf("\nLocacoes gratuitas por cliente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Cliente %d: %d locacao(oes) gratis\n", i + 1, gratis[i]);
    }
}

int main(void) {
    exercicio07();
    return 0;
}
