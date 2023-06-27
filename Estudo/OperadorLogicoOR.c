#include <stdio.h>

int main(){

    //Operador logico: || (OR) checa se pelo menos uma das condições é verdadeira.

    float temperatura = 25;

    if(temperatura <= 0 || temperatura >= 30){
        printf("\nO clima esta ruim!");
    }
    else{
        printf("\nO clima esta bom!");
    }

    return 0;
}