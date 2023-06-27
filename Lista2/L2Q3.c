#include <stdio.h>
#include <stdlib.h>

int main(){
    int F, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&F);

    if(F < 0){
        printf("Numero invalido!");
        return 0;
    }
    
    for(i = 1; i <= F; ++i){
        fatorial *= i;
    }

    printf("O fatorial de %d e: %llu",F,fatorial);

    return 0;
}