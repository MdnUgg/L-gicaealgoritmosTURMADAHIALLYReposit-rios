#include <stdio.h>
int main(void) {
    int n;
    long long soma = 0;
    scanf("%d", &n);
    if (n < 1) { puts("N deve ser positivo."); return 1; }
    for (int i = 1; i <= n; i++) soma += i;
    printf("Soma: %lld\n", soma);
    return 0;
}
