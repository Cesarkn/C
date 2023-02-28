#include <stdio.h>
/*Diga a ordem de calculo dos operadores em cada uma das instru coes em C a seguir e mostre o valor
de x depois que cada instru ̧cao for executada.
• x = 7 + 3*6/2-l
• x = 2%2 + 2*2-2/2;
• x = (3 * 9 * (3 + (9*3/ (3) ) ) );    */
int main(){
    //Ordem x1 - 3*6 ---> 18/2 ---> 7+9 ---> 16-1
    int x1 = 7 + 3*6/2-1;
    printf("Resultado x1: %d\n",x1);
    //Ordem x2 - 2%2 ---> 2*2 ---> 2/2 ---> 0+4 ---> 4-1
    int x2 = 2%2 + 2*2-2/2;
    printf("Resultado x2: %d\n",x2);
    //Ordem x3 - 3/(3) ---> (9*1) ---> 3+(9) ---> 9*(12) ---> 3*108
    int x3 = (3 * 9 * (3 + (9*3/ (3) ) ) );
    printf("Resultado x3: %d\n",x3);
    return 0;
}