#include <stdio.h>

int main(void) {
    printf("--- Os 100 primeiros multiplos positivos de 3 ---\n\n");

    for (int i = 1; i <= 100; i++) {
        int multiplo = i * 3;
        printf("%d\t", multiplo);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}