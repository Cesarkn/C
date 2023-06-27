#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: programa valor1 valor2 operacao\n");
        return 1;
    }

    int valor1 = atoi(argv[1]);
    int valor2 = atoi(argv[2]);
    int operacao = atoi(argv[3]);

    int vetor[2] = { valor1, valor2 };
    int resultado = 0;

    if (operacao == 1) {
        int *ptr = vetor;
        resultado = *ptr + *(ptr + 1);
        printf("Resultado da soma: %d\n", resultado);
    } else if (operacao == 2) {
        int *ptr = vetor;
        resultado = *ptr * *(ptr + 1);
        printf("Resultado da multiplicacao: %d\n", resultado);
    } else {
        printf("Operacao invalida. Use 1 para soma ou 2 para multiplicacao.\n");
        return 1;
    }

    return 0;
}
