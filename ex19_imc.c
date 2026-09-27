#include <stdio.h>
int main(void) {
    double peso, altura, imc;
    scanf("%lf %lf", &peso, &altura);
    if (altura <= 0) { puts("Altura invalida."); return 1; }
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
    if (imc < 18.5) puts("Abaixo do peso");
    else if (imc < 25.0) puts("Peso adequado");
    else if (imc < 30.0) puts("Sobrepeso");
    else puts("Obesidade");
    return 0;
}
