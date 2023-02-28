#include <stdio.h>
/*Escreva um programa que peca ao usuario para digitar dois numeros, obtenha-os do usuario e imprima
a soma, o produto, a diferenca, o quociente e o resto da divisao dos dois numeros.*/
int main(){
    int a, b, soma, produto, diff, resto;
    double quociente;
    puts("Digite o primeiro numero:");
    scanf("%d",&a);
    puts("Digite o segundo numero:");
    scanf("%d",&b);
    soma = a + b;
    produto = a * b;
    diff = a - b;
    quociente = (double) a / b;
    resto = a % b;
    printf("Numeros: %d e %d\nSoma: %d\nProduto: %d\nDiferenca: %d\nQuociente: %lf\nResto: %d\n",a,b,soma,produto,diff,quociente,resto);
    return 0;
}