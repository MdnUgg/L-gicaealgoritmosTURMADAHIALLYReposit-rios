#include <stdio.h>

#define PI 3.1414592

double volume_esfera(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

void exercicio05(void) {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    printf("Volume da esfera: %.2f\n", volume_esfera(raio));
}

int main(void) {
    exercicio05();
    return 0;
}
