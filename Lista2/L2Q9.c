#include <stdio.h>

int main(){

    int v = 20 , t1 = 1, t2 = 1, proxt;

    printf("Vinte primeiros termos da sequencia de Fibonacci: \n");
    printf("%d ", t1);  
    printf("%d ", t2);


    for (int i = 3; i <= v; i++) {
        proxt = t1 + t2;
        printf("%d ", proxt);
        t1 = t2;
        t2 = proxt;
    }

    return 0;
}