#include <stdio.h>
int main(void) {
    int idade;
    scanf("%d", &idade);
    if (idade <= 12) puts("Crianca");
    else if (idade <= 17) puts("Adolescente");
    else if (idade <= 59) puts("Adulto");
    else puts("Idoso");
    return 0;
}
