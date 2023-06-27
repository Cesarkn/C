#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int gerarNumero(int min, int max) {
    return min + rand() % (max - min + 1);
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selecaoSort(int vetor[], int tamanho) {
    int i, j, minIndex;
    
    for (i = 0; i < tamanho - 1; i++) {
        minIndex = i;
        
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minIndex])
                minIndex = j;
        }
        
        if (minIndex != i)
            trocar(&vetor[i], &vetor[minIndex]);
    }
}

void bubbleSort(int vetor[], int tamanho) {
    int i, j;
    
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1])
                trocar(&vetor[j], &vetor[j + 1]);
        }
    }
}

int main() {
    int vetor[TAM];
    int i, min, max;
    
    printf("Informe o intervalo minimo: ");
    scanf("%d", &min);
    
    printf("Informe o intervalo maximo: ");
    scanf("%d", &max);
    
    srand(time(NULL));
    
    for (i = 0; i < TAM; i++) {
        vetor[i] = gerarNumero(min, max);
    }
    
    printf("\nVetor gerado:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    
    // Ordenação por seleção
    selecaoSort(vetor, TAM);
    
    printf("\n\nVetor ordenado (por selecao):\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    
    // Ordenação bubble sort
    bubbleSort(vetor, TAM);
    
    printf("\n\nVetor ordenado (por bubble sort):\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}