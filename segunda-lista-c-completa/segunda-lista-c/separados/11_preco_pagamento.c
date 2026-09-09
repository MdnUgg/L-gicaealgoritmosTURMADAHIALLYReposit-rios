#include <stdio.h>

int main(void) {
    double preco, final;
    int codigo;
    printf("Digite o preco e o codigo de pagamento (1 a 4): ");
    scanf("%lf %d", &preco, &codigo);

    switch (codigo) {
        case 1: final = preco * 0.90; break;
        case 2: final = preco * 0.85; break;
        case 3: final = preco; break;
        case 4: final = preco * 1.10; break;
        default:
            printf("Codigo de pagamento invalido.\n");
            return 1;
    }

    printf("Valor final a pagar = R$ %.2f\n", final);
    return 0;
}
