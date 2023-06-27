#include <stdio.h>

// Definição da estrutura Estoque
struct Estoque {
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {
    struct Estoque estoque;
    
    printf("Digite o nome da peca: ");
    fgets(estoque.nomePeca, sizeof(estoque.nomePeca), stdin);
    
    printf("Digite o numero da peca: ");
    scanf("%d", &estoque.numeroPeca);
    
    printf("Digite o preco da peca: ");
    scanf("%f", &estoque.preco);
    
    printf("Digite o numero do pedido: ");
    scanf("%d", &estoque.numeroPedido);
    
    printf("\n-------------------------------------:\n");
    printf("\nDados do estoque:\n");
    printf("Nome da peca: %s", estoque.nomePeca);
    printf("Numero da peca: %d\n", estoque.numeroPeca);
    printf("Preco da peca: R$%.2f\n", estoque.preco);
    printf("Numero do pedido: %d\n", estoque.numeroPedido);
    printf("\n-------------------------------------:\n");

    return 0;
}
