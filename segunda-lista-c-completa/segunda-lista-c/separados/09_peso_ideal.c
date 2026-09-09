#include <stdio.h>

int main(void) {
    double altura, peso_ideal;
    char sexo;
    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
        peso_ideal = 72.7 * altura - 58.0;
    else if (sexo == 'F' || sexo == 'f')
        peso_ideal = 62.1 * altura - 44.7;
    else {
        printf("Sexo invalido.\n");
        return 1;
    }

    printf("Peso ideal = %.2f kg\n", peso_ideal);
    return 0;
}
