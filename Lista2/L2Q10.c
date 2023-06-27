#include <stdio.h>

int main() {
    int i;

    for (i = 15; i <= 90; i++) {
        if (i % 4 == 0) {
            int quadrado = i * i;
            printf("%d\n", quadrado);
        }
    }

    return 0;
}