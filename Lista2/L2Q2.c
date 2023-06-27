#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    do {
        printf("Digite um numero de 1 a 7 ou digite 0 para sair: \n");
        scanf("%d", &numero);

        if(numero >= 1 && numero <= 7) {
            char *dias_semana[] = {"domingo", "segunda", "terca", "quarta", "quinta", "sexta", "sabado"};
            char *dia = dias_semana[numero - 1];
            printf("%s\n", dia);
        } else if(numero != 0) {
            printf("Numero invalido, por favor utilize um numero de 1-7 ou 0 para sair do programa!\n");
        }
    } while(numero != 0);

    printf("Obrigado por utilizar!\n");

    return 0;
}
