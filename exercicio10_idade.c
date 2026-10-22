#include <stdio.h>
#include <time.h>

int bissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int dias_no_mes(int mes, int ano) {
    const int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && bissexto(ano)) {
        return 29;
    }
    return dias[mes - 1];
}

void calcular_idade(int dia_nascimento, int mes_nascimento, int ano_nascimento,
                   int dia_atual, int mes_atual, int ano_atual,
                   int *anos, int *meses, int *dias) {
    *anos = ano_atual - ano_nascimento;
    *meses = mes_atual - mes_nascimento;
    *dias = dia_atual - dia_nascimento;

    if (*dias < 0) {
        (*meses)--;
        int mes_anterior = mes_atual - 1;
        int ano_mes_anterior = ano_atual;
        if (mes_anterior == 0) {
            mes_anterior = 12;
            ano_mes_anterior--;
        }
        *dias += dias_no_mes(mes_anterior, ano_mes_anterior);
    }

    if (*meses < 0) {
        (*anos)--;
        *meses += 12;
    }
}

void exercicio10(void) {
    int dia, mes, ano;
    int anos, meses, dias;
    time_t agora = time(NULL);
    struct tm *data_atual = localtime(&agora);

    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    calcular_idade(dia, mes, ano,
                   data_atual->tm_mday,
                   data_atual->tm_mon + 1,
                   data_atual->tm_year + 1900,
                   &anos, &meses, &dias);

    if (anos < 0) {
        printf("Data de nascimento invalida ou futura.\n");
        return;
    }

    printf("Idade: %d ano(s), %d mes(es) e %d dia(s).\n", anos, meses, dias);
}

int main(void) {
    exercicio10();
    return 0;
}
