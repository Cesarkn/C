#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

float calcularMedia(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2) / 2;
}

int main() {
    struct Aluno alunos[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = calcularMedia(alunos[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("Media do aluno %d: %.2f\n", i + 1, alunos[i].media);
    }

    return 0;
}