#include <stdio.h>

void exercicio1(void) {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];

    printf("Valores de A[0], A[1] e A[5]: %d, %d e %d\n", A[0], A[1], A[5]);
    printf("Soma = %d\n", soma);

    A[4] = 100;
    printf("Vetor A depois de alterar A[4] para 100:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }
}

int main(void) {
    exercicio1();
    return 0;
}
