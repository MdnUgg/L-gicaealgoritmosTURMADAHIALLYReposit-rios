#include <stdio.h>

void exercicio3(void) {
    double v[10], quadrados[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº numero real: ", i + 1);
        scanf("%lf", &v[i]);
        quadrados[i] = v[i] * v[i];
    }

    printf("Vetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", v[i]);
    }
    printf("\nVetor dos quadrados: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", quadrados[i]);
    }
    printf("\n");
}

int main(void) {
    exercicio3();
    return 0;
}
