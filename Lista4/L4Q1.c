#include <stdio.h>

#define TAM 0

void somar(int *num1, int *num2, int *resultado) {
    *resultado = *num1 + *num2;
}

int main() {
    int num1, num2, resultado;
    int *ptr_resultado;

    ptr_resultado = &resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    somar(&num1, &num2, &resultado);

    printf("Soma: %d\n", resultado);
    printf("Endereco de memoria do resultado: %p\n", (void *)ptr_resultado);

    return 0;
}