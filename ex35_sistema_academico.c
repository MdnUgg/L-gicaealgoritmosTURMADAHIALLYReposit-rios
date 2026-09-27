#include <stdio.h>
int main(void) {
    int n, aprovados = 0, recuperacao = 0, reprovados = 0;
    char nome[100];
    double n1, n2, media, soma = 0, maior = 0, menor = 0;
    scanf("%d", &n);
    if (n <= 0) { puts("Quantidade invalida."); return 1; }
    for (int i = 0; i < n; i++) {
        scanf(" %99[^\n]", nome);
        scanf("%lf %lf", &n1, &n2);
        media = (n1 + n2) / 2.0; soma += media;
        if (i == 0) maior = menor = media;
        if (media > maior) maior = media;
        if (media < menor) menor = media;
        if (media >= 7.0) aprovados++;
        else if (media >= 5.0) recuperacao++;
        else reprovados++;
        printf("%s - Media: %.2f - ", nome, media);
        if (media >= 7.0) puts("Aprovado"); else if (media >= 5.0) puts("Recuperacao"); else puts("Reprovado");
    }
    printf("Quantidade de alunos: %d\nAprovados: %d\nRecuperacao: %d\nReprovados: %d\nMedia geral: %.2f\nMaior media: %.2f\nMenor media: %.2f\n", n, aprovados, recuperacao, reprovados, soma / n, maior, menor);
    return 0;
}
