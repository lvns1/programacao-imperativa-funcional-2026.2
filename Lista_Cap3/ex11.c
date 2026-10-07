#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nIntervalo de %d ate %d:\n", a, b);

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}