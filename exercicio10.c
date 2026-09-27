#include <stdio.h>

void exercicio10(void) {
    double notas[15], soma = 0.0;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }

    printf("Media geral: %.2f\n", soma / 15.0);
}

int main(void) {
    exercicio10();
    return 0;
}
