#include <stdio.h>
int main(void) {
    double n;
    scanf("%lf", &n);
    if (n > 0) puts("Positivo");
    else if (n < 0) puts("Negativo");
    else puts("Zero");
    return 0;
}
