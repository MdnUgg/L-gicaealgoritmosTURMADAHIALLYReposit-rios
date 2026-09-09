#include <stdio.h>

int main(void) {
    int identificacao;
    double nota1, nota2, nota3, media_exercicios, ma;
    char conceito;

    printf("Digite identificacao, nota1, nota2, nota3 e media dos exercicios: ");
    scanf("%d %lf %lf %lf %lf", &identificacao, &nota1, &nota2,
          &nota3, &media_exercicios);

    ma = (nota1 + nota2 * 2.0 + nota3 * 3.0 + media_exercicios) / 7.0;

    if (ma >= 90) conceito = 'A';
    else if (ma >= 75) conceito = 'B';
    else if (ma >= 60) conceito = 'C';
    else if (ma >= 40) conceito = 'D';
    else conceito = 'E';

    printf("Identificacao: %d\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n",
           identificacao, nota1, nota2, nota3);
    printf("Media dos exercicios: %.2f\nMedia de aproveitamento: %.2f\n",
           media_exercicios, ma);
    printf("Conceito: %c\nSituacao: %s\n", conceito,
           conceito == 'A' || conceito == 'B' || conceito == 'C' ?
           "Aprovado" : "Reprovado");

    return 0;
}
