#include <stdio.h>

int main() {
    int a = 10;
    int b, c;

    b = --a; 
    c = a--; 

    printf("Valor de \"a\" pre-incrementado: %d\n", b);
    printf("Valor de \"a\" pos-incrementado: %d\n", c);
    printf("Valor final de \"a\": %d\n", a);

    return 0;
}
