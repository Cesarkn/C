#include <stdio.h>

int main(){

    int jose = 150;
    int pedro = 110;
    int crescjose = 2;
    int crescpedro = 3;
    int ano = 0;

    while (pedro <= jose) {
       jose += crescjose;
       pedro += crescpedro;
       ano++;
    }
    
    printf("Pedro sera maior que jose em %d anos", ano);

    return 0;
}