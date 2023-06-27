#include <stdio.h>

//É POSSIVEL OBSERVAR QUE:
//Os endereços dos elementos do vetor de inteiro são diferentes, a difença entre os adjacentes são de 4 bytes.
//Os endereços dos elementos do vetor de floats são diferentes, a difença entre os adjacentes são de 4 bytes.
//Os endereços dos elementos do vetor de char são diferentes, a diferença entre os adjacentes são de 1 byte.

#define TAM 5

int main() {
    int vetorInt[TAM];
    float vetorFloat[TAM];
    char vetorChar[TAM];

    printf("Digite %d valores inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetorInt[i]);
    }

    printf("Digite %d valores reais:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%f", &vetorFloat[i]);
    }

    printf("Digite %d caracteres:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf(" %c", &vetorChar[i]);
    }

    printf("\nValores e enderecos do vetor de inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Valor: %d\tEndereco: %p\n", vetorInt[i], &vetorInt[i]);
    }

    printf("\nValores e enderecos do vetor de floats:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Valor: %.2f\tEndereco: %p\n", vetorFloat[i], &vetorFloat[i]);
    }

    printf("\nValores e enderecos do vetor de caracteres:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Valor: %c\tEndereco: %p\n", vetorChar[i], &vetorChar[i]);
    }

    return 0;
}