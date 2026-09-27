#include <stdio.h>
int main(void) {
    int quantidade;
    double nota, soma = 0;
    scanf("%d", &quantidade);
    if (quantidade <= 0) { puts("Quantidade invalida."); return 1; }
    for (int i = 1; i <= quantidade; i++) { scanf("%lf", &nota); soma += nota; }
    printf("Media geral: %.2f\n", soma / quantidade);
    return 0;
}
