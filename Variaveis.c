#include <stdio.h>
#include <locale.h> // Library com acentos e caracteres especiais para o portugues.

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil"); // - comando para puxar os caracteres especiais e acentos em portugu�s.
    int x; // - Declara��o de uma vari�vel.
    x = 123; // - Dar Valor a uma vari�vel.
    int y = 321; // - Declarar e dar valor a uma vari�vel.
    //------------------------------------------------------
    //------------------------------------------------------
    int idade = 21;         // - 
    float altura = 1.70;    // -
    char inicial = 'C';     // - 
    char nome[] = "Cesar";  // -

    printf("Ol� %s !\n",nome); // - %s = string
    printf("Voc� tem: %d anos!\n",idade); // - %d = decimal
    printf("Sua inicial �: %c !\n",inicial); // - %c = caractere
    printf("Sua altura �: %.2fm!\n\n",altura); // - %f = float -- %.xf (x= numero de casas apos a virgula)


    printf("Ol� %s! Voc� tem %d anos, sua inicial � \"%c\" e sua altura � %.2fm!",nome,idade,inicial,altura);

    return 0;
}