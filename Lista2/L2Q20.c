#include <stdio.h>

int main() {
    int i;
    int fatorial = 1;

    for (i = 1; i <= 10; i += 2) {
        fatorial *= i;
        printf("Fatorial de %d: %d\n", i, fatorial);
    }

    return 0;
}