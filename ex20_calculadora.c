#include <stdio.h>
int main(void) {
    double a, b, resultado;
    char operacao;
    scanf("%lf %lf %c", &a, &b, &operacao);
    if (operacao == '/' && b == 0) { puts("Erro: divisao por zero."); return 1; }
    switch (operacao) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/': resultado = a / b; break;
        default: puts("Operacao invalida."); return 1;
    }
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
