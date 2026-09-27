#include <stdio.h>
int main(void) {
    double litros, preco, percentual, bruto, desconto;
    scanf("%lf %lf", &litros, &preco);
    if (litros < 20.0) percentual = 0.0;
    else if (litros <= 40.0) percentual = 3.0;
    else percentual = 5.0;
    bruto = litros * preco;
    desconto = bruto * percentual / 100.0;
    printf("Valor bruto: R$ %.2f\nDesconto: R$ %.2f (%.0f%%)\nValor final: R$ %.2f\n", bruto, desconto, percentual, bruto - desconto);
    return 0;
}
