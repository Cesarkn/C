#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularEMQ(double* vetorA, double* vetorB, int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        double diferenca = vetorA[i] - vetorB[i];
        soma += diferenca * diferenca;
    }
    return soma / tamanho;
}

int main() {
    int tamanho = 10;
    double* vetorA = (double*)malloc(tamanho * sizeof(double));
    double* vetorB = (double*)malloc(tamanho * sizeof(double));

    for (int i = 0; i < tamanho; i++) {
        vetorA[i] = (double)rand() / RAND_MAX; // Valores entre 0 e 1
        vetorB[i] = (double)rand() / RAND_MAX;
    }

    double emq = calcularEMQ(vetorA, vetorB, tamanho);

    printf("Erro medio quadratico: %f\n", emq);

    free(vetorA);
    free(vetorB);

    return 0;
}