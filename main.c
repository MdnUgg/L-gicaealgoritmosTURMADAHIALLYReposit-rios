#include <stdio.h>

void trocaValor(int *a, int *b) {
    int auxiliar = *a; // Guarda o valor de 'a'
    *a = *b;           // 'a' recebe o valor de 'b'
    *b = auxiliar;     // 'b' recebe o valor que estava no 'auxiliar'
}

int main() {
    int a = 10;
    int b = 20;
    
    trocaValor(&a, &b);
    
    printf("%d %d\n", a, b); // Saída: 20 10
    return 0;
}