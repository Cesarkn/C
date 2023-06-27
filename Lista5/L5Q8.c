#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void binarizarMatriz(int* matriz, int linhas, int colunas, int limiar) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (*(matriz + i * colunas + j) > limiar) {
                *(matriz + i * colunas + j) = 1;
            } else {
                *(matriz + i * colunas + j) = 0;
            }
        }
    }
}

void imprimirMatriz(int* matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", *(matriz + i * colunas + j));
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas, limiar;
  
    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &linhas);
  
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &colunas);
  
    printf("Informe o limiar para binarizacao: ");
    scanf("%d", &limiar);
  
    int* matriz = (int*)malloc(linhas * colunas * sizeof(int));
  
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            *(matriz + i * colunas + j) = rand() % 100;
        }
    }
  
    printf("\nMatriz original:\n");
    imprimirMatriz(matriz, linhas, colunas);
  
    binarizarMatriz(matriz, linhas, colunas, limiar);
  
    printf("\nMatriz binarizada:\n");
    imprimirMatriz(matriz, linhas, colunas);

    free(matriz);
  
    return 0;
}
