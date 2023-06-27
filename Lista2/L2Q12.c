#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero para saber sua tabuada: ");
    scanf("%d", &numero);

    printf("tabuada do %d:\n", numero);
    
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n",numero, i, numero * i);
    }

    return 0;
}
