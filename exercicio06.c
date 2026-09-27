#include <stdio.h>

void exercicio6(void) {
    int v[10], maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    maior = menor = v[0];
    for (int i = 1; i < 10; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
}

int main(void) {
    exercicio6();
    return 0;
}
