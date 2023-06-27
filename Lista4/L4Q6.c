#include <stdio.h>

#define TAM 100

void copiarString(char *destino, const char *origem) {
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}

int main() {
    char origem[TAM];
    char destino[TAM];

    printf("Digite uma string de origem: ");
    fgets(origem, TAM, stdin);

    copiarString(destino, origem);

    printf("A string copiada e: %s\n", destino);

    return 0;
}