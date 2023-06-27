#include <stdio.h>

int main (){

    float valor1, valor2, resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &valor1);
    
    for (;;){
        printf("Digite o segundo numero (nao digite 0): \n");
        scanf("%f", &valor2);

        if (valor2 != 0){
            break;
        }
    }
    
    resultado = valor1 / valor2;

    printf("%.2f dividido por %.2f e igual a: %.2f \n", valor1, valor2, resultado);
    







    return 0;
}