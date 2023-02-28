#include <stdio.h>
//Faca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.
int main(){
    int horas,minutos,segundos,total;
    printf("Digite a quantidade de horas:\n");
    scanf("%d",&horas);
    printf("Digite a quantidade de minutos:\n");
    scanf("%d",&minutos);
    printf("Digite a quantidade de segundos:\n");
    scanf("%d",&segundos);
    total = (horas*3600)+(minutos*60)+segundos;
    printf("Total em segundos: %d segundos.\n",total);

    return 0;
}