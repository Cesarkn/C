#include <stdio.h>

int main() {
    int n, numero, digito, count;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    numero = n;
    count = 0;

    while (n != 0) {
        digito = n % 10;

        if (digito == 7) {
            count++;
        }

        n /= 10;
    }

    printf("Quantidade de digitos 7 no numero %d = %d\n", numero, count);

    return 0;
}