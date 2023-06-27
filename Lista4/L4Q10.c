#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

void gerarVetorAleatorio(int vetor[], int tamanho, int limite) {
    int i;
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % limite;
    }
}

void calcularOcorrencias(int vetor[], int tamanho, int ocorrencias[]) {
    int i;
    for (i = 0; i < tamanho; i++) {
        ocorrencias[vetor[i]]++;
    }
}

void exibirVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int X[TAM];
    int F[TAM] = {0};

    srand(time(NULL));

    gerarVetorAleatorio(X, TAM, TAM-1);
    calcularOcorrencias(X, TAM, F);

    printf("X = ");
    exibirVetor(X, TAM);

    printf("F = ");
    exibirVetor(F, TAM);

    return 0;
}
