#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

void gerarVetores(int X[], int Y[], int N) {
    srand(time(NULL));
    for (int i = 0; i < 2 * N; i++) {
        if (i < N)
            X[i] = rand() % N;
        else
            Y[i - N] = rand() % N;
    }
}

void gerarMatriz(int M[][TAM], int X[], int Y[], int N) {
    for (int i = 0; i < N; i++) {
        int x = X[i];
        int y = Y[i];
        M[x][y]++;
    }
}

void imprimirMatriz(int M[][TAM], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int X[TAM], Y[TAM];
    int M[TAM][TAM] = {0};

    gerarVetores(X, Y, TAM);
    gerarMatriz(M, X, Y, TAM);
    imprimirMatriz(M, TAM);

    return 0;
}
