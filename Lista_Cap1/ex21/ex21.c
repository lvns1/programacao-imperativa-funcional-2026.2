#include <stdio.h>

int main() {
    // Versão 1: Um único printf
    printf("--- Versao 1 ---\n");
    printf("Treinamento em programação.\nLinguagem C.\n\n");

    // Versão 2: Dois printfs independentes
    printf("--- Versao 2 ---\n");
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n\n");

    // Versão 3: Emoldurado
    printf("--- Versao 3 ---\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
            '\xC9','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
            '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
            '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xBB');
    
    printf("%c Treinamento em programação. %c\n", '\xBA', '\xBA');
    printf("%c Linguagem C.               %c\n", '\xBA', '\xBA');
    
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
            '\xC8','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
            '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD',
            '\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xCD','\xBC');

    return 0;
}