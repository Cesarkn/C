#include <stdio.h>
#include <stdlib.h>

void encontrarMenorMaiorElemento(int* vetor, int tamanho, int*** enderecos) {
    int* enderecoMenor = vetor;
    int* enderecoMaior = vetor;

    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) < *enderecoMenor) {
            enderecoMenor = vetor + i;
        }

        if (*(vetor + i) > *enderecoMaior) {
            enderecoMaior = vetor + i;
        }
    }

    *enderecos = malloc(sizeof(int*) * 2);
    (*enderecos)[0] = enderecoMenor;
    (*enderecos)[1] = enderecoMaior;
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

    int** enderecosMenorMaior = NULL;
    encontrarMenorMaiorElemento(vetor, tamanho, &enderecosMenorMaior);

    printf("Endereco do menor elemento: %p\n", (void*)(*enderecosMenorMaior)[0]);
    printf("Endereco do maior elemento: %p\n", (void*)(*enderecosMenorMaior)[1]);

    free(*enderecosMenorMaior);
    free(enderecosMenorMaior);
    free(vetor);

    return 0;
}