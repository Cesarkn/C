#include <stdio.h>

int main() {
    int i, A, B, quantidade = 0;

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
        if (i % 3 == 0) {
            quantidade += 1;
        }
    }

    printf("Quantidade de numeros divisiveis por 3 na faixa %d a %d = %d", A, B, quantidade);

    return 0;
}