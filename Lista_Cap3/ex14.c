#include <stdio.h>

int main(void) {
    long long int soma_quadrados = 0;

    printf("--- Sequencia de Inteiros e Seus Quadrados (1 a 100) ---\n\n");

    for (int i = 1; i <= 100; i++) {
        long long int quadrado = (long long int)i * i;
        soma_quadrados += quadrado;
        printf("%3d -> %5lld\n", i, quadrado);
    }

    printf("\n===============================================\n");
    printf("Soma total dos quadrados (1 a 100) = %lld\n", soma_quadrados);
    printf("===============================================\n");

    return 0;
}