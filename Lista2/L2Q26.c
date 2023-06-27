#include <stdio.h>

int main() {
    int i;

    printf("Decimal\t|\tBinario\t  |\tOctal\t|\tHexadecimal\t|\n");
    printf("-----------------------------------------------------------------\n");

    for (i = 1; i <= 256; i++) {
        printf("%d\t|\t", i);

        int j;
        for (j = 7; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
        }
        printf("  |\t");
        printf("%o\t|\t", i);
        printf("%X\t|\n", i);
    }

    return 0;
}