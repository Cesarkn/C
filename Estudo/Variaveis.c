#include <stdio.h>

int main(){

    int x; // - Declaracao de uma variavel.
    x = 123; // - Dar Valor a uma variavel.
    int y = 321; // - Declarar e dar valor a uma variavel.
    //------------------------------------------------------
    //------------------------------------------------------
    int idade = 21;         // - 
    float altura = 1.70;    // -
    char inicial = 'C';     // - 
    char nome[] = "Cesar";  // -
    char nomec[25];
    puts("Digite seu nome completo:");
    fgets(nomec, 25, stdin);

    printf("Ola %s !\n",nome); // - %s = string
    printf("Seu nome completo: %s",nomec);
    printf("Voce tem: %d anos!\n",idade); // - %d = decimal
    printf("Sua inicial: %c !\n",inicial); // - %c = caractere
    printf("Sua altura: %.2fm!\n\n",altura); // - %f = float -- %.xf (x= numero de casas apos a virgula)

    return 0;
}