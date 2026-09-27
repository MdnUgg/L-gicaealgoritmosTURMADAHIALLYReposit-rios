#include <stdio.h>
int main(void) {
    int voto, c1 = 0, c2 = 0, c3 = 0, total = 0;
    do {
        scanf("%d", &voto);
        if (voto == 1) c1++;
        else if (voto == 2) c2++;
        else if (voto == 3) c3++;
        if (voto >= 1 && voto <= 3) total++;
    } while (voto != 0);
    printf("Candidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nTotal de votos: %d\n", c1, c2, c3, total);
    if (c1 == c2 && c2 == c3) puts("Empate entre os tres candidatos.");
    else if (c1 >= c2 && c1 >= c3) puts(c1 == c2 || c1 == c3 ? "Empate na primeira colocacao." : "Vencedor: Candidato 1");
    else if (c2 >= c1 && c2 >= c3) puts(c2 == c3 ? "Empate na primeira colocacao." : "Vencedor: Candidato 2");
    else puts("Vencedor: Candidato 3");
    return 0;
}
