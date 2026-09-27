#include <stdio.h>
int main(void) {
    double celsius;
    scanf("%lf", &celsius);
    printf("Fahrenheit: %.2f\n", celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
