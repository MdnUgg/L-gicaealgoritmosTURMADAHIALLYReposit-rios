#include <stdio.h>

void exercicio8(void) {
    int v[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Valores em ordem inversa: ");
    for (int i = 5; i >= 0; i--) printf("%d ", v[i]);
    printf("\n");
}

int main(void) {
    exercicio8();
    return 0;
}
