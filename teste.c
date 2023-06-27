#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);

    // Verifica se o número é negativo
    if (num < 0) {
        printf("Erro: O número deve ser inteiro e positivo.\n");
        return 0;
    }

    // Calcula o fatorial do número
    for (i = 1; i <= num; ++i) {
        fatorial *= i;
    }

    // Imprime o resultado
    printf("O fatorial de %d é %llu.\n", num, fatorial);

    return 0;
}
