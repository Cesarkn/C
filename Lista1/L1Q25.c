#include <stdio.h>
/*Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
ha neste tempo.*/
int main(){
	int horas,minutos,segundos,x,y;
    puts("Digite uma quantidade de segundos: ");
    scanf("%d", &x);
    horas = x / 3600;
    y = x % 3600;
    minutos = y / 60;
    segundos = y % 60;
    printf("Horas: %d\nMinutos: %d\nSegundos: %d\n",horas,minutos,segundos);
	return 0;
}