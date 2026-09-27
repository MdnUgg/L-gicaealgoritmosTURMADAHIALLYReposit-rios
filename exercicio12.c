#include <stdio.h>

void exercicio12(void) {
    double v[5], maior, menor, soma = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%lf", &v[i]);
        soma += v[i];
    }

    maior = menor = v[0];
    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }

    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) printf("%.2f ", v[i]);
    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / 5.0);
}

int main(void) {
    exercicio12();
    return 0;
}
