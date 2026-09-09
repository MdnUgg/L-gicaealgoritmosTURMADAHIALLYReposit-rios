#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[80], estado_civil[20], sexo;
    int tempo_casamento;

    printf("Digite o nome: ");
    scanf("%79s", nome);
    printf("Digite o sexo (F/M): ");
    scanf(" %c", &sexo);
    printf("Digite o estado civil (CASADA, SOLTEIRA etc.): ");
    scanf("%19s", estado_civil);

    if ((sexo == 'F' || sexo == 'f') &&
        strcmp(estado_civil, "CASADA") == 0) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempo_casamento);
        printf("%s, tempo de casamento: %d anos.\n", nome, tempo_casamento);
    } else {
        printf("%s: nao e necessario informar tempo de casamento.\n", nome);
    }

    return 0;
}
