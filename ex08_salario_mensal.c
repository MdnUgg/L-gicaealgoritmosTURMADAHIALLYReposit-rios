#include <stdio.h>
int main(void) {
    double horas, valor_hora;
    scanf("%lf %lf", &horas, &valor_hora);
    printf("Salario bruto: R$ %.2f\n", horas * valor_hora);
    return 0;
}
