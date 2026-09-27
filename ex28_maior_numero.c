#include <stdio.h>
int main(void) {
    double n, maior;
    scanf("%lf", &maior);
    for (int i = 1; i < 10; i++) { scanf("%lf", &n); if (n > maior) maior = n; }
    printf("Maior numero: %.2f\n", maior);
    return 0;
}
