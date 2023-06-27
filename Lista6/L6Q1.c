#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

int main(){

    struct Aluno x;

    printf("Digite a primeira nota: ");
    scanf("%f", &x.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &x.nota2);

    x.media = (x.nota1 + x.nota2) / 2;

    printf("Media do aluno e: %.2f\n", x.media);

return 0;

}