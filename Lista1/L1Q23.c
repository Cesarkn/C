#include <stdio.h>
/*Escreva um programa que receba a entrada de um numero de tres dıgitos, separe o numero em seus
dıgitos componentes e reconstrua um numero com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321.*/
int main(){
    int numero,n1,n2,n3;
	puts("Escreva um numero de 3 digitos");
    scanf("%d",&numero);
    n1 = numero/1 % 10;
    n2 = numero/10 % 10;
    n3 = numero/100 % 10;
    printf("%d",n1);
    printf("%d",n2);
    printf("%d",n3);
	return 0;
}