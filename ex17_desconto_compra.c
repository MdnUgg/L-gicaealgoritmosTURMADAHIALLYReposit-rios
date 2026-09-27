#include <stdio.h>
int main(void) {
    double original, percentual, desconto, final;
    scanf("%lf", &original);
    if (original <= 100.0) percentual = 0.0;
    else if (original <= 500.0) percentual = 5.0;
    else percentual = 10.0;
    desconto = original * percentual / 100.0;
    final = original - desconto;
    printf("Valor original: R$ %.2f\nDesconto: %.0f%%\nValor do desconto: R$ %.2f\nValor final: R$ %.2f\n", original, percentual, desconto, final);
    return 0;
}
