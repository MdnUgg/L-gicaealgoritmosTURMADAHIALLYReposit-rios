#include <stdio.h>

void exercicio2(void) {
    int v[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Valores lidos:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(void) {
    exercicio2();
    return 0;
}
