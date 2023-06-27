#include <stdio.h>

int main() {
    int n, maior, menor;

    printf("Digite um valor (0 para sair): ");
    scanf("%d", &n);

    maior = n;
    menor = n;

    while (n != 0) {
        printf("Digite um valor (0 para sair): ");
        scanf("%d", &n);

        if (n != 0) {
            if (n > maior) {
                maior = n;
            }

            if (n < menor) {
                menor = n;
            }
        }
    }

    printf("Maior Valor: %d\n", maior);
    printf("Menor Valor: %d\n", menor);

    return 0;
}