#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    while (1){
        printf("Digite um numero de 1 a 7 ou digite 0 para sair: \n");
        scanf("%d",&numero);

        if(numero == 0){
            printf("Obrigado por utilizar!\n");
            break;
        }
        else if(numero >= 1 && numero <= 7){
            switch (numero){
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda\n");
                break; 
            case 3:
                printf("Terca\n");
                break;
            case 4:
                printf("Quarta\n");
                break;
            case 5:
                printf("Quinta\n");
                break;
            case 6:
                printf("Sexta\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            }
    }   else{
            printf("Numero invalido, por favor utilize um numero de 1-7 ou 0 para sair do programa!\n");
        }
    } 
    
    return 0;
}