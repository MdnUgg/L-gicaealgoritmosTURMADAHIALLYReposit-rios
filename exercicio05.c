#include <stdio.h>

void exercicio5(void) {
    int v[10], quantidade = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Valores pares: ");
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            printf("%d ", v[i]);
            quantidade++;
        }
    }
    printf("\nQuantidade de valores pares: %d\n", quantidade);
}

int main(void) {
    exercicio5();
    return 0;
}
