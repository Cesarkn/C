#include <stdio.h>
//Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.
int main(){
    int a,b;
    puts("Digite um valor inteiro: ");
    scanf("%d",&a);
    b = a * a;
    printf("%d elevado ao quadrado = %d\n",a,b);
    return 0;
}