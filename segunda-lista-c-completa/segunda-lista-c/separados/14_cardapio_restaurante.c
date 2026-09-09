#include <stdio.h>

int main(void) {
    int codigo;
    printf("1 - Hamburguer com fritas ........ R$ 28,00\n");
    printf("2 - File de frango grelhado ..... R$ 32,00\n");
    printf("3 - Lasanha a bolonhesa .......... R$ 35,00\n");
    printf("4 - File de peixe com arroz ..... R$ 42,00\n");
    printf("5 - Salada especial .............. R$ 25,00\n");
    printf("Digite o codigo do prato: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1: printf("Hamburguer com fritas — R$ 28,00\n"); break;
        case 2: printf("File de frango grelhado — R$ 32,00\n"); break;
        case 3: printf("Lasanha a bolonhesa — R$ 35,00\n"); break;
        case 4: printf("File de peixe com arroz — R$ 42,00\n"); break;
        case 5: printf("Salada especial — R$ 25,00\n"); break;
        default: printf("Opcao invalida.\n");
    }

    return 0;
}
