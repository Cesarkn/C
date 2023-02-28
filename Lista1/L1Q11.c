#include <stdio.h>
/*Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. O
programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de reais que o usuario
deseja converter.*/
int main(){
    float dolar,real,conversao;
    puts("Insira a cotacao atual do dolar: ");
    scanf("%f",&dolar);
    puts("Insira o valor em real que voce deseja converter:");
    scanf("%f",&real);
    conversao = real/dolar;
    printf("R$%.2f equivale a $%.2f na cotacao atual de R$%.2f\n",real,conversao,dolar);
    return 0;
}