#include <stdio.h>
#include <string.h>

#define TAM 100

void concatenaComStrcat(char str1[], char str2[]) {
    strcat(str1, str2);
}

void concatenaSemStrcat(char str1[], char str2[]) {
    int i = 0;
    int j = 0;
    
    while (str1[i] != '\0') {
        i++;
    }
    
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    str1[i] = '\0';
}

int main() {
    char str1[TAM];
    char str2[TAM];
    
    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    printf("\nConcatenacao usando strcat():\n");
    concatenaComStrcat(str1, str2);
    printf("Resultado: %s\n\n", str1);
    
    printf("Concatenacao sem usar strcat():\n");
    concatenaSemStrcat(str1, str2);
    printf("Resultado: %s\n\n", str1);
    
    return 0;
}