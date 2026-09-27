#include <stdio.h>
int main(void) {
    int aprovados = 0, reprovados = 0;
    double nota;
    for (int i = 0; i < 10; i++) { scanf("%lf", &nota); if (nota >= 7.0) aprovados++; else reprovados++; }
    printf("Aprovados: %d\nReprovados: %d\nPercentual de aprovacao: %.2f%%\n", aprovados, reprovados, aprovados * 10.0);
    return 0;
}
