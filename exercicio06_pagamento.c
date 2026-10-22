#include <stdio.h>

int imprimir_opcoes(void) {
    int opcao;

    printf("\nOpcoes de pagamento:\n");
    printf("1 - A vista, com 10%% de desconto\n");
    printf("2 - Em duas vezes, preco da etiqueta\n");
    printf("3 - De 3 ate 10 vezes, com 3%% de juros ao mes\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

double pagamento_a_vista(double total) {
    return total * 0.90;
}

double pagamento_duas_vezes(double total) {
    return total;
}

double pagamento_parcelado(double total, int parcelas) {
    return total * (1.0 + 0.03 * parcelas);
}

void exercicio06(void) {
    double total, valor_final;
    int opcao, parcelas;

    printf("Digite o total gasto: R$ ");
    scanf("%lf", &total);
    opcao = imprimir_opcoes();

    switch (opcao) {
        case 1:
            valor_final = pagamento_a_vista(total);
            printf("Valor com desconto: R$ %.2f\n", valor_final);
            break;
        case 2:
            valor_final = pagamento_duas_vezes(total);
            printf("Valor total: R$ %.2f (2 parcelas de R$ %.2f)\n",
                   valor_final, valor_final / 2.0);
            break;
        case 3:
            if (total <= 100.0) {
                printf("Parcelamento de 3 a 10 vezes disponivel apenas para compras acima de R$ 100,00.\n");
                break;
            }
            printf("Digite a quantidade de parcelas (3 a 10): ");
            scanf("%d", &parcelas);
            if (parcelas < 3 || parcelas > 10) {
                printf("Quantidade de parcelas invalida.\n");
                break;
            }
            valor_final = pagamento_parcelado(total, parcelas);
            printf("Valor total com juros: R$ %.2f\n", valor_final);
            printf("Valor de cada parcela: R$ %.2f\n", valor_final / parcelas);
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

int main(void) {
    exercicio06();
    return 0;
}
