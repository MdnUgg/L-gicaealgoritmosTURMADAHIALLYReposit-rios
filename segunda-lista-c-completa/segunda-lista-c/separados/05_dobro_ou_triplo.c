#include <stdio.h>

int main(void) {
    double numero, resultado;
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero >= 0)
        resultado = numero * 2.0;
    else
        resultado = numero * 3.0;

    printf("Resultado = %.2f\n", resultado);
    return 0;
}
