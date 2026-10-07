#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero limite inteiro positivo NUM: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Erro: Forneca um valor inteiro estritamente positivo!\n");
        return 1;
    }

    printf("\nMultiplos de 3 e 5 simultaneamente no intervalo [1, %d]:\n", num);

    int encontrados = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum numero no intervalo satisfaz a condicao.");
    }

    printf("\n\nTotal de numeros encontrados: %d\n", encontrados);

    return 0;
}