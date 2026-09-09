#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b < c)
        printf("A soma de A + B e menor que C.\n");
    else
        printf("A soma de A + B nao e menor que C.\n");

    return 0;
}
