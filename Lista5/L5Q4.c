#include <stdio.h>

void normalize(int* vetor, int tamanho) {
    int min = *vetor;
    int max = *vetor;

    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) < min) {
            min = *(vetor + i);
        }
        if (*(vetor + i) > max) {
            max = *(vetor + i);
        }
    }

    for (int i = 0; i < tamanho; i++) {
        *(vetor + i) = (*(vetor + i) - min) / (float)(max - min);
    }
}

int main() {
    int vetor[] = {5, 10, 15, 20, 25};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    normalize(vetor, tamanho);

    printf("Vetor normalizado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", (float)vetor[i]);
    }
    printf("\n");

    return 0;
}
