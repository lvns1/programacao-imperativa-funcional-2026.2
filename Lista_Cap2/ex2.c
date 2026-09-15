#include <stdio.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    // O espaco em branco antes de %c instrui o scanf a ignorar \n, \t e espacos em branco no buffer
    scanf(" %c", &ch);
    printf("Caractere lido: %c\n", ch);
    return 0;
}