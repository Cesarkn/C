#include <stdio.h>
/* Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro eh multiplo do
segundo. Obs.: Nao utilizar estrutura de decisao if.*/
int main(){
	int n1,n2;
	puts("Insira o primeiro numero:");
	scanf("%d",&n1);
    puts("Insira o segundo numero:");
    scanf("%d",&n2);
	(n1%n2==0)?puts("multiplo!"):puts("Nao multiplo!");
	return 0;
}