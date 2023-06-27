#include <stdio.h>

int main() {
    int i, soma1 = 0, soma2 = 0;

    for (i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            soma1 += i;
        }
    }

    printf("Somatorio de todos os numeros divisiveis por 3 na faixa 0 a 100 = %d\n", soma1);

    for (i = 100; i <= 200; i++) {
        if (i % 5 == 0) {
            soma2 += i;
        }
    }

    printf("Somatorio de todos os numeros divisiveis por 5 na faixa 100 a 200 = %d\n", soma2);

    return 0;
}