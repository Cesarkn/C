#include <stdio.h>
/*Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atraves da seguinte formula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7      */
int main(){
    float altura,peso;
    char sexo;
    puts("Ola, Digite \"M\" se voce eh do sexo masculino e \"F\" se voce eh do sexo feminino");
    scanf("%c",&sexo);
    puts("Digite sua altura em metros:");
    scanf("%f",&altura);

    if(sexo == 'M'){
        peso = 72.7 * altura - 58;
        printf("Seu peso ideal: %.2fkg\n",peso);
    }
    else if(sexo == 'F'){
        peso = 62.1 * altura - 44.7;
        printf("Seu peso ideal: %.2fkg\n",peso);
    }
    else{
        puts("ERRO! Tente novamente");
    }
    return 0;
}