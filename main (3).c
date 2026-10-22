#include <stdio.h>

void lerMatriz(int matriz[][3], int linha) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Quebra de linha a cada fim de linha da matriz
    }
}

int main(void) {
    int numeros[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    lerMatriz(numeros, 2);
    return 0;
}