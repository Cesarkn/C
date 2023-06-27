#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3

int main() {
    int vetor[TAM];
    int i;
    int soma = 0;
    double produto = 1.0;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        vetor[i] = rand() % 20;
    }

    for (i = 0; i < TAM; i++) {
        soma += vetor[i];
    }

    for (i = 0; i < TAM; i++) {
        produto *= vetor[i];
    }

    double media_aritmetica = (double)soma / TAM;

    double media_geometrica = pow(produto, 1.0 / TAM);

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Media Aritmetica: %.2lf\n", media_aritmetica);
    printf("Media Geometrica: %.2lf\n", media_geometrica);

    return 0;
}
