#include <stdio.h>
int main(void) {
    double distancia, litros;
    scanf("%lf %lf", &distancia, &litros);
    if (litros > 0) printf("Consumo medio: %.2f km/L\n", distancia / litros);
    else printf("Quantidade de combustivel invalida.\n");
    return 0;
}
