#include <stdio.h>

double maior_de_dois(double a, double b) {
    return (a > b) ? a : b;
}

void exercicio01(void) {
    double a, b;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    printf("Maior numero: %.2f\n", maior_de_dois(a, b));
}

int main(void) {
    exercicio01();
    return 0;
}
