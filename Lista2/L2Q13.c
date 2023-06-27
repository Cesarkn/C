#include <stdio.h>

int main() {
    int i, A, B, soma = 0;

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
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("Somatorio dos numeros pares na faixa %d a %d = %d", A, B, soma);

    return 0;
}