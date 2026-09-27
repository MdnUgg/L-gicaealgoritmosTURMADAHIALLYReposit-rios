#include <stdio.h>
int main(void) {
    double n1, n2, media;
    scanf("%lf %lf", &n1, &n2);
    media = (n1 + n2) / 2.0;
    printf("Media: %.2f\n", media);
    if (media >= 7.0) puts("Aprovado");
    else if (media >= 5.0) puts("Recuperacao");
    else puts("Reprovado");
    return 0;
}
