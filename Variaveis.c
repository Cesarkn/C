#include <stdio.h>
#include <locale.h> // Library com acentos e caracteres especiais para o portugues.

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil"); // - comando para puxar os caracteres especiais e acentos em português.
    int x; // - Declaração de uma variável.
    x = 123; // - Dar Valor a uma variável.
    int y = 321; // - Declarar e dar valor a uma variável.
    //------------------------------------------------------
    //------------------------------------------------------
    int idade = 21;         // - 
    float altura = 1.70;    // -
    char inicial = 'C';     // - 
    char nome[] = "Cesar";  // -

    printf("Olá %s !\n",nome); // - %s = string
    printf("Você tem: %d anos!\n",idade); // - %d = decimal
    printf("Sua inicial é: %c !\n",inicial); // - %c = caractere
    printf("Sua altura é: %.2fm!\n\n",altura); // - %f = float -- %.xf (x= numero de casas apos a virgula)


    printf("Olá %s! Você tem %d anos, sua inicial é \"%c\" e sua altura é %.2fm!",nome,idade,inicial,altura);

    return 0;
}