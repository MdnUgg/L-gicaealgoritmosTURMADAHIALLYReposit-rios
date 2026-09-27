#include <stdio.h>

void exercicio9(void) {
    int v[6];

    for (int i = 0; i < 6; i++) {
        do {
            printf("Digite um valor par para v[%d]: ", i);
            scanf("%d", &v[i]);
            if (v[i] % 2 != 0) printf("Valor invalido: ele deve ser par.\n");
        } while (v[i] % 2 != 0);
    }

    printf("Valores pares em ordem inversa: ");
    for (int i = 5; i >= 0; i--) printf("%d ", v[i]);
    printf("\n");
}

int main(void) {
    exercicio9();
    return 0;
}
