#include <stdio.h>
#include <stdlib.h>

int* encontrarMenorElemento(int* vetor, int tamanho) {
    int* enderecoMenor = vetor;

    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) < *enderecoMenor) {
            enderecoMenor = vetor + i;
        }
    }

    return enderecoMenor;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <tamanho do vetor>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);
    int* vetor = malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", vetor + i);
    }

    int* enderecoMenor = encontrarMenorElemento(vetor, tamanho);

    printf("Endereco do menor elemento: %p\n", (void*)enderecoMenor);

    free(vetor);

    return 0;
}