#include <stdio.h>

int main() {
    // Carro
    printf("  %c%c%c%c%c%c\n", '\xDC', '\xDC', '\xDC', '\xDC', '\xDC', '\xDC');
    printf("%c%c%c%c%c%c%c%c%c%c\n", '\xDC', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDC');
    printf(" O        O\n\n");

    // Caminhonete
    printf("   %c%c%c%c%c%c%c%c%c%c\n", '\xDC', '\xDC', '\xDC', '\xDC', '\xDC', '\xDC', '\xDC', '\xDC', '\xDC', '\xDC');
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n", '\xDC', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDB', '\xDC');
    printf(" O        O O\n");

    return 0;
}