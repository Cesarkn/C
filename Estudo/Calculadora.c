#include <stdio.h>
#include <stdlib.h>

int main(){
    char operador;
    double num1, num2, resultado;

    printf("Digite um dos operadores: (+,-,*,/)\n");
    scanf("%c",&operador);

    printf("Digite o primeiro numero:");
    scanf("%lf",&num1);
    
    printf("Digite o segundo numero:");
    scanf("%lf", &num2);

    switch(operador){
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf", resultado);  
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf", resultado);  
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf", resultado);  
            break;
        case '/':
            resultado = num1 / num2;
            printf("Resultado: %.2lf", resultado);  
            break;
        default:
            printf("Operador inserido invalido, favor utilize apenas: +,-,*,/\n");
            break;
    }
    return 0;
}