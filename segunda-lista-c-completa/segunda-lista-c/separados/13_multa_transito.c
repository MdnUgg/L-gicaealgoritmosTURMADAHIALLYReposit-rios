#include <stdio.h>

int main(void) {
    double limite, velocidade, excedente = 0.0;
    printf("Digite o limite da via e a velocidade registrada: ");
    scanf("%lf %lf", &limite, &velocidade);

    printf("Limite da via: %.2f km/h\n", limite);
    printf("Velocidade registrada: %.2f km/h\n", velocidade);

    if (velocidade <= limite) {
        printf("Nao houve infracao.\n");
    } else {
        excedente = (velocidade - limite) / limite * 100.0;
        printf("Percentual excedido: %.2f%%\n", excedente);
        if (excedente <= 20.0)
            printf("Classificacao: infracao media.\n");
        else if (excedente <= 50.0)
            printf("Classificacao: infracao grave.\n");
        else
            printf("Classificacao: infracao gravissima.\n");
    }

    if (velocidade > 120.0)
        printf("Alerta: velocidade extremamente elevada.\n");

    return 0;
}
