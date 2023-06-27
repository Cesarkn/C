#include <stdio.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM];
    int i, j;

    printf("Digite os elementos da matriz %dx%d:\n", TAM, TAM);
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da diagonal principal:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
