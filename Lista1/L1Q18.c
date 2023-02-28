#include <stdio.h>
/*Escreva um programa que leia o raio de um cırculo e imprima seu diametro, o valor de sua circunferencia
e sua area. Use o valor de 3,14159 para ”pi”. Faca cada um destes calculos dentro da instrucoes (ou
instrucoes) printf e use o especificador de conversao %f.*/
int main(){
    float raio;
    const float pi = 3.14159;
    puts("Insira o valor do raio: ");
    scanf("%f",&raio);
    printf("Diametro: %f\n",(raio*2));
    printf("Circunferencia: %f\n",(2*pi*raio));
    printf("Area: %f\n",((raio*raio)*pi));
    return 0;
}