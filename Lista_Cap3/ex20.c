#include <stdio.h>

int main(void) {
    printf("===========================================\n");
    printf("    TABELA ASCII (CODIGOS 32 A 126)\n");
    printf("===========================================\n");
    printf("%-10s | %-12s | %-10s\n", "Decimal", "Hexadecimal", "Caractere");
    printf("-------------------------------------------\n");

    for (int i = 32; i <= 126; i++) {
        printf("%-10d | 0x%-10X | %-10c\n", i, i, (char)i);
    }

    printf("===========================================\n");
    return 0;
}