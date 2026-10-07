#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: Forneca um numero inteiro estritamente positivo!\n");
        return 1;
    }

    int divisores = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("\nAnalise do numero %d:\n", n);
    printf("Quantidade de divisores encontrados: %d\n", divisores);

    if (divisores == 2) {
        printf("Conclusao: O numero %d EH PRIMO!\n", n);
    } else {
        printf("Conclusao: O numero %d NAO EH PRIMO.\n", n);
    }

    return 0;
}