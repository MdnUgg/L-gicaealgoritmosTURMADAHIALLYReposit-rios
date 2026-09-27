#include <stdio.h>
int main(void) {
    int opcao;
    double saldo, valor;
    scanf("%lf", &saldo);
    do {
        puts("1. Consultar saldo\n2. Depositar\n3. Sacar\n4. Sair");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: printf("Saldo: R$ %.2f\n", saldo); break;
            case 2: scanf("%lf", &valor); if (valor > 0) saldo += valor; else puts("Valor invalido."); break;
            case 3: scanf("%lf", &valor); if (valor > 0 && valor <= saldo) saldo -= valor; else puts("Saldo insuficiente ou valor invalido."); break;
            case 4: puts("Operacao encerrada."); break;
            default: puts("Opcao invalida.");
        }
    } while (opcao != 4);
    return 0;
}
