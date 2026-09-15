#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", num, num, num, num);
    return 0;
}