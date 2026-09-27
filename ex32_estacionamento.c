#include <stdio.h>
int main(void) {
    int entrada, saida, horas, cobradas;
    scanf("%d %d", &entrada, &saida);
    horas = saida - entrada;
    if (horas < 0) horas += 24;
    cobradas = horas > 0 ? horas : 1;
    printf("Tempo de permanencia: %d hora(s)\nValor total: R$ %.2f\n", horas, horas <= 1 ? 10.0 : 10.0 + (cobradas - 1) * 5.0);
    return 0;
}
