#include <stdio.h>
int main(void) {
    double a, b, c, maior;
    scanf("%lf %lf %lf", &a, &b, &c);
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("Maior: %.2f\n", maior);
    return 0;
}
