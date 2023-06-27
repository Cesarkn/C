#include <stdio.h>

#define TAM 100

int buscarCaracter(const char *string, char caractere) {
    while (*string != '\0') {
        if (*string == caractere) {
            return 1;
        }
        string++;
    }
    return 0;
}

int main() {
    char string[TAM];
    char caractere;

    printf("Digite uma string: ");
    fgets(string, TAM, stdin);

    printf("Digite o caractere a ser buscado: ");
    scanf("%c", &caractere);

    int encontrado = buscarCaracter(string, caractere);

    if (encontrado) {
        printf("O caractere foi encontrado na string.\n");
    } else {
        printf("O caractere nao foi encontrado na string.\n");
    }

    return 0;
}