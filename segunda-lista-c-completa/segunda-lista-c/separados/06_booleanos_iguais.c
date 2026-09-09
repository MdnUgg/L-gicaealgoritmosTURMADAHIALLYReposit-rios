#include <stdio.h>

int main(void) {
    int primeiro, segundo;
    printf("Digite dois valores logicos (0 = falso, 1 = verdadeiro): ");
    scanf("%d %d", &primeiro, &segundo);

    if (primeiro == 1 && segundo == 1)
        printf("Ambos sao VERDADEIROS.\n");
    else if (primeiro == 0 && segundo == 0)
        printf("Ambos sao FALSOS.\n");
    else
        printf("Os valores sao diferentes.\n");

    return 0;
}
