#include <stdio.h>
/*Faca um programa capaz de ler um valor real e escreve-lo com apenas uma casa decimal.*/
int main(){
    float a;
    printf("Digite um numero:\n");
    scanf("%f",&a);
    printf("Seu numero: %.1f\n",a);
    return 0;
}