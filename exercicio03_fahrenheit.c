#include <stdio.h>

double fahrenheit_para_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

void exercicio03(void) {
    double fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Temperatura em Celsius: %.2f C\n",
           fahrenheit_para_celsius(fahrenheit));
}

int main(void) {
    exercicio03();
    return 0;
}
