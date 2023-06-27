#include <stdio.h>

#define TAM 2

void trocarNumeros(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int numeros[TAM];

    printf("Digite dois numeros separados por espaco: ");
    scanf("%d %d", &numeros[0], &numeros[1]);

    printf("Antes da troca: %d %d\n", numeros[0], numeros[1]);

    trocarNumeros(&numeros[0], &numeros[1]);

    printf("Depois da troca: %d %d\n", numeros[0], numeros[1]);

    return 0;
}