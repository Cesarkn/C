#include <stdio.h>

#define TAM 100

void concatenarStrings(char *destino, const char *origem) {
    while (*destino != '\0') {
        destino++;
    }
    
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}

int main() {
    char primeiraString[TAM];
    char segundaString[TAM];

    printf("Digite a primeira string: ");
    fgets(primeiraString, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(segundaString, TAM, stdin);

    concatenarStrings(primeiraString, segundaString);

    printf("A string concatenada e: %s\n", primeiraString);

    return 0;
}