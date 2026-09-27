#include <stdio.h>
int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Soma: %.2f\nSubtracao: %.2f\nMultiplicacao: %.2f\n", a + b, a - b, a * b);
    if (b != 0) printf("Divisao: %.2f\n", a / b);
    else printf("Divisao: impossivel (divisor igual a zero)\n");
    return 0;
}
