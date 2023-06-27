#include <stdio.h>
#include <stdbool.h>

int main(){

    //Operador Logico = ! (NOT) reverte o estado da condição

    bool ensolarado = false;

    if(!ensolarado){
        printf("Esta nublado la fora!");
    }
    else{
        printf("Esta ensolarado la fora!");
    }



    return 0;
}