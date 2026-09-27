#include <stdio.h>

void exercicio13(void) {
    double v[5], maior, menor;
    int pos_maior = 0, pos_menor = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%lf", &v[i]);
    }

    maior = menor = v[0];
    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
            pos_maior = i;
        }
        if (v[i] < menor) {
            menor = v[i];
            pos_menor = i;
        }
    }

    printf("Maior valor: %.2f, na posicao %d (indice em C)\n", maior, pos_maior);
    printf("Menor valor: %.2f, na posicao %d (indice em C)\n", menor, pos_menor);
}

int main(void) {
    exercicio13();
    return 0;
}
