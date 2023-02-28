#include <stdio.h>
/*Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo eh que a
variavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores
apos a efetivacao do processamento da troca.*/
int main(){
    int a; 
    int b;
    puts("Digite o valor de A: ");
    scanf("%d",&a);
    puts("Digite o valor de B: ");  
    scanf("%d",&b);           
    a = a ^ b;  
    b = a ^ b; 
    a = a ^ b;
    printf("A = %d, B = %d\n",a,b);
    return 0;
}