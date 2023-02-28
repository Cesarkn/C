#include <stdio.h>
/* Faca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal. */
int main(){
    int a;
    puts("Digite uma valor inteiro decimal:");
    scanf("%d",&a);
    printf("%d em Hexadecimal: %x\n",a,a);
    printf("%d em Octal: %o\n",a,a);
    return 0;
}