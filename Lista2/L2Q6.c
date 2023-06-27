#include <stdio.h>

int main() {
    int voto, votostotais = 0;
    int votosPaulo = 0, votosRenata = 0, votosBrancos = 0, votosNulos = 0;

    printf("Urna Eletronica - Eleicao Presidencial\n");

    do {
        printf("\nDigite o numero do candidato (5 - Paulo, 7 - Renata, 0 - Branco): ");
        scanf("%d", &voto);

        if (voto >= 0) {
            votostotais++;

            if (voto == 5) {
                votosPaulo++;
            } else if (voto == 7) {
                votosRenata++;
            } else if (voto == 0) {
                votosBrancos++;
            } else {
                votosNulos++;
            }

            printf("Voto registrado. Deseja continuar? (Digite 1 para sim, qualquer outro numero para nao): ");
            int continuar;
            scanf("%d", &continuar);

            if (continuar != 1) {
                break;
            }
        } else {
            printf("Votacao encerrada.\n");
        }
    } while (voto >= 0);

    printf("\nResultado da Eleicao\n");
    printf("====================\n");
    printf("Total de votos: %d\n", votostotais);
    printf("Votos em Paulo: %d (%.2f%%)\n", votosPaulo, (float)votosPaulo / votostotais * 100);
    printf("Votos em Renata: %d (%.2f%%)\n", votosRenata, (float)votosRenata / votostotais * 100);
    printf("Votos em branco: %d (%.2f%%)\n", votosBrancos, (float)votosBrancos / votostotais * 100);
    printf("Votos nulos: %d (%.2f%%)\n", votosNulos, (float)votosNulos / votostotais * 100);

    if (votosPaulo > votosRenata) {
        printf("Candidato eleito: Paulo\n");
    } else if (votosRenata > votosPaulo) {
        printf("Candidata eleita: Renata\n");
    } else {
        printf("Eleicao empatada\n");
    }

    return 0;
}