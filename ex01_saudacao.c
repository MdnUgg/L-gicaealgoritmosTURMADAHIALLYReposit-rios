#include <stdio.h>
int main(void) {
    char nome[100];
    printf("Nome: ");
    fgets(nome, sizeof nome, stdin);
    printf("Ola, %sSeja bem-vindo(a) a disciplina de Logica de Programacao.\n", nome);
    return 0;
}
