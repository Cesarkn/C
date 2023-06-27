#include <stdio.h>

int main(){
    int idade;
    puts("Digite sua idade:");
    scanf("%d",&idade);

    if(idade>=18){
        puts("Bem-Vindo");
    }
    else if(idade<0){
        puts("Voce nem nasceu ainda...");
    }
    else if(idade==0){
        puts("Mas voce esta nascendo agora...");
    }
    else{
        puts("Voce eh muito novo para estar aqui");
    }
    return 0;
}