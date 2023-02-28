#include <stdio.h>
#include <stdlib.h>
/*Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo).
Nao utilize estrutura de decisao if.*/
int main(){
    int valor,absoluto;
    puts("Digite um valor inteiro:");
    scanf("%d",&valor);
    absoluto = abs(valor);
    printf("Valor absuluto: %d\n",absoluto);
}