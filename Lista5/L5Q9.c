#include <stdio.h>

#define TAM 10

int main() {
    int matriz[TAM][TAM];
    int *ptr;
    int i, j, n;
    int soma = 0;

    printf("Digite o valor de N (tamanho da matriz): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    ptr = &matriz[0][0];
    for (i = 0; i < n; i++) {
        soma += *ptr;
        ptr += (n + 1);
    }

    if (soma % 2 == 0) {
        printf("A soma da diagonal principal e par.\n");
    } else {
        printf("A soma da diagonal principal e impar.\n");
    }

    return 0;
}