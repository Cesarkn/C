#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float somarVetor(float *vetor, int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return soma;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: ./programa <tamanho_vetor>\n");
        return 1;
    }

    int tamanho = atoi(argv[1]);

    float *vetor = (float *)malloc(tamanho * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (float)rand() / RAND_MAX;
    }

    float soma = somarVetor(vetor, tamanho);

    printf("Soma: %f\n", soma);

    free(vetor);

    return 0;
}