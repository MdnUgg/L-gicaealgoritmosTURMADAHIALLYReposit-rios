#include <stdio.h>

void mostrar_mes(int numero) {
    const char *meses[] = {
        "janeiro", "fevereiro", "marco", "abril",
        "maio", "junho", "julho", "agosto",
        "setembro", "outubro", "novembro", "dezembro"
    };
    const int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (numero < 1 || numero > 12) {
        printf("Mes invalido. Digite um numero entre 1 e 12.\n");
        return;
    }

    printf("Mes: %s\n", meses[numero - 1]);
    printf("Quantidade de dias: %d\n", dias[numero - 1]);
}

void exercicio02(void) {
    int numero;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &numero);
    mostrar_mes(numero);
}

int main(void) {
    exercicio02();
    return 0;
}
