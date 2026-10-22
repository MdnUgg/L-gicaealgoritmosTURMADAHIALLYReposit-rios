#include <stdio.h>

// Função que recebe o vetor e o seu tamanho, alterando os elementos pares
void multiplicarParesPor10(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Verifica se o número é par
        if (vetor[i] % 2 == 0) {
            vetor[i] *= 10; // Multiplica o elemento por 10
        }
    }
}

// Exemplo de uso da função
int main() {
    int meuVetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tam = sizeof(meuVetor) / sizeof(meuVetor[0]); // Calcula o tamanho do vetor

    printf("Vetor original: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    // Chama a função passando o vetor
    multiplicarParesPor10(meuVetor, tam);

    printf("Vetor modificado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", meuVetor[i]);
    }
    printf("\n");

    return 0;
}