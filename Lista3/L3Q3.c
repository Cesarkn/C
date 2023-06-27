#include <stdio.h>

#define TAM 100

int main() {
    char string[TAM];
    int tamanho = 0;
    
    printf("Digite uma string: ");
    fgets(string, TAM, stdin);
    
    while (string[tamanho] != '\0' && string[tamanho] != '\n') {
        tamanho++;
    }
    
    printf("A quantidade de caracteres da string e: %d\n", tamanho);
    
    return 0;
}