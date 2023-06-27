#include <stdio.h>

#define TAM 100

int main() {
    char string[TAM];
    char caractere;
    int contem = 0;

    printf("Digite uma string: ");
    fgets(string, TAM, stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // Remover o caractere de nova linha ('\n') gerado pelo fgets
    if (string[TAM - 1] == '\n')
        string[TAM - 1] = '\0';

    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == caractere) {
            contem = 1;
            break;
        }
        i++;
    }

    if (contem)
        printf("A string contem o caractere '%c'.\n", caractere);
    else
        printf("A string nao contem o caractere '%c'.\n", caractere);

    return 0;
}