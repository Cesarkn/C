#include <stdio.h>

int main() {
    int i, A, B; 
    int soma = 0;
    int qtd = 0;

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
        soma += i;
        qtd++; 
    }

    float media = (float)soma / qtd;

    printf("Media aritmetica dos numeros da faixa %d a %d = %.2f", A, B, media);

    return 0;
}