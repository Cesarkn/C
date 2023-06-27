#include <stdio.h>

#define TAM 15

int main() {
    float vetor[TAM];
    float menor, maior, soma;
    int i;

    printf("Digite os %d elementos do vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    menor = vetor[0];
    maior = vetor[0];
    for (i = 1; i < TAM; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    soma = menor + maior;

    printf("A soma do menor e do maior elemento e: %.2f\n", soma);

    return 0;
}