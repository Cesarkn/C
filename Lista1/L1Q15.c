#include <stdio.h>
/* Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de
dias trabalhados pelo vendedor e imprima o valor lıquido a ser pago ao mesmo, sabendo que se ele
trabalhou ate 10 dias nao tem direito a gratificacao, se ele trabalhou acima de 10 dias e ate 20 dias
tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%.
Sempre sao descontados 10% de imposto de renda em cima do valor bruto.*/
int main(){
    const float diaria = 50.25;
    int dia;
    float valor,final,gratificacao;
    const float imposto = 0.1;
    puts("Digite o numero de dias trabalhados:");
    scanf("%d",&dia);
    valor = diaria * dia;
    if(0 < dia && dia <= 10){
        final = valor-(valor*imposto);
        printf("Valor bruto a receber: R$%.2f\n",final);
    }
    else if(10 < dia && dia <= 20){
        gratificacao = valor+(valor*0.2);
        final = gratificacao-(gratificacao*imposto);
        printf("Valor bruto a receber: R$%.2f\n",final);
    }
    else if(dia > 20){
        gratificacao = valor+(valor*0.3);
        final = gratificacao-(gratificacao*imposto);
        printf("Valor bruto a receber: R$%.2f\n",final);
    }
    else{
        puts("Erro! Digite um numero valido!");
    }
    return 0;
}