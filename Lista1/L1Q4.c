#include <stdio.h>
/*Sabendo que os argumentos da funcao “printf” podem ser expressoes (a+b, a/b, a*b...), e nao somente
argumentos, faca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio.
*/
int main(){
    int a;
    puts("Digite um numero:");
    scanf("%d",&a);
    printf("Triplo: %d, Quadrado: %d, Metade: %.2f \n",3*a,a*a,a/2.0);
    return 0;
}