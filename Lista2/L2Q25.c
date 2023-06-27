#include <stdio.h>

double calcularPi(int numTermos) {
    double pi = 0.0;
    int denominador = 1;
    int sinal = 1;

    for (int i = 0; i < numTermos; i++) {
        pi += sinal * 4.0 / denominador;
        denominador += 2;
        sinal *= -1;
    }

    return pi;
}

int main() {
    int numMaxTermos;

    printf("Digite o numero maximo de termos para calcular pi: ");
    scanf("%d", &numMaxTermos);

    printf("\nTabela de valores aproximados de pi:\n");
    printf("---------------------------------\n");
    printf("| Numero de Termos | Valor Aproximado de pi |\n");
    printf("---------------------------------\n");

    for (int i = 1; i <= numMaxTermos; i++) {
        double piAproximado = calcularPi(i);
        printf("|\t%2d\t|\t%.4f\t\t|\n", i, piAproximado);
    }

    printf("---------------------------------\n");

    return 0;
}