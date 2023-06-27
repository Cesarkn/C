//VERSAO SEM strcmp()

#include <stdio.h>

#define TAM 100

int compararStrings(char string1[], char string2[]) {
    int i = 0;

    while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] != string2[i])
            return 0;
        i++;
    }

    return 1;
}

int main() {
    char string1[TAM];
    char string2[TAM];
    int saoIguais;

    printf("Digite a primeira string: ");
    fgets(string1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAM, stdin);

    if (string1[TAM - 1] == '\n')
        string1[TAM - 1] = '\0';

    if (string2[TAM - 1] == '\n')
        string2[TAM - 1] = '\0';

    saoIguais = compararStrings(string1, string2);

    if (saoIguais)
        printf("As strings sao iguais.\n");
    else
        printf("As strings sao diferentes.\n");

    return 0;
}
