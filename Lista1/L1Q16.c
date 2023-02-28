#include <stdio.h>
/*Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa, eh
necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.*/
int main(){
    float valorhora,nhoras,salarioliquido,desconto,salariobruto,inss;

    puts("Digite o valor da hora da aula:");
    scanf("%f",&valorhora);
    puts("Digite o numero de horas trabalhadas no mes:");
    scanf("%f",&nhoras);
    puts("Digite o percentual de desconto do INSS(apenas numeros):");
    scanf("%f",&inss);
    desconto = inss / 100;
    salariobruto = (valorhora * nhoras);
    salarioliquido = salariobruto-(salariobruto*desconto);
    printf("Salario bruto: R$%.2f\n",salariobruto);
    printf("Salario Liquido: R$%.2f\n",salarioliquido);

    return 0;
}