#include <stdio.h>

#define TAM 100

int main() {
    int numeros[TAM];
    int *ptr = numeros;
    int num, i = 0;
    
    printf("Digite um numero positivo (ou negativo para sair): ");
    scanf("%d", &num);
    
    while (num >= 0) {
        *(ptr + i) = num;
        
        if (i == 0 || num < *ptr) {
            ptr = numeros + i;
        }
        
        i++;
        
        printf("Digite um numero positivo (ou negativo para sair): ");
        scanf("%d", &num);
    }
    
    if (i > 0) {
        printf("\nO menor numero fornecido foi: %d\n", *ptr);
    } else {
        printf("\nNenhum numero foi fornecido.\n");
    }
    
    return 0;
}