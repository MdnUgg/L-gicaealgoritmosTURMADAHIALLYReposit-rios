#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void exercicio01(void) {
    int n1, n2, n3, n4;
    printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    printf("Soma = %d\n", n1 + n2 + n3 + n4);
}

void exercicio02(void) {
    double n1, n2, n3;
    printf("Digite tres notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("Media aritmetica = %.2f\n", (n1 + n2 + n3) / 3.0);
}

void exercicio03(void) {
    double n1, n2, n3, p1, p2, p3;
    printf("Digite nota e peso da primeira avaliacao: "); scanf("%lf %lf", &n1, &p1);
    printf("Digite nota e peso da segunda avaliacao: "); scanf("%lf %lf", &n2, &p2);
    printf("Digite nota e peso da terceira avaliacao: "); scanf("%lf %lf", &n3, &p3);
    printf("Media ponderada = %.2f\n", (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3));
}

void exercicio04(void) {
    double salario;
    printf("Digite o salario: "); scanf("%lf", &salario);
    printf("Novo salario = R$ %.2f\n", salario * 1.25);
}

void exercicio05(void) {
    double salario, percentual, aumento;
    printf("Digite o salario e o percentual de aumento: ");
    scanf("%lf %lf", &salario, &percentual);
    aumento = salario * percentual / 100.0;
    printf("Valor do aumento = R$ %.2f\nNovo salario = R$ %.2f\n", aumento, salario + aumento);
}

void exercicio06(void) {
    double base, gratificacao, imposto;
    printf("Digite o salario-base: "); scanf("%lf", &base);
    gratificacao = base * 0.05;
    imposto = base * 0.07;
    printf("Salario a receber = R$ %.2f\n", base + gratificacao - imposto);
}

void exercicio07(void) {
    double base;
    printf("Digite o salario-base: "); scanf("%lf", &base);
    printf("Salario a receber = R$ %.2f\n", base + 50.0 - base * 0.10);
}

void exercicio08(void) {
    double deposito, taxa, rendimento;
    printf("Digite o deposito e a taxa de juros (em %%): ");
    scanf("%lf %lf", &deposito, &taxa);
    rendimento = deposito * taxa / 100.0;
    printf("Rendimento = R$ %.2f\nTotal = R$ %.2f\n", rendimento, deposito + rendimento);
}

void exercicio09(void) {
    double base, altura;
    printf("Digite a base e a altura do triangulo: "); scanf("%lf %lf", &base, &altura);
    printf("Area = %.2f\n", base * altura / 2.0);
}

void exercicio10(void) {
    double raio;
    printf("Digite o raio do circulo: "); scanf("%lf", &raio);
    printf("Area = %.2f\n", PI * raio * raio);
}

void exercicio11(void) {
    double n;
    printf("Digite um numero positivo: "); scanf("%lf", &n);
    printf("Quadrado = %.2f\nCubo = %.2f\nRaiz quadrada = %.2f\nRaiz cubica = %.2f\n",
           n*n, n*n*n, sqrt(n), cbrt(n));
}

void exercicio12(void) {
    double base, expoente;
    printf("Digite a base e o expoente: "); scanf("%lf %lf", &base, &expoente);
    printf("Resultado = %.2f\n", pow(base, expoente));
}

void exercicio13(void) {
    double pes;
    printf("Digite uma medida em pes: "); scanf("%lf", &pes);
    printf("Polegadas = %.2f\nJardas = %.2f\nMilhas = %.6f\n", pes*12.0, pes/3.0, pes/(3.0*1760.0));
}

void exercicio14(void) {
    int nascimento, atual;
    printf("Digite o ano de nascimento e o ano atual: "); scanf("%d %d", &nascimento, &atual);
    printf("Idade atual = %d\nIdade em 2050 = %d\n", atual-nascimento, 2050-nascimento);
}

void exercicio15(void) {
    double fabrica, percentual_lucro, percentual_imposto, lucro, imposto;
    printf("Digite o preco de fabrica, o %% de lucro e o %% de impostos: ");
    scanf("%lf %lf %lf", &fabrica, &percentual_lucro, &percentual_imposto);
    lucro = fabrica * percentual_lucro / 100.0;
    imposto = fabrica * percentual_imposto / 100.0;
    printf("Lucro = R$ %.2f\nImpostos = R$ %.2f\nPreco final = R$ %.2f\n", lucro, imposto, fabrica + lucro + imposto);
}

void exercicio16(void) {
    double horas, minimo, hora, bruto, imposto;
    printf("Digite horas trabalhadas e valor do salario minimo: "); scanf("%lf %lf", &horas, &minimo);
    hora = minimo / 2.0;
    bruto = horas * hora;
    imposto = bruto * 0.03;
    printf("Salario bruto = R$ %.2f\nImposto = R$ %.2f\nA receber = R$ %.2f\n", bruto, imposto, bruto-imposto);
}

void exercicio17(void) {
    double salario, cheque1, cheque2, saldo, taxa = 0.0038;
    printf("Digite salario e valores dos dois cheques: "); scanf("%lf %lf %lf", &salario, &cheque1, &cheque2);
    saldo = salario - cheque1 - cheque1*taxa - cheque2 - cheque2*taxa;
    printf("Saldo atual = R$ %.2f\n", saldo);
}

void exercicio18(void) {
    double saco_kg, gramas_por_gato, restante;
    printf("Digite o peso do saco (kg) e a quantidade diaria por gato (g): ");
    scanf("%lf %lf", &saco_kg, &gramas_por_gato);
    restante = saco_kg * 1000.0 - 2.0 * gramas_por_gato * 5.0;
    printf("Racao restante apos cinco dias = %.2f g (%.2f kg)\n", restante, restante/1000.0);
}

int main(void) {
    int opcao;
    printf("Escolha um exercicio (1 a 18): ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1: exercicio01(); break; case 2: exercicio02(); break;
        case 3: exercicio03(); break; case 4: exercicio04(); break;
        case 5: exercicio05(); break; case 6: exercicio06(); break;
        case 7: exercicio07(); break; case 8: exercicio08(); break;
        case 9: exercicio09(); break; case 10: exercicio10(); break;
        case 11: exercicio11(); break; case 12: exercicio12(); break;
        case 13: exercicio13(); break; case 14: exercicio14(); break;
        case 15: exercicio15(); break; case 16: exercicio16(); break;
        case 17: exercicio17(); break; case 18: exercicio18(); break;
        default: printf("Opcao invalida.\n");
    }
    return 0;
}
