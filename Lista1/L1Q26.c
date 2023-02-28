#include <stdio.h>
#include <math.h>
/*Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distancia entre os dois
pontos no plano. (Utilize a funcao sqrt (numero), biblioteca math.h).*/
int main(){
	double x1,x2,y1,y2,d;
    puts("Insira o valor da primeira coordenada separando o x e o y por um espaco:");
    scanf("%lf%lf",&x1,&y1);
    puts("Insira o valor da segunda coordenada separando o x e o y por um espaco:");
    scanf("%lf%lf",&x2,&y2);
    d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("Distancia = %lf",d);
	return 0;
}
