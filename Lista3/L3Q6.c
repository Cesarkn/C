#include <stdio.h>
#include <string.h>

#define TAM 100

void inverteString(char* str) {
    int i, j;
    char temp;

    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char string[TAM];

    printf("Digite uma string: ");
    fgets(string, TAM, stdin);

    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    inverteString(string);

    printf("String invertida: %s\n", string);

    return 0;
}