#include <stdio.h>

void identidade(char ,int );

int main(){

    char nome[];
    int idade;

    printf("Digite seu Nome:\n");
    scanf("%c", &nome[]);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    identidade(nome, idade);

    return 0;
}

void identidade(char NOME[],int IDADE)
{
    printf("Ola %s!\n", NOME);
    printf("Voce tem %d anos!\n", IDADE);
}