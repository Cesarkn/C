#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *ponteiro_matriz;
    int quantidade_elementos;
    float media;
} InformacoesVetor;

InformacoesVetor calcularMediaVetor(int *vetor, int tamanho) {
    InformacoesVetor info;

    info.ponteiro_matriz = vetor;
    info.quantidade_elementos = tamanho;
    info.media = 0.0;

    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    info.media = (float) soma / tamanho;

    return info;
}

int main() {
    srand(time(NULL));

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;  // Gera números aleatórios de 0 a 99
    }

    InformacoesVetor info = calcularMediaVetor(vetor, tamanho);

    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Quantidade de elementos: %d\n", info.quantidade_elementos);
    printf("Media: %.2f\n", info.media);

    free(vetor);

    return 0;
}