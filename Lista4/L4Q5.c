#include <stdio.h>

#define TAM 100

int tamanhoString(char *string) {
    int tamanho = 0;
    while (*string != '\0') {
        tamanho++;
        string++;
    }
    return tamanho;
}

int main() {
    char string[TAM];
    printf("Digite uma string: ");
    fgets(string, TAM, stdin);

    int tamanho = tamanhoString(string);
    printf("O tamanho da string e: %d\n", tamanho);

    return 0;
}