#include <stdio.h>

int main() {
    float valor_mercadoria, entrada, prestacao;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor_mercadoria);

    entrada = valor_mercadoria / 3;
    prestacao = entrada;

    if (entrada < prestacao) {
        entrada += (int)valor_mercadoria % 3;
    }

    printf("Valor da entrada: R$ %.2f\n", entrada);
    printf("Valor das prestacoes: R$ %.2f\n", prestacao);
    printf("Valor total: R$ %.2f\n", entrada + 2 * prestacao);

    return 0;
}