#include <stdio.h>

#define ORDEM 10

void trocar_linhas(int matriz[ORDEM][ORDEM], int linha1, int linha2) {
    for (int coluna = 0; coluna < ORDEM; coluna++) {
        int temporario = matriz[linha1][coluna];
        matriz[linha1][coluna] = matriz[linha2][coluna];
        matriz[linha2][coluna] = temporario;
    }
}

void trocar_colunas(int matriz[ORDEM][ORDEM], int coluna1, int coluna2) {
    for (int linha = 0; linha < ORDEM; linha++) {
        int temporario = matriz[linha][coluna1];
        matriz[linha][coluna1] = matriz[linha][coluna2];
        matriz[linha][coluna2] = temporario;
    }
}

void trocar_diagonais(int matriz[ORDEM][ORDEM]) {
    for (int i = 0; i < ORDEM; i++) {
        int temporario = matriz[i][i];
        matriz[i][i] = matriz[i][ORDEM - 1 - i];
        matriz[i][ORDEM - 1 - i] = temporario;
    }
}

void trocar_linha_com_coluna(int matriz[ORDEM][ORDEM], int linha, int coluna) {
    for (int i = 0; i < ORDEM; i++) {
        int temporario = matriz[linha][i];
        matriz[linha][i] = matriz[i][coluna];
        matriz[i][coluna] = temporario;
    }
}

void alterar_matriz(int matriz[ORDEM][ORDEM]) {
    trocar_linhas(matriz, 1, 7);              /* linha 2 com linha 8 */
    trocar_colunas(matriz, 3, 9);             /* coluna 4 com coluna 10 */
    trocar_diagonais(matriz);                 /* diagonal principal/secundaria */
    trocar_linha_com_coluna(matriz, 4, 9);    /* linha 5 com coluna 10 */
}

void imprimir_matriz(const int matriz[ORDEM][ORDEM]) {
    for (int i = 0; i < ORDEM; i++) {
        for (int j = 0; j < ORDEM; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void exercicio08(void) {
    int matriz[ORDEM][ORDEM];

    for (int i = 0; i < ORDEM; i++) {
        for (int j = 0; j < ORDEM; j++) {
            printf("Digite matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    alterar_matriz(matriz);
    printf("\nMatriz alterada:\n");
    imprimir_matriz(matriz);
}

int main(void) {
    exercicio08();
    return 0;
}
