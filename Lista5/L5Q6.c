#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

float calcularMedia(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return (float)soma / tamanho;
}

float calcularMediana(int *vetor, int tamanho) {
    qsort(vetor, tamanho, sizeof(int), compare);
    if (tamanho % 2 == 0) {
        return (*(vetor + tamanho / 2 - 1) + *(vetor + tamanho / 2)) / 2.0;
    } else {
        return *(vetor + tamanho / 2);
    }
}

int calcularModa(int *vetor, int tamanho) {
    int contador = 0, moda = 0, maxContador = 0;
    for (int i = 0; i < tamanho; i++) {
        int count = 0;
        for (int j = 0; j < tamanho; j++) {
            if (*(vetor + j) == *(vetor + i)) {
                count++;
            }
        }
        if (count > maxContador) {
            maxContador = count;
            moda = *(vetor + i);
        }
    }
    return moda;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Vetor gerado: ");
    for (int i = 0; i < tamanho; i++) {
        *(vetor + i) = rand() % 10;
        printf("%d ", *(vetor + i));
    }
    printf("\n");

    float media = calcularMedia(vetor, tamanho);
    printf("Media: %.2f\n", media);

    float mediana = calcularMediana(vetor, tamanho);
    printf("Mediana: %.2f\n", mediana);

    int moda = calcularModa(vetor, tamanho);
    printf("Moda: %d\n", moda);

    free(vetor);

    return 0;
}
