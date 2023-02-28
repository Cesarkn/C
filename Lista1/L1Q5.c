#include <stdio.h>
/*
Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garcom.
*/
int main(){
    float valor,taxa,total;
    taxa = 0.1;
    puts("Digite o valor da conta. R$");
    scanf("%f",&valor);
    total = (valor*taxa)+valor;
    printf("Sua conta com a taxa ficou: R$%.2f\n",total);
    return 0;
}