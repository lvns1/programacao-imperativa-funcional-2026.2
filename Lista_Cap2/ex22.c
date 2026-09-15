#include <stdio.h>

int main() {
    char maiuscula;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);
    
    // Deslocamento de +32 posições na tabela ASCII (ou maiuscula - 'A' + 'a')
    char minuscula = maiuscula + 32;
    
    printf("Letra minuscula correspondente: %c\n", minuscula);
    return 0;
}