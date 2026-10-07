#include <stdio.h>

int main(void) {
    int n;

    do {
        printf("Digite uma dimensao impar N para o padrao (entre 3 e 19): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }

        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Erro: A dimensao deve ser um numero IMPAR entre 3 e 19!\n\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    printf("\nPadrao em X de dimensao %d:\n\n", n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}