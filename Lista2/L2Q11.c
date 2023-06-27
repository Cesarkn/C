#include <stdio.h>

int main() {
    int i, A, B;

    printf("Digite o primeiro numero: ");
    scanf("%d",&A);
    printf("Digite o segundo numero: ");
    scanf("%d",&B);

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (i = A; i <= B; i++) {
        if (i % 4 == 0) {
            int quadrado = i * i;
            printf("%d\n", quadrado);
        }
    }

    return 0;
}