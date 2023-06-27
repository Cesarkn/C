#include <stdio.h>

int main() {
    int numero, maior = 0, menor = 0;
    int flag_maior = 0, flag_menor = 0;

    printf("Digite uma sequencia de numeros inteiros (digite um numero negativo e par para sair):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0)
            break;

        if (!flag_maior || numero > maior) {
            maior = numero;
            flag_maior = 1;
        }

        if (!flag_menor || numero < menor) {
            menor = numero;
            flag_menor = 1;
        }
    }

    if (flag_maior && flag_menor) {
        int produto = maior * menor;
        printf("\nProduto do maior pelo menor numero: %d\n", produto);
    } else {
        printf("\nNenhum numero foi digitado.\n");
    }

    return 0;
}