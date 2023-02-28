#include <stdio.h>
/*Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores binarios.*/
int main() {
   int x, n, final;
   puts("Digite o valor de x: ");
   scanf("%d",&x);
   puts("Digite o valor de n: ");
   scanf("%d",&n);

   final = x << n;

   printf("Resultado: %d\n", final);

   return 0;
}