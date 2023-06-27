#include <stdio.h>

unsigned char esconderBits(unsigned char x, unsigned char y) {
    if (y < 5) {
        printf("Erro: Y deve ser maior ou igual a 5.\n");
        return x;
    }
    
    unsigned char mascarar = 0xF0;
    
    for (int i = y-1; i >= y-4; i--) {
        x &= ~mascarar;         
        x |= ((x << 4) & mascarar) >> 4; 
    }
    
    for (int i = y+1; i <= y+4; i++) {
        x &= ~mascarar;
        x |= ((x >> 4) & mascarar) << 4;
    }
    
    return x;
}

int main() {
    unsigned char x, y;
    printf("Digite o valor de X: ");
    scanf("%hhu", &x);
    printf("Digite o valor de Y: ");
    scanf("%hhu", &y);
    
    unsigned char resultado = esconderBits(x, y);
    
    printf("Resultado: %hhu\n", resultado);
    
    return 0;
}