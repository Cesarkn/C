#include <stdio.h>

float ConversorCparaF(float C) {
    float F = (C * 9 / 5) + 32;
    return F;
}

int main() {

    int C_ini = 10;
    int C_final = 100;

    // Conversão e exibição dos valores
    int C;
    for (C = C_ini; C <= C_final; C += 10) {
        float F = ConversorCparaF(C);
        printf("%d graus Celsius = %.1f graus Fahrenheit\n", C, F);
    }

    return 0;
}