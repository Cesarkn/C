#include <stdio.h>
//Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores sucessor e antecessor.
int main(){
    int numero,ant,suc;
    puts("Digite um numero inteiro:");
    scanf("%d",&numero);
    ant = numero - 1;
    suc = numero + 1;
    printf("Seu numero: %d\nO Antecessor: %d\nO Sucessor: %d",numero,ant,suc);

    return 0;
}