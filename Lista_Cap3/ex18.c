#include <stdio.h>

int main(void) {
    int numero_original, temp;
    int numero_invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &numero_original) != 1 || numero_original <= 0) {
        printf("Erro: Por favor, informe um inteiro positivo valido!\n");
        return 1;
    }

    temp = numero_original;

    while (temp > 0) {
        int ultimo_digito = temp % 10;
        numero_invertido = (numero_invertido * 10) + ultimo_digito;
        temp /= 10;
    }

    printf("\nNumero original:  %d\n", numero_original);
    printf("Numero invertido: %d\n", numero_invertido);

    return 0;
}