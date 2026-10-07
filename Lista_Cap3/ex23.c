#include <stdio.h>

int main(void) {
    int lado;

    do {
        printf("Digite o lado L do quadrado (entre 3 e 20): ");
        if (scanf("%d", &lado) != 1) {
            while (getchar() != '\n');
            lado = 0;
        }
        if (lado < 3 || lado > 20) {
            printf("Erro: O lado deve estar estritamente entre 3 e 20!\n\n");
        }
    } while (lado < 3 || lado > 20);

    printf("\nQuadrado vazado de lado %d:\n\n", lado);

    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}