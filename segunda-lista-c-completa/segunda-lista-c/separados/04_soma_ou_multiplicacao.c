#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite A e B: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        c = a + b;
    else
        c = a * b;

    printf("C = %d\n", c);
    return 0;
}
