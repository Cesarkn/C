#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char nome[1];
    puts("Digite Seu nome:");
    scanf("%s",nome);
    printf("Ol� %s!",nome);

    return 0;

}