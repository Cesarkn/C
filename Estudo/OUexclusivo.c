#include <stdio.h>

int main(){
    int a = 10; // 1010
    int b = 7;  // 0111
                // ^ = OU Exclusivo
    a = a ^ b;  // 1101
    b = a ^ b;  // 1010
    a = a ^ b;
    // = inversão de valores de um variavel sem a necessidade de uma 3ª variavel.
    printf("a = %d, b = %d\n",a,b);

    return 0;
}