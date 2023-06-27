//VERSAO COM strcmp()

#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char string1[TAM];
    char string2[TAM];
    int saoIguais;

    printf("Digite a primeira string: ");
    fgets(string1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAM, stdin);

    if (string1[strlen(string1) - 1] == '\n')
        string1[strlen(string1) - 1] = '\0';

    if (string2[strlen(string2) - 1] == '\n')
        string2[strlen(string2) - 1] = '\0';

    saoIguais = strcmp(string1, string2);

    if (saoIguais == 0)
        printf("As strings sao iguais.\n");
    else
        printf("As strings sao diferentes.\n");

    return 0;
}
