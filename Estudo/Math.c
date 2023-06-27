#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);     // Sqrt= raiz quadrada de();
    double B = pow(2, 4);   // Power = x elevado a y;
    int C = round (3.49);   // Arredondamento para o mais proximo (3 ou 4 no caso)
    int D = ceil (3.14);    // Arredondamento sempre pra cima
    int E = floor (3.14);   // Arredondamento sempre pra baixo
    double F = fabs(-100);  // Transforma valor negativo em positivo (modulo)
    double G = log(3);      // Logaritmo de um numero
    double H = sin(45);     // seno de
    double I = cos(45);     // cosseno de
    double J = tan(45);     // tangente de

    printf("%lf",A);
    return 0;
}