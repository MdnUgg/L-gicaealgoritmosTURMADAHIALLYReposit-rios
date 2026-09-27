#include <stdio.h>
int main(void) {
    char produto[100];
    int quantidade;
    double preco;
    scanf(" %99[^\n]", produto);
    scanf("%d %lf", &quantidade, &preco);
    printf("Produto: %s\nValor total: R$ %.2f\n", produto, quantidade * preco);
    return 0;
}
