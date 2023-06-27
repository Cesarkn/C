#include <stdio.h>

int main() {
    int numero, d1, d2, d4, d5;

    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &numero);

    d1 = numero / 10000;
    d2 = (numero / 1000) % 10;
    d4 = (numero / 10) % 10;
    d5 = numero % 10;

    if (d1 == d5 && d2 == d4) {
        printf("%d e um palindromo.\n", numero);
    } else {
        printf("%d nao e um palindromo.\n", numero);
    }

    return 0;
}