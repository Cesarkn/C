#include <stdio.h>
#include <stdbool.h>        //necessário para se trabalhar com booleanos

int main(){
    char a = 'C';                       // Caractere unico %c
    char b[] = 'Cesar';                 // lista de caracteres %s 

    float c = 3.141592;                 // 4 bytes (32 bits de precisão) 6 - 7 digitos %f
    double d = 3.141592653589793;       // 8 bytes (64 bits de precisão) 15 - 16 digitos %lf

    bool e = true;                      // 1 byte (true(1) ou false(0)) %d

    char f = 100;                       // 1 byte (-128 a +127) %d ou %c (USAR TABELA ASCII)
    unsigned char g = 255;              // 1 byte (0 a +255) %d ou %c

    short int h = 32767;                // 2 bytes (-32,768 a +32,767) %d
    unsigned short int i = 65535;       // 2 bytes (0 a +65,535) %d

    int j = 2147483647;                 // 4 bytes (-2,147,483,648 a +2,147,483,647) %d
    unsigned int k = 4294967295;        // 4 bytes ( 0 a +4,294,967,295) %u

    long long int l = 9223372036854775807;           //8 bytes(-9 quintilhões a +9 quintilhões) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 a +18 quintilhões) %llu

    printf("%c\n",a);          //char
    printf("%s\n",b);          //character array
    printf("%f\n",c);          //float
    printf("%lf %.2lf\n",d,d); //double
    printf("%d\n",e);          //bool
    printf("%d\n",f);          //char as numeric value
    printf("%d\n",g);          //unsigned char as numeric value
    printf("%d\n",h);          //short
    printf("%d\n",i);          //unsigned short
    printf("%d\n",j);          //int
    printf("%u\n",k);          //unsigned int
    printf("%lld\n",l);        //long long int
    printf("%llu\n",m);        //unsigned long long int
    return 0;
}