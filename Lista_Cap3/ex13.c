#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro nao-negativo N: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo (%d)!\n", n);
        return 1;
    }

    long long int fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("\n%d! = %lld\n", n, fatorial);

    return 0;
}