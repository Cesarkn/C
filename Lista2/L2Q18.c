#include <stdio.h>

int main() {
    int num_quadros = 64;
    unsigned long long soma_graos = 0;
    unsigned long long graos_quadro = 1;

    for (int quadro = 1; quadro <= num_quadros; quadro++) {
        soma_graos += graos_quadro;
        graos_quadro *= 2;
    }

    printf("Somatorio de graos no tabuleiro: %llu\n", soma_graos);

    return 0;
}