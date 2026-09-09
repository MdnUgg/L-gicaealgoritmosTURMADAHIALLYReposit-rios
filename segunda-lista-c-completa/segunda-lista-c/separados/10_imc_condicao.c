#include <stdio.h>

int main(void) {
    double peso, altura, imc;
    printf("Digite o peso em kg e a altura em metros: ");
    scanf("%lf %lf", &peso, &altura);

    imc = peso / (altura * altura);
    printf("IMC = %.2f\n", imc);

    if (imc < 18.5)
        printf("Condicao: Abaixo do peso.\n");
    else if (imc <= 25.0)
        printf("Condicao: Peso normal.\n");
    else if (imc <= 30.0)
        printf("Condicao: Acima do peso.\n");
    else
        printf("Condicao: Obeso.\n");

    return 0;
}
