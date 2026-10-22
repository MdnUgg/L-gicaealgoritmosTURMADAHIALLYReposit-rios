#include <stdio.h>

void lerVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]); // Adicionado espaço para separar os números
     
    }  for (int i = 0; i < tamanho; i++)
        printf("%d",vetor[i]+1);
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    lerVetor(numeros, 5);
    return 0;
}