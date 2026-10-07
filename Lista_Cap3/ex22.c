#include <stdio.h>

int main(void) {
    int n;

    printf("Digite o numero de linhas N do Triangulo de Floyd: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: N deve ser um inteiro positivo!\n");
        return 1;
    }

    printf("\nTriangulo de Floyd para N = %d:\n\n", n);

    int numero_atual = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t", numero_atual);
            numero_atual++;
        }
        printf("\n");
    }

    return 0;
}