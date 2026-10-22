#include <stdio.h>

#define PI 3.1414592

double volume_cilindro(double altura, double raio) {
    return PI * raio * raio * altura;
}

void exercicio04(void) {
    double altura, raio;

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    printf("Volume do cilindro: %.2f\n", volume_cilindro(altura, raio));
}

int main(void) {
    exercicio04();
    return 0;
}
