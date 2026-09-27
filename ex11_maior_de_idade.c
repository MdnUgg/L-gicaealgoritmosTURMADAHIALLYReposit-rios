#include <stdio.h>
int main(void) {
    int idade;
    scanf("%d", &idade);
    printf("%s\n", idade >= 18 ? "Maior de idade" : "Menor de idade");
    return 0;
}
