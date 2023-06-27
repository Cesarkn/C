#include <stdio.h>
#include <stdbool.h>

int main(){
    //Operador logico = && (AND) checa se duas condições são verdadeiras
    
    float temperatura = 25; 
    bool ensolarado = true; 

    if(temperatura >= 0 && temperatura <= 30 && ensolarado == true){ // apenas "ensolarado" ou "ensolarado == 1" tambem sao possiveis.  
        printf("\n O clima esta bom!");
    }
    else{
        printf("\n O clima esta ruim!")
    }

    return 0;
}