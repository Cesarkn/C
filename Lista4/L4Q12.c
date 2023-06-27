#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 14

void gerarVetorX(int X[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
    }
}

void gerarVetorY(int X[], int Y[], int N) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        int r = rand() % 10 + 1;
        if (r <= 3)
            Y[i] = X[i];
        else if (r <= 5)
            Y[i] = X[i] - 1;
        else if (r <= 7)
            Y[i] = X[i] + 1;
        else if (r <= 9)
            Y[i] = X[i] - 2;
        else
            Y[i] = X[i] + 2;
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

    gerarVetorX(X, TAM);
    gerarVetorY(X, Y, TAM);
    gerarMatriz(M, X, Y, TAM);
    imprimirMatriz(M, TAM);

    return 0;
}
