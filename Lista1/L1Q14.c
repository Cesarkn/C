#include <stdio.h>
/*Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A formula de conversao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.*/
int main(){
    float C, F;
    puts("Digite a temperatura em graus Celsius: ");
    scanf("%f",&C);
    F = (9 * C + 160) / 5;
    printf("A temperatura digitada equivale a %.1f graus Fahrenheit\n",F);
    return 0;
}