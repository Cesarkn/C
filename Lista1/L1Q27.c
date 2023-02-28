#include <stdio.h>
#include <math.h>
/*Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a media aritmetica e
geometrica. (Utilize a funcao pow(base, expoente) da biblioteca math.h).*/
int main(){
	float n1,n2,n3,ari,geo;
    puts("Digite 3 numeros separados por espaco:");
    scanf("%f%f%f",&n1,&n2,&n3);
    ari = (n1+n2+n3)/3;
    geo = pow(n1*n2*n3, 0.333333);
    printf("Media Aritmetica: %f\nMedia Geometrica: %f\n",ari,geo);
	return 0;
}
