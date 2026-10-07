#include <stdio.h>

int main(void) {
    float valor;
    float soma = 0.0f;
    int quantidade = 0;

    printf("--- Acumulador de Valores Reais ---\n");
    printf("Digite valores reais positivos (ou um numero negativo para encerrar):\n");

    while (1) {
        printf("Digite um valor: ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada invalida! Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }

        if (valor < 0.0f) {
            break; // Sentinela ativada
        }

        soma += valor;
        quantidade++;
    }

    printf("\n--- RESULTADO DA ACUMULACAO ---\n");
    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi digitado para calcular a media.\n");
    }

    return 0;
}