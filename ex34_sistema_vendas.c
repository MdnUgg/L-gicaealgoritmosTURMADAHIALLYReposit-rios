#include <stdio.h>
int main(void) {
    char produto[100];
    int quantidade, vendas = 0, total_produtos = 0;
    double preco, total, faturamento = 0, maior_venda = 0;
    while (1) {
        printf("Nome do produto (FIM para encerrar): ");
        scanf(" %99[^\n]", produto);
        if (produto[0] == 'F' && produto[1] == 'I' && produto[2] == 'M' && produto[3] == '\0') break;
        scanf("%d %lf", &quantidade, &preco);
        total = quantidade * preco;
        vendas++; total_produtos += quantidade; faturamento += total;
        if (total > maior_venda) maior_venda = total;
        printf("Total da venda: R$ %.2f\n", total);
    }
    printf("Quantidade de vendas: %d\nQuantidade de produtos: %d\nFaturamento: R$ %.2f\nMaior venda: R$ %.2f\n", vendas, total_produtos, faturamento, maior_venda);
    return 0;
}
