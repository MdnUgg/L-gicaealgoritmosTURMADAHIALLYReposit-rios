#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    puts(n % 2 == 0 ? "Par" : "Impar");
    return 0;
}
