#include <stdio.h>
/*Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
formula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */
int main(){
    float v,c,l,a;
    puts("Insira o comprimento da caixa: ");
    scanf("%f",&c);
    puts("Insira a largura da caixa: ");
    scanf("%f",&l);
    puts("Insira a altura da caixa: ");
    scanf("%f",&a);
    v = c * l * a;
    printf("Volume = %f\n",v);
    return 0;
}