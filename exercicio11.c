#include <stdio.h>

void exercicio11(void) {
    double v[10], soma_positivos = 0.0;
    int quantidade_negativos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%lf", &v[i]);
        if (v[i] < 0) quantidade_negativos++;
        if (v[i] > 0) soma_positivos += v[i];
    }

    printf("Quantidade de numeros negativos: %d\n", quantidade_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);
}

int main(void) {
    exercicio11();
    return 0;
}
