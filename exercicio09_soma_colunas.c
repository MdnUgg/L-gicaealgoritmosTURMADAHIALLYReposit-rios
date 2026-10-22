#include <stdio.h>

#define LINHAS 61
#define COLUNAS 10

void somar_colunas(int matriz[LINHAS][COLUNAS]) {
    for (int coluna = 0; coluna < COLUNAS; coluna++) {
        matriz[LINHAS - 1][coluna] = 0;
        for (int linha = 0; linha < LINHAS - 1; linha++) {
            matriz[LINHAS - 1][coluna] += matriz[linha][coluna];
        }
    }
}

void exercicio09(void) {
    int matriz[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS - 1; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somar_colunas(matriz);

    printf("\nSomas armazenadas na 61a linha:\n");
    for (int coluna = 0; coluna < COLUNAS; coluna++) {
        printf("Coluna %d: %d\n", coluna + 1, matriz[LINHAS - 1][coluna]);
    }
}

int main(void) {
    exercicio09();
    return 0;
}
