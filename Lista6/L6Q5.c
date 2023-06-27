#include <stdio.h>

struct professor {
    char nome[50];
};

struct disciplina {
    char nome[50];
    struct professor prof;
};

int main() {
    struct disciplina CdC;

    printf("Digite o nome da disciplina: ");
    scanf("%s", CdC.nome);

    printf("Digite o nome do professor: ");
    scanf("%s", CdC.prof.nome);

    printf("\nDisciplina: %s\n", CdC.nome);
    printf("Professor: %s\n", CdC.prof.nome);

    return 0;
}