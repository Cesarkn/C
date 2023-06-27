#include <stdio.h>

int main(){
    printf("Hello World!\n");
    puts("Hello World!");
    //Puts utilizado apenas para uma linha de fala, enquanto printf pode ser utilizado para tudo em geral
    /*
          Sequencia de texto aberto
            extremamente util.
                        \n = nova linha
                        \t = tab 
                        \" = aspas no texto.
                        \\ = contrabarra no texto.
    */
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    printf("\"Hello World!\" - Provavelmente eu mesmo.\n");
    printf("\\Hello World\\\n");
    
    return 0;
}