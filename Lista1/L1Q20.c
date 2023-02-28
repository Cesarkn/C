#include <stdio.h>
/*Escreva um programa que receba um numero inteiro e entao determine e imprima se ele eh par ou ımpar.
Obs.: Nao utilizar estrutura de decisao if.*/
int main(){
	int numero;
	puts("Insira um numero:");
	scanf("%d",&numero);
	(numero%2==0)?puts("Par"):puts("Impar");
	return 0;
}                   