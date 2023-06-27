#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;
    int add = a + b;     // + (Adição)
    int sub = a - b;     // - (Subtração)
    int mul = a * b;     // * (Multiplicação)
    int div = a / (float)b; // / (Divisão)
    int res = a % b;// % (Módulo (resto))
    a++;        // ++ (aumentar)
    b--;        // -- (diminuir)


    printf("%d %d",a,b);



    return 0;
}