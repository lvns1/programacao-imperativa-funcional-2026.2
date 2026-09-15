#include <stdio.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    
    printf("O caractere '%c' possui o codigo ASCII: %d\n", ch, ch);
    return 0;
}