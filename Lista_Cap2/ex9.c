#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    
    // Divisão real tratada com cast para float
    if (b != 0) {
        printf("Divisao real: %.2f\n", (float)a / (float)b);
    } else {
        printf("Divisao por zero nao eh permitida na matematica.\n");
    }
    
    return 0;
}