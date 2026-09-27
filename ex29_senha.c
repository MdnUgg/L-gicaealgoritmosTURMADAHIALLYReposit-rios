#include <stdio.h>
int main(void) {
    int senha;
    do { scanf("%d", &senha); if (senha != 1234) puts("Senha incorreta. Tente novamente."); } while (senha != 1234);
    puts("Acesso autorizado.");
    return 0;
}
