#include <stdio.h>

int main() {
    int num, antecessor, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    // Utilizando exclusivamente os operadores unarios ++ e --
    antecessor = num;
    --antecessor; // Decrementa diretamente
    
    sucessor = num;
    ++sucessor;   // Incrementa diretamente
    
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    return 0;
}